#include <bits/stdc++.h>

using namespace std;

void reserva(map<int, string>& cadeiras, vector<int> reservado){
    map<int, string>::iterator it;
    for (int i=0; i<reservado.size(); i++){
        if(cadeiras[reservado[i]] == "indisponivel"){
            cout << "A cadeira " << reservado[i] << " jah estah ocupada." << endl;
        } else {
            cadeiras[reservado[i]] = "indisponivel";
        }
    }

    cout << endl;

    for(it=cadeiras.begin(); it != cadeiras.end(); it++){
        cout << it->first << " - " << it->second << endl;
    }

}

int main(){
    map<int, string> cadeiras{{2, "disponivel"}, {1, "disponivel"}, {3, "indisponivel"}, {4, "indisponivel"}, {5, "indisponivel"}, {6, "indisponivel"}};
    
    vector<int> reservado = {4, 5, 3};

    reserva(cadeiras, reservado);

    return 0;
}