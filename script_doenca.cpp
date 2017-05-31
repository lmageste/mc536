using namespace std;

#import <string>
#import <iostream>
#import <cstdio>
#include <fstream>

int main () {
    string doenca;
    
    ifstream in;
    in.open("in_doenca.txt");
    
    if(!in) {
        cout << "Cannot open input file.\n";
        return 1;
    }
    
    while(in) {
        getline(in, doenca);
        cout << "INSERT INTO doenca (nome_cientifico, descricao) VALUE " << "(\"" << doenca.substr(0, 50) << "\", \"" << doenca << "\");" << endl;
    }
    
    in.close();	
    
    return 0;
}
