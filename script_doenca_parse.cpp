using namespace std;

#import <string>
#include <cstdio>
#import <iostream>
#include <fstream>

int main () {
	string doenca;

	ifstream in;
	in.open("in_doenca_original.txt");

	if(!in) {
		cout << "Cannot open input file.\n";
		return 1;
	}

	while(in) {
		getline(in, doenca);
		size_t pos = doenca.find("-");
		doenca.erase(0, pos+1);
        cout << doenca << endl;
	}

	in.close();	
    
    return 0;
}
