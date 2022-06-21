#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

class MinHeap
{
private:
	vector<int> H;

	

	//is node at index i in violation
	//with parent node.
	bool parent_violation(int i)
	{
		if (H[i] < H[parent(i)])
			return true;
		else
			return false;
	}

	//bubble item at index position
	//up heap until it doesn't violate with
	//it's parent.
	void bubble_up(int index)
	{
		while (parent_violation(index))
		{
			swap(H[index], H[parent(index)]);
			index = parent(index);
		}
	}

	bool children_violation(int i) {
		/*cout << "Enter children violation with i =" << i << " and H.size()=" << H.size() << endl;
		cout << "right children is: " << rightchildren(i) << endl;*/
		if (leftchildren(i) > H.size() - 1) //if I is bigger than the size there is no violations
		{
			//cout << "I is bigger than the size there is no violations" << endl;
			return false;
		}

		if (rightchildren(i)>H.size() - 1) //check if the right doesn't exist 
		{
			//cout << "it enter the second if: ";
			if (H[i] > H[leftchildren(i)]) { //left violation
														   //cout << " it yield true" << endl;
				return true;
			}
			else {
				//cout << "it yielded false" << endl;
				return false;

			}

		}
		if (H[i] > H[rightchildren(i)] || H[i] > H[leftchildren(i)]) {
			//cout << "enter the third if with true" << endl;
			return true;
		}
		else {
			//cout << "enter the third with false" << endl;
			return false;
		}
	}
	void bubble_down(int index)
	{
		//cout << "index: " << index << " H.size()-1: " << H.size() - 1 << endl;
		while (children_violation(index))
		{
			/*cout << "current index: " << index << " it holds: " << H[index].second << endl;
			if (leftchildren(index) < H.size()-1)
			cout << "# of left children is " << leftchildren(index) << " it holds: " << H[leftchildren(index)].second << endl;
			if (rightchildren(index) < H.size()-1)
			cout << "# of right children is " << rightchildren(index) << " it holds: " << H[rightchildren(index)].second << endl;*/
			//if (((i+1)*2>H.size()|| (i*2)+1>H.size()) {//then there is only one children
			if (rightchildren(index) > H.size() - 1) //this means the violation is in the left children
			{
				//cout << "it enter the right children case: " << leftchildren(index) << endl;
				
				swap(H[index], H[leftchildren(index)]);
				index = leftchildren(index);
			}
			else {

				if (H[leftchildren(index)] < H[rightchildren(index)]) {
					//cout << "left case: " << leftchildren(index) << endl;
					
					swap(H[index], H[leftchildren(index)]);

					//auto it = I.find(H[index].first);
					//auto it0 = I.find(H[leftchildren(index)].first);

					//int tmp = it->second; //I.find(H[index].first);
					//int tmp0 = it0->second; //I.find(H[leftchildren(index)].first);

					//it->second = tmp0; //I.find(H[index].first) = tmp0;
					//it0->second = tmp; //I.find(H[leftchildren(index)].first) = tmp;
					//swap(I.find(H[index].first), I.find(H[leftchildren(index)].first));
					index = leftchildren(index);
				}
				else
				{
					//cout << "right case: " << rightchildren(index) << endl;
					
					swap(H[index], H[rightchildren(index)]);

					//auto it = I.find(H[index].first);
					//auto it0 = I.find(H[rightchildren(index)].first);

					//int tmp = it->second; //I.find(H[index].first);
					//int tmp0 = it0->second; //I.find(H[leftchildren(index)].first);

					//it->second = tmp0; //I.find(H[index].first) = tmp0;
					//it0->second = tmp; //I.find(H[leftchildren(index)].first) = tmp;

					/*int tmp = I.find(H[index].first);
					int tmp0 = I.find(H[rightchildren(index)].first);
					I.find(H[index].first) = tmp0;
					I.find(H[rightchildren(index)].first) = tmp;*/

					//swap(I.find(H[index].first), I.find(H[rightchildren(index)].first));
					index = rightchildren(index);
				}
			}
		}
	}
	int parent(int i)
	{
		return (i - 1) / 2;
	}
	int rightchildren(int i) {
		//if (i % 2 == 0)// even
		//	return (i * 2) + 1;
		//else //odd
		return (i + 1) * 2;
	}
	int leftchildren(int i) {
		//if (i % 2 == 0)//even
		//	return (i + 1) * 2;
		//else //odd
		return (i * 2) + 1;
	}

public:

	MinHeap()
	{

	}

	void docin(string name)
	{
		//fstream file;
		//file.open("test.txt");
		ifstream f;
		f.open(name);
		int x;
		f >> x;
		while (!f.eof()) {
			insert(x);
			f >> x;
		}
		f.close();
	}
	void insert(int x)
	{
		//step 1: put x at end of vector,
		//ie, make it a new leaf of the tree on the bottom level
		H.push_back(x);

		//step 2:  bubble item up heap
		//until no more violation exists
		bubble_up(H.size() - 1);
	}

	void test_display()
	{
		for (int i = 0; i < H.size(); i++)
			cout << i << ": " << H[i] << endl;
		cout << endl;
	}
	void displaytop() {
		cout << H[0] << endl;
	}

	void pop()
	{
		// TODO	
		if (H.empty()) {
			//cout << "nothing to pop";
		}
		else if (H.size() == 1) {
			//I.erase(H[0].first);
			H.pop_back();
		}
		else
		{

			//I.erase(H[0].first); //errase from I
			swap(H[0], H[H.size() - 1]);
			H.pop_back();

			//rebubbly
			if (H.size() == 1 || H.empty()) {
				//don't do a thing
			}
			else
				bubble_down(0);

		}
	}
	int popandr()
	{
		int x=0;
		// TODO	
		if (H.empty()) {
			//cout << "nothing to pop";
			return NULL;
		}
		else if (H.size() == 1) {
			//I.erase(H[0].first);
			x = H[0];
			H.pop_back();
			
		}
		else
		{
			x = H[0];
			//I.erase(H[0].first); //errase from I
			swap(H[0], H[H.size() - 1]);
			H.pop_back();

			//rebubbly
			if (H.size() == 1 || H.empty()) {
				//don't do a thing
			}
			else
				bubble_down(0);

		}
		return x;
	}
};
