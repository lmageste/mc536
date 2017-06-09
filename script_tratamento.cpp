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

    string vect_duracao[] = {"semanas", "dias", "horas", "meses"};
    //string vect_contra[] = {"Diabetes", "AIDS", "Alergia a glútem", "Pressão Alta", "Gravidez"};

	for(int i=0; i<n; i++){
		string duracao = to_string(rand()%10+1)+" "+vect_duracao[rand()%4];
		//string contra = vect_contra[rand()%5];
		string custo = to_string((rand()%1000+1)*10);
		cout << "INSERT INTO tratamento (duracao, nome, custo) VALUE " << "(\"" << duracao << "\", \"" << nome[i].substr(0, 50) << "\", \"" << custo << "\");" << endl;
	}
    
    return 0;
}
