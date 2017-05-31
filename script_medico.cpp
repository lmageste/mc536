using namespace std;

#import <string>
#import <iostream>
#import <cstdio>
#import <algorithm>
#import <vector>
#import <cstdlib>

int main () {
	int n;
	cin >> n;
	vector<string> cpf = vector<string> (n, "");
	for (int i = 0; i < n; ++i){
		cin >> cpf[i];
	}

    string vect_especializacao[] = {"Micro-Cirurgia", "Cirurgia Geral", "Diagnóstico"};

	for(int i=0; i<n; i++){

		string crm = to_string(rand()%1000000000)+"/SP";
		string especialidade = vect_especializacao[rand()%3];
		cout << "INSERT INTO medico (funcionario_cpf, crm, especialidade) VALUE " << "(" << cpf[i] << ", '" << crm << "', \"" << especialidade << "\");" << endl;
	}
    
    return 0;
}
