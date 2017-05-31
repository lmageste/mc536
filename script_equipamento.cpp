using namespace std;

#import <string>
#import <iostream>
#import <cstdio>
#import <algorithm>
#import <vector>
#import <cstdlib>

int main () {
	int n;
	cin >> n;

    string vect_tipo[] = {"Tomografia", "Radiografia", "Ressonância Magnética", "Eletrocardiograma", "Monitor Cardíaco"};

	for(int i=0; i<n; i++){
		string tipo = vect_tipo[rand()%5];
		cout << "INSERT INTO exame (numero_patrimonio, tipo) VALUE " << "(" << rand()%10000 << ", \"" << tipo << "\");" << endl;
	}
    
    return 0;
}
