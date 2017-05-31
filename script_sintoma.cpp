using namespace std;

#import <string>
#import <iostream>
#import <cstdio>
#include <fstream>

int main () {
    string sintoma;
    
    ifstream in;
    in.open("in_sintoma.txt");
    
    if(!in) {
        cout << "Cannot open input file.\n";
        return 1;
    }
    
    while(in) {
        getline(in, sintoma);
        cout << "INSERT INTO sintoma (nome_cientifico, descricao) VALUE " << "(\"" << sintoma.substr(0, 50) << "\", \"" << sintoma << "\");" << endl;
    }
    
    in.close();
    
    return 0;
}
