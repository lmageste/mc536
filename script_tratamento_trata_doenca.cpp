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
    vector<string> doenca = vector<string> (n, "");
    for (int i = 0; i < n; ++i){
        getline(cin, doenca[i]);
    }
    
    int m = 8329;
    
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++) {
            if(rand()%8000==0){
                cout << "INSERT INTO tratamento_trata_doenca (doenca_nome_cientifico, tratamento_id) VALUE " << "(\"" << doenca[i] << "\", \"" <<j << "\");" << endl;
            }
        }
    }
    
    return 0;
}
