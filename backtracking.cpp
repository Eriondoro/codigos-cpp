#include <iostream>
#include <vector>
using namespace std;

// Função para verificar se uma rainha pode ser colocada na posição (row, col)
bool isSafe(vector<string>& board, int row, int col, int n) {
    // Verifica a linha à esquerda
    for (int i = 0; i < col; i++) {
        if (board[row][i] == '1') {
            return false;
        }
    }
    
    // Verifica a diagonal superior à esquerda
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == '1') {
            return false;
        }
    }
    
    // Verifica a diagonal inferior à esquerda
    for (int i = row, j = col; i < n && j >= 0; i++, j--) {
        if (board[i][j] == '1') {
            return false;
        }
    }
    
    return true;
}

// Função para imprimir o tabuleiro de xadrez
void printSolution(const vector<string>& board) {
    int n = board.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j];
            // if (board[i][j] == 'Q') {
            //     cout << "1 ";
            // } else {
            //     cout << "0 ";
            // }
        }
        cout << endl;
    }
    cout << endl;
}

// Função recursiva para resolver o problema das N-rainhas
void solveNQueens(vector<string>& board, int col, int n, int& solutions) {
    if (col == n) {
        // Uma solução foi encontrada, incrementa o contador de soluções e imprime a solução
        solutions++;
        cout << "Solução " << solutions << ":" << endl;
        printSolution(board);
        return;
    }
    
    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            // Coloca a rainha na posição (i, col)
            board[i][col] = '1';
            
            // Continua para a próxima coluna
            solveNQueens(board, col + 1, n, solutions);
            
            // Remove a rainha (backtracking)
            board[i][col] = '0';
        }
    }
}

// Função principal para calcular e imprimir todas as soluções para o problema das N-rainhas
void findAndPrintSolutions(int n) {
    vector<string> board(n, string(n, '0')); // Inicializa o tabuleiro vazio
    int solutions = 0;
    solveNQueens(board, 0, n, solutions);
    
    if (solutions == 0) {
        cout << "Nenhuma solução encontrada para " << n << "-rainhas." << endl;
    }
}

int main() {
    int n;
    cout << "Digite o valor de n: ";
    cin >> n;
    
    findAndPrintSolutions(n);
    
    return 0;
}
