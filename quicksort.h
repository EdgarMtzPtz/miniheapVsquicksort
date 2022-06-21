#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class quick {
private:
	vector<int> list;

	void swap(int *a, int *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	void partition(int low, int high, int & i, int & j) {
		// To handle 2 elements 
		if (high - low <= 1)
		{
			if (list[high] < list[low])
				swap(&list[high], &list[low]);
			i = low;
			j = high;
			return;
		}

		int mid = low;
		int pivot = list[high];
		while (mid <= high)
		{
			if (list[mid]<pivot)
				swap(&list[low++], &list[mid++]);
			else if (list[mid] == pivot)
				mid++;
			else if (list[mid]>pivot)
				swap(&list[mid], &list[high--]);
		}

		//update i and j 
		i = low - 1;
		j = mid; //or high-1 
	}
	void quicksortforreal(int x, int y) {
		if (x >= y) {
			return;
		}
		int i, j;
		partition(x,y,i,j);
		quicksortforreal(x, i);
		quicksortforreal(j, y);
	}
public:

	quick() {

	}
	void insert(int x) {
		list.push_back(x);
	}
	void quicksort() {
		quicksortforreal(0, list.size() - 1);
	}
	void display() {
		for (int i = 0; i < list.size(); i++) {
			cout << list[i] << endl;
		}
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
	void pop() {
		list.erase(list.begin());
	}
	int popandr() {
		int x = list[0];
		list.erase(list.begin());
		return x;
	}
};
