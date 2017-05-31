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

    string vect_dose[] = {"mg", "g", "ml", "µg"};

    for(int i=0; i<n; i++){
        string dose = to_string(rand()%100+1)+" "+vect_dose[rand()%4];
        string registro = to_string((rand()%10000000000+1)) + "-"+to_string(rand()%10)+"/BR";
        cout << "INSERT INTO medicamento (registro_governo, tratamento_id, dose) VALUE " << "(\"" << registro << "\", \"" << to_string(i+1) << "\", \"" << dose << "\");" << endl;
    }
    
    return 0;
}
