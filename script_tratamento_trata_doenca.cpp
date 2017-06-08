using namespace std;

#import <string>
#import <iostream>
#import <cstdio>
#import <algorithm>
#import <vector>
#import <cstdlib>

int main () {
    int n;
    int m;
    scanf(" %d ", &n);
    scanf(" %d ", &m);
    vector<string> doenca = vector<string> (n, "");
    vector<string> tratamento = vector<string> (m,"");
    for (int i = 0; i < n; ++i){
        getline(cin, doenca[i]);
    }
    for(int i = 0; i < m; ++i){
        getline(cin, tratamento[i]);
    }
    
    
    
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            if(rand()%8000==0){
                cout << "INSERT INTO tratamento_trata_doenca (doenca_nome_cientifico, nome_tratamento) VALUE " << "(\"" << doenca[i] << "\", \"" << tratamento[j] << "\");" << endl;
            }
        }
    }
    
    return 0;
}
