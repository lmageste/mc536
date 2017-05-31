using namespace std;

#import <string>
#import <iostream>
#import <cstdio>
#import <algorithm>
#import <vector>
#import <cstdlib>

int main () {
    int n, m;
    scanf(" %d ", &n);
    vector<string> data = vector<string> (n, "");
    for (int i = 0; i < n; ++i){
        getline(cin, data[i]);
    }
    
    for(int i=0; i<n; i++){
        cout << "INSERT INTO ficha_anamnese (consulta_data, conteudo) VALUE " << "(\"" << data[i] << "\", \"" <<  "Alto teor de ..."<< "\");" << endl;
    }
    
    return 0;
}
