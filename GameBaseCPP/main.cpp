#include <iostream>
using namespace std;

int main()
{
    int vida = 80;
    float velocidade = 3.2f;
    bool estaVivo = false;

    cout << "Vida: " << vida << endl;
    cout << "Velocidade: " << velocidade << endl;
    cout << "Esta vivo? " << estaVivo << endl;

    cout << "Player criado com sucesso!" << endl;

    if (vida <= 0) {
        cout << "Game Over" << endl;
    } else {
        cout << "Continue jogando!" << endl;
    }

    return 0;
}
