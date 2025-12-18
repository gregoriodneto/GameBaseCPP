#include <iostream>
#include <string>
using namespace std;

int takeDamage(int vidaAtual, int dano) {
    vidaAtual -= dano;
    if (vidaAtual < 0)
        vidaAtual = 0;
    return vidaAtual;
}

int main()
{
    int vida = 80;
    float velocidade = 3.2f;
    bool estaVivo = false;

    int turno = 1;

    int ataque = 20;
    int defesa = 8;

    int mana = 10;

    string nomeJogador;

    cout << "Digite o nome do jogador: " << endl;
    //cin >> nomeJogador; -> Não permite espaços
    getline(cin, nomeJogador); // Permite espaços

    cout << "Bem-vindo, " << nomeJogador << "!" << endl;

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

    
    while (vida > 0) {
        cout << "Turno " << turno << " - Vida: " << vida << endl;
        cout << "Player levou dano! Vida atual: " << vida << endl;
        turno++;
        vida -= 5;
    }

    cout << "Player morreu!" << endl;    

    int dano = ataque - defesa;
    vida -= dano;

    if (dano < 0) {
        dano = 0;
    }

    cout << "Ataque: " << ataque << endl;
    cout << "Defesa: " << defesa << endl;
    cout << "Dano causando: " << dano << endl;

    cout << "Vida atualizada do Player: " << vida << endl;

    estaVivo = (vida > 0);
    if (estaVivo && mana > 0) {
        cout << "Player pode atacar!" << endl;
    }
    else {
        cout << "Player não pode atacar!" << endl;
    }

    // Desafio 1: COMBATE SIMPLES (FASE 1)
    cout << "Desafio 1: COMBATE SIMPLES (FASE 1)" << endl;

    int vidaDesafio1 = 50;
    int ataqueDesafio1 = 18;
    int defesaDesafio1 = 6;
    int manaDesafio1 = 5;
    bool estaVivoDesafio1 = true;

    for (int frameDesafio1 = 1; frameDesafio1 <= 10; frameDesafio1++)
    {
        cout << "Preparando combate... Frame " << frameDesafio1 << endl;
    }

    int danoDesafio1 = ataqueDesafio1 - defesaDesafio1;
    if (danoDesafio1 < 0) danoDesafio1 = 0;

    while (vidaDesafio1 > 0 && danoDesafio1 > 0) {
        cout << "Vida atual: " << vidaDesafio1 << endl;
        vidaDesafio1 = takeDamage(vidaDesafio1, danoDesafio1);
    }

    cout << "Combate finalizado!" << endl;

    estaVivoDesafio1 = (vidaDesafio1 > 0);
    if (estaVivoDesafio1) cout << "Player pode continuar lutando!" << endl;
    else cout << "Player foi derrotado!" << endl;

    cout << "\n===== STATUS DO PLAYER =====\n";
    cout << "Nome: " << nomeJogador << endl;
    cout << "Vida: " << vidaDesafio1 << endl;
    cout << "Mana: " << manaDesafio1 << endl;

    if (estaVivoDesafio1) cout << "Estado: Vivo\n";
    else cout << "Estado: Morto\n";

    cout << "============================\n";

    return 0;
}