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
	vector<string> nome = vector<string> (n, "");
	for (int i = 0; i < n; ++i){
		cin >> nome[i];
	}

	cin >> m;
	vector<string> sobrenome = vector<string> (m, "");
	for (int i = 0; i < m; ++i){
		string aux, aux2;
		cin >> aux;
		if(aux.size()<=3){
			cin >> aux2;
			sobrenome[i] = aux + " " + aux2;
		} else
			sobrenome[i] = aux;
	}

    string vect_sangue[] = {"A+", "A-", "B+", "B-", "AB+", "AB-", "O+", "O-"};

	for(int i=0; i<n; i++){
		for (int j = 0; j<m; j++){
            string completo = nome[i]+" "+sobrenome[j];
            long long int cpf = ((((long long int) rand())*100)%89999999999 + 10000000000 + rand()%98);
            int year = rand()%80+1934;
			string nascimento = to_string(year)+"-"+to_string(rand()%12+1)+"-"+to_string(rand()%28+1);
            string ultima_consulta = to_string(year+1+rand()%(2017-year))+"-"+to_string(rand()%12+1)+"-"+to_string(rand()%28+1);
			string telefone = "("+to_string(rand()%90 + 10)+") "+to_string(rand()%8999 + 1000)+"-"+to_string(rand()%8999 + 1000);
			bool saude = rand()%2;
			string tipo_sanguineo = vect_sangue[rand()%8];

			cout << "INSERT INTO paciente (cpf, nascimento, nome, ultima_consulta, telefone, tem_plano_saude, tipo_sanguineo) VALUE " << "(" << cpf << ", '" << nascimento << "', \"" << completo << "\", '" << ultima_consulta << "', \"" <<telefone << "\", " << saude<< ", \"" << tipo_sanguineo << "\");" << endl;
		}
	}
    
    return 0;
}
