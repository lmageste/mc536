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
    vector<string> doenca = vector<string> (n, "");
    for (int i = 0; i < n; ++i){
        getline(cin, doenca[i]);
    }
    
    scanf(" %d ", &m);
    vector<string> sintoma = vector<string> (m, "");
    for (int i = 0; i < m; ++i){
        getline(cin, sintoma[i]);
    }
    
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            if(rand()%200==0){
                cout << "INSERT INTO doenca_exibe_sintoma (doenca_nome_cientifico, sintoma_nome_cientifico) VALUE " << "(\"" << doenca[i] << "\", \"" <<sintoma[j] << "\");" << endl;
            }
        }
    }
    
    return 0;
}
