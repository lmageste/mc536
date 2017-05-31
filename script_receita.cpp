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
        for(int j=0; j<8329; j++){
            if(rand()%6000 == 0)
                cout << "INSERT INTO receita (consulta_data, tratamento_id) VALUE " << "(\"" << data[i] << "\", \"" <<  j << "\");" << endl;
        }
    }
    
    return 0;
}
