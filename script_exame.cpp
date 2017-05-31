using namespace std;

#import <string>
#import <iostream>
#import <cstdio>
#import <algorithm>
#import <vector>
#import <cstdlib>

int main () {
	int n = 6;

    string vect_tipo[] = {"TOMOGRAFIA", "RADIOGRAFIA", "RESSONANCIA", "ELETROCARDIOGRAMA", "HEMODIALISE", "HEMOGRAMA"};

	for(int i=0; i<n; i++){
		string tipo = vect_tipo[i];
		cout << "INSERT INTO exame (tipo) VALUE " << "(\"" << tipo << "\");" << endl;
	}
    
    return 0;
}
