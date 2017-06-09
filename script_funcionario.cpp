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

    string vect_departamento[] = {"Recepção geral", "Psiquiatria Geral", "Pediatria Geral", "Ortopedia Geral", "Oncologia geral", "Obstetria geral", "Neurologia Geral", "Manutenção geral", "Enfermaria Geral"};
    string vect_formacao[] = {"Técnico de Equipamento Hospitalar", "Enfermagem", "Medicina", "Administração", "Ensino Superior Incompleto"};


	for(int i=0; i<n; i++){
		bool saude = rand()%2;
		string departamento = vect_departamento[rand()%9];
		string formacao = vect_formacao[rand()%5];
		int salario = (rand()%1900)*10 + 1000;
		int year = rand()%5+2011;
		string contratacao = to_string(year)+"-"+to_string(rand()%12+1)+"-"+to_string(rand()%28+1);

		cout << "INSERT INTO funcionario (pessoa_cpf, departamento_nome, data_contratacao, formacao, salario) VALUE " << "(" << cpf[i] << ", \""  << departamento << "\", \"" << contratacao << "\", \""<< formacao << "\", " << salario << ");" << endl;
	}
    
    return 0;
}
