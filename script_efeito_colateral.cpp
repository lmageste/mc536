using namespace std;

#import <string>
#import <iostream>
#import <cstdio>
#import <algorithm>
#import <vector>
#import <cstdlib>

int main () {
    int n;
    scanf(" %d ", &n);
    vector<string> tratamento = vector<string> (n, "");
    for (int i = 0; i < n; ++i){
        getline(cin, tratamento[i]);
    }
    
    int m;
    scanf(" %d ", &m);
    vector<string> contra = vector<string> (m, "");
    for (int i = 0; i < m; ++i){
        getline(cin, contra[i]);
    }
    
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            if(rand()%m==0){
                cout << "INSERT INTO efeito_colateral (contra_indicacao_nome, tratamento_nome) VALUE " << "(\"" << contra[j] << "\", \"" << tratamento[i] << "\");" << endl;
            }
        }
    }
    
    return 0;
}
