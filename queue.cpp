#include <bits/stdc++.h>
using namespace std;

void remover_carro(queue<string>& estacionamento, string placa) {
    queue<string> repush;
    bool encontrado = false;

    while (!estacionamento.empty()) {
        if (estacionamento.front() == placa) {
            encontrado = true;
            estacionamento.pop();
            break;
        } else {
            repush.push(estacionamento.front());
            estacionamento.pop();
        }
    }

    // Reempilha os carros que não foram removidos
    while (!repush.empty()) {
        estacionamento.push(repush.front());
        repush.pop();
    }

    if (!encontrado) {
        cout << "Carro com a placa " << placa << " não encontrado no estacionamento." << endl;
    }
}

int main() {
    queue<string> estacionamento;
    string placa;
    int n = -1; // Inicializar com um valor diferente de 0

    while (n != 0) {
        printf("Escolha uma opção:\n1 - Inserir carro;\n2 - Remover carro;\n3 - Ver estacionamento;\n0 - Sair\n");
        scanf("%d", &n);

        switch (n) {
            case 1:
                printf("Qual a placa? (Formato: XXX): ");
                cin >> placa;
                estacionamento.push(placa);
                break;
            case 2:
                printf("Qual a placa? (Formato: XXX): ");
                cin >> placa;
                remover_carro(estacionamento, placa);
                break;
            case 3:
                // Ver estacionamento
                if (estacionamento.empty()) {
                    cout << "O estacionamento está vazio." << endl;
                } else {
                    queue<string> temp = estacionamento; // Copia temporária da fila
                    cout << "Carros no estacionamento:" << endl;
                    while (!temp.empty()) {
                        cout << temp.front() << endl;
                        temp.pop();
                    }
                }
                break;
            case 0:
                cout << "Encerrando o programa..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    }

    return 0;
}
