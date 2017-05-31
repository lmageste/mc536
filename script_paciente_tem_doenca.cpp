using namespace std;

#import <string>
#import <iostream>
#import <cstdio>
#import <algorithm>
#import <vector>
#import <cstdlib>

int main () {
    int n, m;
    cin >> n;
    vector<string> cpf = vector<string> (n, "");
    for (int i = 0; i < n; ++i){
        cin >> cpf[i];
    }
    
    scanf(" %d ", &m);
    vector<string> doenca = vector<string> (m, "");
    for (int i = 0; i < m; ++i){
        getline(cin, doenca[i]);
    }
    
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            if(rand()%1000==0){
                cout << "INSERT INTO paciente_tem_doenca (paciente_cpf, doenca_nome_cientifico) VALUE " << "(\"" << cpf[i] << "\", \"" <<doenca[j] << "\");" << endl;
            }
        }
    }
    
    return 0;
}
