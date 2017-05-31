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
    
    cin >> m;
    vector<string> doenca = vector<string> (m, "");
    for (int i = 0; i < m; ++i){
        getline(cin, doenca[i]);
    }
    
    string vec_status[] = {"Tratamento Iniciado", "Sob Observação", "Medicamento Receitado", "Curado"};
    
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            if(rand()%2000==0){

                string status = vec_status[rand()%4];
                string data = to_string(2016)+"-"+to_string(rand()%12+1)+"-"+to_string(rand()%28+1)+" "+to_string(rand()%24)+":"+to_string(rand()%60)+":"+to_string(rand()%60);
                
                cout << "INSERT INTO caso (doenca_nome_cientifico, paciente_cpf, data_diagnostico, status) VALUE " << "(\"" << doenca[j] << "\", \"" <<cpf[i] << "\", '"+data+"', \""+status+"\");" << endl;
            }
        }
    }
    
    return 0;
}
