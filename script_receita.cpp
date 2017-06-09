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

    scanf(" %d ", &m);
    vector<string> tratamento = vector<string> (m, "");
    for (int i = 0; i < m; ++i){
        getline(cin, tratamento[i]);
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(rand()%6000 == 0)
                cout << "INSERT INTO receita (consulta_data, tratamento_nome) VALUE " << "(\"" << data[i] << "\", \"" <<  tratamento[j] << "\");" << endl;
        }
    }
    
    return 0;
}
