#include"miniheap.h"
#include"quicksort.h"
#include <fstream>
#include <stdlib.h> 
#include <time.h>


int main() {

	srand(time(NULL));
	/*srand(time(NULL));
	for (int i = 0; i < 20; i++)
	{
		file << rand() % 100000 << endl;
	}*/
	//clock_t h = clock();
	//MinHeap H;
	//quick Q;

	//H.docin("list10.txt");
	//cout << double(clock() - h) / (double)CLOCKS_PER_SEC << " seconds." << endl;
	//clock_t q = clock();
	//Q.docin("list10.txt");
	//Q.quicksort();
	//cout << double(clock() - q) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	//for (int i = 0; i < 100000; i++)
	//{
	//	//cout << "H[" << i << "]=" << H.popandr() << "	Q[" << i << "]=" << Q.popandr() << endl;
	//	if (H.popandr() != Q.popandr()) {
	//		cout << i << " a number is not equal" << endl;
	//}
	//

	//}

	//this is test no 1

	int k1, k2, k3, k4, k5;
	
	//cout<<"The random numbers are K1: "
	 k1 = rand() % 3125;
	k2 = rand() % 3125+ 3125;
	k3 = rand() % 6250+ 6250;
	k4 = rand() % 12500+ 12500;
	k5 = rand() % 50000+50000;
	cout << "The random numbers for K1: "<<k1 << endl;
	cout << "The random numbers for K2: " << k2 << endl;
	cout << "The random numbers for K3: " << k3 << endl;
	cout << "The random numbers for K4: " << k4 << endl;
	cout << "The random numbers for K5: " << k5 << endl;

	clock_t h = clock();
	MinHeap H;
	H.docin("list1.txt");
	int Hp = 0;
	int Hk1 = 0;
	int Hk2 = 0;
	int Hk3 = 0;
	int Hk4 = 0;
	int Hk5 = 0;

	for (int i = 0; i <= k5; i++) {
		if (i == k1 || i == k2 || i == k3 || i == k4 || i == k5) {
			if (i == k1) {
				Hk1 = H.popandr();
			}
			if (i == k2) {
				Hk2 = H.popandr();
			}
			if (i == k3) {
				Hk3 = H.popandr();
			}
			if (i == k4) {
				Hk4 = H.popandr();
			}
			if (i == k5) {
				Hk5 = H.popandr();
			}
		}
		else {
			H.pop();
		}
	}

	
	cout<<"Min Heap took: " << double(clock() - h) / (double)CLOCKS_PER_SEC << " seconds." << endl;


	clock_t q = clock();
	quick Q;
	Q.docin("list1.txt");
	Q.quicksort();
	int qp = 0;
	int qk1 = 0;
	int qk2 = 0;
	int qk3 = 0;
	int qk4 = 0;
	int qk5 = 0;

	for (int i = 0; i <= k5; i++) {
		if (i == k1 || i == k2 || i == k3 || i == k4 || i == k5) {
			if (i == k1) {
				qk1 = Q.popandr();
			}
			if (i == k2) {
				qk2 = Q.popandr();
			}
			if (i == k3) {
				qk3 = Q.popandr();
			}
			if (i == k4) {
				qk4 = Q.popandr();
			}
			if (i == k5) {
				qk5 = Q.popandr();
			}
		}
		else {
			Q.pop();
		}
	}

	cout<<"quick sort took: " << double(clock() - q) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	cout << "Heap k1 =" << Hk1 << " Quick k1 =" << qk1 << endl;
	cout << "Heap k2 =" << Hk2 << " Quick k2 =" << qk2 << endl;
	cout << "Heap k3 =" << Hk3 << " Quick k3 =" << qk3 << endl;
	cout << "Heap k4 =" << Hk4 << " Quick k4 =" << qk4 << endl;
	cout << "Heap k5 =" << Hk5 << " Quick k5 =" << qk5 << endl;

	cout << endl << endl;
	//this is test no 2
	int k12, k22, k32, k42, k52;

	//cout<<"The random numbers are K1: "
	k12 = rand() % 3125;
	k22 = rand() % 3125 + 3125;
	k32 = rand() % 6250 + 6250;
	k42 = rand() % 12500 + 12500;
	k52 = rand() % 50000 + 50000;
	cout << "The random numbers for K1: " << k12 << endl;
	cout << "The random numbers for K2: " << k22 << endl;
	cout << "The random numbers for K3: " << k32 << endl;
	cout << "The random numbers for K4: " << k42 << endl;
	cout << "The random numbers for K5: " << k52 << endl;

	clock_t h2 = clock();
	MinHeap H2;
	H2.docin("list2.txt");
	int Hp2 = 0;
	int Hk12 = 0;
	int Hk22 = 0;
	int Hk32 = 0;
	int Hk42 = 0;
	int Hk52 = 0;

	for (int i2 = 0; i2 <= k52; i2++) {
		
		if (i2 == k12 || i2 == k22 || i2 == k32 || i2 == k42 || i2 == k52) {
			
			if (i2 == k12) {
				Hk12 = H2.popandr();
			}
			if (i2 == k22) {
				Hk22 = H2.popandr();
			}
			if (i2 == k32) {
				Hk32 = H2.popandr();
			}
			if (i2 == k42) {
				Hk42 = H2.popandr();
			}
			if (i2 == k52) {
				Hk52 = H2.popandr();
			}
		}
		else {
			H2.pop();
		}
	}


	cout << "Min Heap took: " << double(clock() - h2) / (double)CLOCKS_PER_SEC << " seconds." << endl;


	clock_t q2 = clock();
	quick Q2;
	Q2.docin("list2.txt");
	Q2.quicksort();
	int qp2 = 0;
	int qk12 = 0;
	int qk22 = 0;
	int qk32 = 0;
	int qk42 = 0;
	int qk52 = 0;

	for (int i2 = 0; i2 <= k52; i2++) {
		if (i2 == k12 || i2 == k22 || i2 == k32 || i2 == k42 || i2 == k52) {
			if (i2 == k12) {
				qk12 = Q2.popandr();
			}
			if (i2 == k22) {
				qk22 = Q2.popandr();
			}
			if (i2 == k32) {
				qk32 = Q2.popandr();
			}
			if (i2 == k42) {
				qk42 = Q2.popandr();
			}
			if (i2 == k52) {
				qk52 = Q2.popandr();
			}
		}
		else {
			Q2.pop();
		}
	}

	cout << "quick sort took: " << double(clock() - q2) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	cout << "Heap k1 =" << Hk12 << " Quick k1 =" << qk12 << endl;
	cout << "Heap k2 =" << Hk22 << " Quick k2 =" << qk22 << endl;
	cout << "Heap k3 =" << Hk32 << " Quick k3 =" << qk32 << endl;
	cout << "Heap k4 =" << Hk42 << " Quick k4 =" << qk42 << endl;
	cout << "Heap k5 =" << Hk52 << " Quick k5 =" << qk52 << endl;
	cout << endl << endl;
	//this is test no 3

	int k13, k23, k33, k43, k53;

	//cout<<"The random numbers are K1: "
	k13 = rand() % 3125;
	k23 = rand() % 3125 + 3125;
	k33 = rand() % 6250 + 6250;
	k43 = rand() % 12500 + 12500;
	k53 = rand() % 50000 + 50000;
	cout << "The random numbers for K1: " << k13 << endl;
	cout << "The random numbers for K2: " << k23 << endl;
	cout << "The random numbers for K3: " << k33 << endl;
	cout << "The random numbers for K4: " << k43<< endl;
	cout << "The random numbers for K5: " << k53 << endl;

	clock_t h3 = clock();
	MinHeap H3;
	H3.docin("list3.txt");
	int Hp3 = 0;
	int Hk13 = 0;
	int Hk23 = 0;
	int Hk33 = 0;
	int Hk43 = 0;
	int Hk53 = 0;

	for (int i3 = 0; i3 <= k53; i3++) {
		if (i3 == k13 || i3 == k23 || i3 == k33 || i3 == k43 || i3 == k53) {
			if (i3 == k13) {
				Hk13 = H3.popandr();
			}
			if (i3 == k23) {
				Hk23 = H3.popandr();
			}
			if (i3 == k33) {
				Hk33 = H3.popandr();
			}
			if (i3 == k43) {
				Hk43 = H3.popandr();
			}
			if (i3 == k53) {
				Hk53 = H3.popandr();
			}
		}
		else {
			H3.pop();
		}
	}


	cout << "Min Heap took: " << double(clock() - h3) / (double)CLOCKS_PER_SEC << " seconds." << endl;


	clock_t q3 = clock();
	quick Q3;
	Q3.docin("list3.txt");
	Q3.quicksort();
	int qp3 = 0;
	int qk13 = 0;
	int qk23 = 0;
	int qk33 = 0;
	int qk43 = 0;
	int qk53 = 0;

	for (int i3 = 0; i3 <= k53; i3++) {
		if (i3 == k13 || i3 == k23 || i3 == k33 || i3 == k43 || i3 == k53) {
			if (i3 == k13) {
				qk13 = Q3.popandr();
			}
			if (i3 == k23) {
				qk23 = Q3.popandr();
			}
			if (i3 == k33) {
				qk33 = Q3.popandr();
			}
			if (i3 == k43) {
				qk43 = Q3.popandr();
			}
			if (i3 == k53) {
				qk53 = Q3.popandr();
			}
		}
		else {
			Q3.pop();
		}
	}

	cout << "quick sort took: " << double(clock() - q3) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	cout << "Heap k1 =" << Hk13 << " Quick k1 =" << qk13 << endl;
	cout << "Heap k2 =" << Hk23 << " Quick k2 =" << qk23 << endl;
	cout << "Heap k3 =" << Hk33 << " Quick k3 =" << qk33 << endl;
	cout << "Heap k4 =" << Hk43 << " Quick k4 =" << qk43 << endl;
	cout << "Heap k5 =" << Hk53 << " Quick k5 =" << qk53 << endl;
	cout << endl << endl;
	//this is test no 4

	int k14, k24, k34, k44, k54;

	//cout<<"The random numbers are K1: "
	k14 = rand() % 3125;
	k24 = rand() % 3125 + 3125;
	k34 = rand() % 6250 + 6250;
	k44 = rand() % 12500 + 12500;
	k54 = rand() % 50000 + 50000;
	cout << "The random numbers for K1: " << k14 << endl;
	cout << "The random numbers for K2: " << k24 << endl;
	cout << "The random numbers for K3: " << k34 << endl;
	cout << "The random numbers for K4: " << k44 << endl;
	cout << "The random numbers for K5: " << k54 << endl;

	clock_t h4 = clock();
	MinHeap H4;
	H4.docin("list4.txt");
	int Hp4 = 0;
	int Hk14 = 0;
	int Hk24 = 0;
	int Hk34 = 0;
	int Hk44 = 0;
	int Hk54 = 0;

	for (int i4 = 0; i4 <= k54; i4++) {
		if (i4 == k14 || i4 == k24 || i4 == k34 || i4 == k44 || i4 == k54) {
			if (i4 == k14) {
				Hk14 = H4.popandr();
			}
			if (i4 == k24) {
				Hk24 = H4.popandr();
			}
			if (i4 == k34) {
				Hk34 = H4.popandr();
			}
			if (i4 == k44) {
				Hk44 = H4.popandr();
			}
			if (i4 == k54) {
				Hk54 = H4.popandr();
			}
		}
		else {
			H4.pop();
		}
	}


	cout << "Min Heap took: " << double(clock() - h4) / (double)CLOCKS_PER_SEC << " seconds." << endl;


	clock_t q4 = clock();
	quick Q4;
	Q4.docin("list4.txt");
	Q4.quicksort();
	
	int qk14 = 0;
	int qk24 = 0;
	int qk34 = 0;
	int qk44 = 0;
	int qk54 = 0;

	for (int i4 = 0; i4 <= k54; i4++) {
		if (i4 == k14 || i4 == k24 || i4 == k34 || i4 == k44 || i4 == k54) {
			if (i4 == k14) {
				qk14 = Q4.popandr();
			}
			if (i4 == k24) {
				qk24 = Q4.popandr();
			}
			if (i4 == k34) {
				qk34 = Q4.popandr();
			}
			if (i4 == k44) {
				qk44 = Q4.popandr();
			}
			if (i4 == k54) {
				qk54 = Q4.popandr();
			}
		}
		else {
			Q4.pop();
		}
	}

	cout << "quick sort took: " << double(clock() - q4) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	cout << "Heap k1 =" << Hk14 << " Quick k1 =" << qk14 << endl;
	cout << "Heap k2 =" << Hk24 << " Quick k2 =" << qk24 << endl;
	cout << "Heap k3 =" << Hk34 << " Quick k3 =" << qk34 << endl;
	cout << "Heap k4 =" << Hk44 << " Quick k4 =" << qk44 << endl;
	cout << "Heap k5 =" << Hk54 << " Quick k5 =" << qk54 << endl;
	cout << endl << endl;
	////this is test no 5

	int k15, k25, k35, k45, k55;

	//cout<<"The random numbers are K1: "
	k15 = rand() % 3125;
	k25 = rand() % 3125 + 3125;
	k35 = rand() % 6250 + 6250;
	k45 = rand() % 12500 + 12500;
	k55 = rand() % 50000 + 50000;
	cout << "The random numbers for K1: " << k15 << endl;
	cout << "The random numbers for K2: " << k25 << endl;
	cout << "The random numbers for K3: " << k35 << endl;
	cout << "The random numbers for K4: " << k45 << endl;
	cout << "The random numbers for K5: " << k55 << endl;

	clock_t h5 = clock();
	MinHeap H5;
	H5.docin("list5.txt");
	
	int Hk15 = 0;
	int Hk25 = 0;
	int Hk35 = 0;
	int Hk45 = 0;
	int Hk55 = 0;

	for (int i5 = 0; i5 <= k55; i5++) {
		if (i5 == k15 || i5 == k25 || i5 == k35 || i5 == k45 || i5 == k55) {
			if (i5 == k15) {
				Hk15 = H5.popandr();
			}
			if (i5 == k25) {
				Hk25 = H5.popandr();
			}
			if (i5 == k35) {
				Hk35 = H5.popandr();
			}
			if (i5 == k45) {
				Hk45 = H5.popandr();
			}
			if (i5 == k55) {
				Hk55 = H5.popandr();
			}
		}
		else {
			H5.pop();
		}
	}


	cout << "Min Heap took: " << double(clock() - h5) / (double)CLOCKS_PER_SEC << " seconds." << endl;


	clock_t q5 = clock();
	quick Q5;
	Q5.docin("list5.txt");
	Q5.quicksort();
	
	int qk15 = 0;
	int qk25 = 0;
	int qk35 = 0;
	int qk45 = 0;
	int qk55 = 0;

	for (int i5 = 0; i5 <= k55; i5++) {
		if (i5 == k15 || i5 == k25|| i5 == k35 || i5 == k45 || i5 == k55) {
			if (i5 == k15) {
				qk15 = Q5.popandr();
			}
			if (i5 == k25) {
				qk25 = Q5.popandr();
			}
			if (i5 == k35) {
				qk35 = Q5.popandr();
			}
			if (i5 == k45) {
				qk45 = Q5.popandr();
			}
			if (i5 == k55) {
				qk55 = Q5.popandr();
			}
		}
		else {
			Q5.pop();
		}
	}

	cout << "quick sort took: " << double(clock() - q5) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	cout << "Heap k1 =" << Hk15 << " Quick k1 =" << qk15 << endl;
	cout << "Heap k2 =" << Hk25 << " Quick k2 =" << qk25 << endl;
	cout << "Heap k3 =" << Hk35 << " Quick k3 =" << qk35 << endl;
	cout << "Heap k4 =" << Hk45 << " Quick k4 =" << qk45 << endl;
	cout << "Heap k5 =" << Hk55 << " Quick k5 =" << qk55 << endl;
	cout << endl << endl;
	////this is test no 6

	int k16, k26, k36, k46, k56;

	//cout<<"The random numbers are K1: "
	k16 = rand() % 3125;
	k26 = rand() % 3125 + 3125;
	k36= rand() % 6250 + 6250;
	k46 = rand() % 12500 + 12500;
	k56 = rand() % 50000 + 50000;
	cout << "The random numbers for K1: " << k16 << endl;
	cout << "The random numbers for K2: " << k26 << endl;
	cout << "The random numbers for K3: " << k36 << endl;
	cout << "The random numbers for K4: " << k46 << endl;
	cout << "The random numbers for K5: " << k56 << endl;

	clock_t h6 = clock();
	MinHeap H6;
	H6.docin("list6.txt");
	
	int Hk16 = 0;
	int Hk26 = 0;
	int Hk36 = 0;
	int Hk46 = 0;
	int Hk56 = 0;

	for (int i6 = 0; i6 <= k56; i6++) {
		if (i6 == k16 || i6 == k26 || i6 == k36 || i6 == k46 || i6 == k56) {
			if (i6 == k16) {
				Hk16 = H6.popandr();
			}
			if (i6 == k26) {
				Hk26 = H6.popandr();
			}
			if (i6 == k36) {
				Hk36 = H6.popandr();
			}
			if (i6 == k46) {
				Hk46 = H6.popandr();
			}
			if (i6 == k56) {
				Hk56 = H6.popandr();
			}
		}
		else {
			H6.pop();
		}
	}


	cout << "Min Heap took: " << double(clock() - h6) / (double)CLOCKS_PER_SEC << " seconds." << endl;


	clock_t q6 = clock();
	quick Q6;
	Q6.docin("list6.txt");
	Q6.quicksort();
	
	int qk16 = 0;
	int qk26 = 0;
	int qk36 = 0;
	int qk46 = 0;
	int qk56 = 0;

	for (int i6 = 0; i6 <= k56; i6++) {
		if (i6 == k16 || i6 == k26 || i6 == k36 || i6 == k46 || i6 == k56) {
			if (i6 == k16) {
				qk16 = Q6.popandr();
			}
			if (i6 == k26) {
				qk26 = Q6.popandr();
			}
			if (i6 == k36) {
				qk36 = Q6.popandr();
			}
			if (i6 == k46) {
				qk46 = Q6.popandr();
			}
			if (i6 == k56) {
				qk56 = Q6.popandr();
			}
		}
		else {
			Q6.pop();
		}
	}

	cout << "quick sort took: " << double(clock() - q6) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	cout << "Heap k1 =" << Hk16 << " Quick k1 =" << qk16 << endl;
	cout << "Heap k2 =" << Hk26 << " Quick k2 =" << qk26 << endl;
	cout << "Heap k3 =" << Hk36 << " Quick k3 =" << qk36 << endl;
	cout << "Heap k4 =" << Hk46 << " Quick k4 =" << qk46 << endl;
	cout << "Heap k5 =" << Hk56 << " Quick k5 =" << qk56 << endl;
	cout << endl << endl;
	//this is test no 7

	int k17, k27, k37, k47, k57;

	//cout<<"The random numbers are K1: "
	k17 = rand() % 3125;
	k27 = rand() % 3125 + 3125;
	k37 = rand() % 6250 + 6250;
	k47 = rand() % 12500 + 12500;
	k57 = rand() % 50000 + 50000;
	cout << "The random numbers for K1: " << k17 << endl;
	cout << "The random numbers for K2: " << k27 << endl;
	cout << "The random numbers for K3: " << k37 << endl;
	cout << "The random numbers for K4: " << k47 << endl;
	cout << "The random numbers for K5: " << k57 << endl;

	clock_t h7 = clock();
	MinHeap H7;
	H7.docin("list7.txt");
	
	int Hk17 = 0;
	int Hk27 = 0;
	int Hk37 = 0;
	int Hk47 = 0;
	int Hk57 = 0;

	for (int i7 = 0; i7 <= k57; i7++) {
		if (i7 == k17 || i7 == k27 || i7 == k37 || i7 == k47 || i7 == k57) {
			if (i7 == k17) {
				Hk17 = H7.popandr();
			}
			if (i7 == k27) {
				Hk27 = H7.popandr();
			}
			if (i7 == k37) {
				Hk37 = H7.popandr();
			}
			if (i7 == k47) {
				Hk47 = H7.popandr();
			}
			if (i7 == k57) {
				Hk57 = H7.popandr();
			}
		}
		else {
			H7.pop();
		}
	}


	cout << "Min Heap took: " << double(clock() - h7) / (double)CLOCKS_PER_SEC << " seconds." << endl;


	clock_t q7 = clock();
	quick Q7;
	Q7.docin("list7.txt");
	Q7.quicksort();
	
	int qk17 = 0;
	int qk27 = 0;
	int qk37 = 0;
	int qk47 = 0;
	int qk57 = 0;

	for (int i7 = 0; i7 <= k57; i7++) {
		if (i7 == k17 || i7 == k27 || i7 == k37 || i7 == k47 || i7 == k57) {
			if (i7 == k17) {
				qk17 = Q7.popandr();
			}
			if (i7 == k27) {
				qk27 = Q7.popandr();
			}
			if (i7 == k37) {
				qk37 = Q7.popandr();
			}
			if (i7 == k47) {
				qk47 = Q7.popandr();
			}
			if (i7 == k57) {
				qk57 = Q7.popandr();
			}
		}
		else {
			Q7.pop();
		}
	}

	cout << "quick sort took: " << double(clock() - q7) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	cout << "Heap k1 =" << Hk17 << " Quick k1 =" << qk17 << endl;
	cout << "Heap k2 =" << Hk27 << " Quick k2 =" << qk27 << endl;
	cout << "Heap k3 =" << Hk37 << " Quick k3 =" << qk37 << endl;
	cout << "Heap k4 =" << Hk47 << " Quick k4 =" << qk47 << endl;
	cout << "Heap k5 =" << Hk57 << " Quick k5 =" << qk57 << endl;
	cout << endl << endl;
	//this is test no 8

	int k18, k28, k38, k48, k58;

	//cout<<"The random numbers are K1: "
	k18 = rand() % 3125;
	k28 = rand() % 3125 + 3125;
	k38 = rand() % 6250 + 6250;
	k48 = rand() % 12500 + 12500;
	k58 = rand() % 50000 + 50000;
	cout << "The random numbers for K1: " << k18 << endl;
	cout << "The random numbers for K2: " << k28 << endl;
	cout << "The random numbers for K3: " << k38 << endl;
	cout << "The random numbers for K4: " << k48 << endl;
	cout << "The random numbers for K5: " << k58 << endl;

	clock_t h8 = clock();
	MinHeap H8;
	H8.docin("list8.txt");
	
	int Hk18 = 0;
	int Hk28 = 0;
	int Hk38 = 0;
	int Hk48 = 0;
	int Hk58 = 0;

	for (int i8 = 0; i8 <= k58; i8++) {
		if (i8 == k18 || i8 == k28 || i8 == k38 || i8 == k48 || i8 == k58) {
			if (i8 == k18) {
				Hk18 = H8.popandr();
			}
			if (i8 == k28) {
				Hk28 = H8.popandr();
			}
			if (i8 == k38) {
				Hk38 = H8.popandr();
			}
			if (i8 == k48) {
				Hk48 = H8.popandr();
			}
			if (i8 == k58) {
				Hk58 = H8.popandr();
			}
		}
		else {
			H8.pop();
		}
	}


	cout << "Min Heap took: " << double(clock() - h8) / (double)CLOCKS_PER_SEC << " seconds." << endl;


	clock_t q8 = clock();
	quick Q8;
	Q8.docin("list8.txt");
	Q8.quicksort();
	
	int qk18 = 0;
	int qk28 = 0;
	int qk38 = 0;
	int qk48 = 0;
	int qk58 = 0;

	for (int i8 = 0; i8 <= k58; i8++) {
		if (i8 == k18 || i8 == k28 || i8 == k38 || i8 == k48 || i8 == k58) {
			if (i8 == k18) {
				qk18 = Q8.popandr();
			}
			if (i8 == k28) {
				qk28 = Q8.popandr();
			}
			if (i8 == k38) {
				qk38 = Q8.popandr();
			}
			if (i8 == k48) {
				qk48 = Q8.popandr();
			}
			if (i8 == k58) {
				qk58 = Q8.popandr();
			}
		}
		else {
			Q8.pop();
		}
	}

	cout << "quick sort took: " << double(clock() - q8) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	cout << "Heap k1 =" << Hk18 << " Quick k1 =" << qk18 << endl;
	cout << "Heap k2 =" << Hk28 << " Quick k2 =" << qk28<< endl;
	cout << "Heap k3 =" << Hk38 << " Quick k3 =" << qk38 << endl;
	cout << "Heap k4 =" << Hk48 << " Quick k4 =" << qk48 << endl;
	cout << "Heap k5 =" << Hk58 << " Quick k5 =" << qk58 << endl;
	cout << endl << endl;
	//this is test no 9

	int k19, k29, k39, k49, k59;

	//cout<<"The random numbers are K1: "
	k19 = rand() % 3125;
	k29 = rand() % 3125 + 3125;
	k39 = rand() % 6250 + 6250;
	k49 = rand() % 12500 + 12500;
	k59 = rand() % 50000 + 50000;
	cout << "The random numbers for K1: " << k19 << endl;
	cout << "The random numbers for K2: " << k29 << endl;
	cout << "The random numbers for K3: " << k39 << endl;
	cout << "The random numbers for K4: " << k49 << endl;
	cout << "The random numbers for K5: " << k59 << endl;

	clock_t h9 = clock();
	MinHeap H9;
	H9.docin("list9.txt");
	
	int Hk19 = 0;
	int Hk29 = 0;
	int Hk39 = 0;
	int Hk49 = 0;
	int Hk59 = 0;

	for (int i9 = 0; i9 <= k59; i9++) {
		if (i9 == k19 || i9 == k29 || i9 == k39 || i9 == k49 || i9 == k59) {
			if (i9 == k19) {
				Hk19 = H9.popandr();
			}
			if (i9 == k29) {
				Hk29 = H9.popandr();
			}
			if (i9 == k39) {
				Hk39 = H9.popandr();
			}
			if (i9 == k49) {
				Hk49 = H9.popandr();
			}
			if (i9 == k59) {
				Hk59 = H9.popandr();
			}
		}
		else {
			H9.pop();
		}
	}


	cout << "Min Heap took: " << double(clock() - h9) / (double)CLOCKS_PER_SEC << " seconds." << endl;


	clock_t q9 = clock();
	quick Q9;
	Q9.docin("list9.txt");
	Q9.quicksort();
	
	int qk19 = 0;
	int qk29 = 0;
	int qk39 = 0;
	int qk49 = 0;
	int qk59 = 0;

	for (int i9 = 0; i9 <= k59; i9++) {
		if (i9 == k19 || i9 == k29 || i9 == k39 || i9 == k49 || i9 == k59) {
			if (i9 == k19) {
				qk19 = Q9.popandr();
			}
			if (i9 == k29) {
				qk29 = Q9.popandr();
			}
			if (i9 == k39) {
				qk39 = Q9.popandr();
			}
			if (i9 == k49) {
				qk49 = Q9.popandr();
			}
			if (i9 == k59) {
				qk59 = Q9.popandr();
			}
		}
		else {
			Q9.pop();
		}
	}

	cout << "quick sort took: " << double(clock() - q9) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	cout << "Heap k1 =" << Hk19 << " Quick k1 =" << qk19 << endl;
	cout << "Heap k2 =" << Hk29 << " Quick k2 =" << qk29 << endl;
	cout << "Heap k3 =" << Hk39 << " Quick k3 =" << qk39 << endl;
	cout << "Heap k4 =" << Hk49 << " Quick k4 =" << qk49<< endl;
	cout << "Heap k5 =" << Hk59 << " Quick k5 =" << qk59 << endl;
	cout << endl << endl;
	////this is test no 10

	int k10, k20, k30, k40, k50;

	//cout<<"The random numbers are K1: "
	k10 = rand() % 3125;
	k20 = rand() % 3125 + 3125;
	k30 = rand() % 6250 + 6250;
	k40 = rand() % 12500 + 12500;
	k50 = rand() % 50000 + 50000;
	cout << "The random numbers for K1: " << k10 << endl;
	cout << "The random numbers for K2: " << k20 << endl;
	cout << "The random numbers for K3: " << k30 << endl;
	cout << "The random numbers for K4: " << k40 << endl;
	cout << "The random numbers for K5: " << k50 << endl;

	clock_t h0 = clock();
	MinHeap H0;
	H0.docin("list10.txt");
	
	int Hk10 = 0;
	int Hk20 = 0;
	int Hk30 = 0;
	int Hk40 = 0;
	int Hk50 = 0;

	for (int i0 = 0; i0 <= k50; i0++) {
		if (i0 == k10 || i0 == k20 || i0 == k30 || i0 == k40 || i0 == k50) {
			if (i0 == k10) {
				Hk10 = H0.popandr();
			}
			if (i0 == k20) {
				Hk20 = H0.popandr();
			}
			if (i0 == k30) {
				Hk30 = H0.popandr();
			}
			if (i0 == k40) {
				Hk40 = H0.popandr();
			}
			if (i0 == k50) {
				Hk50 = H0.popandr();
			}
		}
		else {
			H0.pop();
		}
	}


	cout << "Min Heap took: " << double(clock() - h0) / (double)CLOCKS_PER_SEC << " seconds." << endl;


	clock_t q0 = clock();
	quick Q0;
	Q0.docin("list10.txt");
	Q0.quicksort();
	
	int qk10 = 0;
	int qk20 = 0;
	int qk30 = 0;
	int qk40 = 0;
	int qk50 = 0;

	for (int i0 = 0; i0 <= k50; i0++) {
		if (i0 == k10 || i0 == k20 || i0 == k30|| i0 == k40 || i0== k50) {
			if (i0 == k10) {
				qk10 = Q0.popandr();
			}
			if (i0 == k20) {
				qk20= Q0.popandr();
			}
			if (i0 == k30) {
				qk30 = Q0.popandr();
			}
			if (i0 == k40) {
				qk40 = Q0.popandr();
			}
			if (i0 == k50) {
				qk50 = Q0.popandr();
			}
		}
		else {
			Q0.pop();
		}
	}

	cout << "quick sort took: " << double(clock() - q0) / (double)CLOCKS_PER_SEC << " seconds." << endl;

	cout << "Heap k1 =" << Hk10 << " Quick k1 =" << qk10 << endl;
	cout << "Heap k2 =" << Hk20 << " Quick k2 =" << qk20 << endl;
	cout << "Heap k3 =" << Hk30 << " Quick k3 =" << qk30 << endl;
	cout << "Heap k4 =" << Hk40 << " Quick k4 =" << qk40 << endl;
	cout << "Heap k5 =" << Hk50 << " Quick k5 =" << qk50 << endl;

	system("pause");
	return 0;
}