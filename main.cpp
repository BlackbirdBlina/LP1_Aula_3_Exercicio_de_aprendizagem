#include <iostream>
#include "num_amigos.h"
using namespace std;

int main() {
    int num1;
    int num2;

    // A soma dos divisores de 1, teoricamente é zero, então 2 não pode ser o amigo de 1.
    for (int i = 2; i < 3000; i++){
        num1 = i;
        int soma_num1 = soma_divisores(num1);
        for(int j = i + 1; j < 3000; j++){
            num2 = j;
            int soma_num2 = soma_divisores(num2);
            if (soma_num2 == num1 && soma_num1 == num2){
                cout << "(" << num1 << ", " << num2 << ")" << endl;
                break;
            }
        }
    }

    return 0;
}








    // Para teste
    // int a = soma_divisores(20);
    // cout << a << endl;
