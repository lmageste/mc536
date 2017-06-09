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
	vector<string> nome = vector<string> (n, "");
	for (int i = 0; i < n; ++i){
		getline(cin,nome[i]);
	}

    string vect_dose[] = {"mg", "ml", "µg"};

    for(int i=0; i<n; i++){
        string dose = to_string(rand()%100+1)+" "+vect_dose[rand()%3];
        string registro = to_string((rand()%10000000000+1)) + "-"+to_string(rand()%10)+"/BR";
        cout << "INSERT INTO medicamento (registro_governo, tratamento_nome, dose) VALUE " << "(\"" << registro << "\", \"" << nome[i] << "\", \"" << dose << "\");" << endl;
    }
    
    return 0;
}
