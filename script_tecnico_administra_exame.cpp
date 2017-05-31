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
	vector<string> tipo = vector<string> (m, "");
	for (int i = 0; i < m; ++i){
		cin >> tipo[i];
	}

	for(int i=0; i<n; i++){
		cout << "INSERT INTO tecnico_administra_exame (exame_tipo, tecnico_cpf) VALUE " << "(\"" << tipo[i%m] << "\", \"" <<cpf[i] << "\");" << endl;
	}
    
    return 0;
}
