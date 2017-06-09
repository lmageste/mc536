using namespace std;

#import <string>
#import <iostream>
#import <cstdio>
#import <algorithm>
#import <vector>
#import <cstdlib>

int main () {
    int n, m, o;
    cin >> n;
    vector<string> cpf = vector<string> (n, "");
    for (int i = 0; i < n; ++i){
        cin >> cpf[i];
    }
    
    cin >> m;
    vector<string> tipo = vector<string> (m, "");
    for (int i = 0; i < m; ++i){
        cin >> tipo[i];
    }

    cin >> o;
    vector<string> tecnico_cpf = vector<string> (o, "");
    for (int i = 0; i < n; ++i){
        cin >> tecnico_cpf[i];
    }
    
    
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            if(rand()%15==0){
                string data = to_string(2016)+"-"+to_string(rand()%12+1)+"-"+to_string(rand()%28+1)+" "+to_string(rand()%24)+":"+to_string(rand()%60)+":"+to_string(rand()%60);
                string laboratorio = "Lab "+to_string(rand()%10+1);
                
                cout << "INSERT INTO analise_laboratorial (exame_tipo, tecnico_responsavel_cpf, paciente_cpf, data, laboratorio) VALUE " << "(\"" << tipo[j] << "\", \"" << tecnico_cpf[rand()%o] << "\", \"" <<cpf[i] << "\", '"+data+"', \""+laboratorio+"\");" << endl;
            }
        }
    }
    
    return 0;
}
