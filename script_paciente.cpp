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

    string vect_sangue[] = {"A+", "A-", "B+", "B-", "AB+", "AB-", "O+", "O-"};

	for(int i=0; i<n; i++){
		bool saude = rand()%2;
		string tipo_sanguineo = vect_sangue[rand()%8];

		cout << "INSERT INTO paciente (pessoa_cpf, tem_plano_saude, tipo_sanguineo) VALUE " << "(" << cpf[i] << ", "  << saude << ", \"" << tipo_sanguineo << "\");" << endl;
	}
    
    return 0;
}
