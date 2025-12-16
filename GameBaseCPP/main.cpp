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

    for (int frame = 0; frame <= 9; frame++)
    {
        cout << "Atualizando..." << endl;
        cout << "Frame do jogo: " << frame << endl;
    }

    int turno = 1;
    while (vida > 0) {
        cout << "Turno " << turno << " - Vida: " << vida << endl;
        cout << "Player levou dano! Vida atual: " << vida << endl;
        turno++;
        vida -= 5;
    }

    cout << "Player morreu!" << endl;

    int ataque = 20;
    int defesa = 8;

    int dano = ataque - defesa;

    vida -= dano;

    if (dano < 0) {
        dano = 0;
    }

    cout << "Ataque: " << ataque << endl;
    cout << "Defesa: " << defesa << endl;
    cout << "Dano causando: " << dano << endl;

    cout << "Vida atualizada do Player: " << vida << endl;

    return 0;
}
