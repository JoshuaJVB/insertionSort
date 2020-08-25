/*******************************************\
* Insertion Sort                            *
* Basic formula for reading numbers         *
* from a file and creating an ordered list  *
* Joshua Van Baalen                         *
\*******************************************/

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


int main() {

	std::ifstream inFile;
	int value;
	int y;
	vector <int> numList;
	vector <int> sortList;

	inFile.open("numList.txt");

	while (inFile >> value) {
		numList.push_back(value);
	}

	inFile.close();

	for (int x = 0; x < numList.size(); x++) {
		sortList.push_back((numList[x]));
		
		if (x > 0) {
			for(int z = x; z > 0; z--){
				if (sortList[z] < sortList[z - 1]) {
					y = sortList[z - 1];
					sortList[z - 1] = sortList[z];
					sortList[z] = y;
				}
				else {
					z = 0;
				}
			}
		}
	}

	cout << "Unsorted List:";
	for (int x = 0; x < numList.size(); x++) {
		cout << " " << numList[x];
	}

	cout << "\nSorted List:";
	for (int x = 0; x < sortList.size(); x++) {
		cout << " " << sortList[x];
	}

	return 0;
}