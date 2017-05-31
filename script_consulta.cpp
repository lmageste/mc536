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
    vector<string> cpf_medico = vector<string> (m, "");
    for (int i = 0; i < m; ++i){
        cin >> cpf_medico[i];
    }
    
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            if(rand()%200==0){
                do{
                    string sala = to_string(rand()%30+1);
                    string data = to_string(2016)+"-"+to_string(rand()%12+1)+"-"+to_string(rand()%28+1)+" "+to_string(rand()%24)+":"+to_string(rand()%60)+":"+to_string(rand()%60);
                    
                    cout << "INSERT INTO consulta (medico_cpf, paciente_cpf, data, sala) VALUE " << "(\"" << cpf_medico[j] << "\", \"" <<cpf[i] << "\", '"+data+"', \""+sala+"\");" << endl;
                } while(rand()%4 == 0);
            }
        }
    }
    
    return 0;
}
