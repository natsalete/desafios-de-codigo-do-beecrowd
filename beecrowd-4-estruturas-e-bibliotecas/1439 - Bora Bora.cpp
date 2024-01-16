#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;


typedef pair<int,char> carta;

bool menor_que(carta a, carta b) {
    if (a.first < b.first) return true;
    if (a.first == b.first && a.second < b.second) return true;
    return false;
}

bool equal(carta a, carta b) {
    if (a.first != b.first) return false;
    if (a.second != b.second) return false;
    return true;
}

int main() {

    while (true) {
        int P, M, N;
        cin >> P >> M >> N;
        if (P == 0) break;

        queue<carta> baralho;
        for (int i = 0; i < N; i++) {
            int valor;
            char naipe;
            cin >> valor >> naipe;

            baralho.emplace(valor, naipe);
        }

        // distribuir mãos
        vector<vector<carta>> maos;
        for (int i = 0; i < P; i++) {
            maos.emplace_back();
            for (int j = 0; j < M; j++) {
                maos[i].push_back(baralho.front());
                baralho.pop();
            }

            sort(maos[i].rbegin(), maos[i].rend(), menor_que);

            // for (auto carta : maos[i]) {
            //     cout << carta.first << " "  << carta.second << endl;
            // }
        }

        int dir = 1;            // direção
        int jogador_atual = 0;    // jogador atual
        carta topo;               // topo da pilha de descarte

        // virar primeira carta
        topo = baralho.front();
        baralho.pop();

        // se no topo há uma dama, inverter direção
        if (topo.first == 12) dir *= -1;

        // se há um 7, comprar 2 e perder a vez
        if (topo.first == 7) {
            if (!baralho.empty()) {
                maos[jogador_atual].push_back(baralho.front());
                baralho.pop();
            }
            if (!baralho.empty()) {
                maos[jogador_atual].push_back(baralho.front());
                baralho.pop();
            }

            sort(maos[jogador_atual].rbegin(), maos[jogador_atual].rend(), menor_que);

            jogador_atual = (jogador_atual + dir + P) % P;
        }

        // se há um ás, comprar 1 e perder a vez
        else if (topo.first == 1) {
            if (!baralho.empty()) {
                maos[jogador_atual].push_back(baralho.front());
                baralho.pop();
            }

            sort(maos[jogador_atual].rbegin(), maos[jogador_atual].rend(), menor_que);

            jogador_atual = (jogador_atual + dir + P) % P;
        }

        // se há um valete, perder a vez
        else if (topo.first == 11) {
            jogador_atual = (jogador_atual + dir + P) % P;
        }

        while (true) {

            // jogar maior carta de mesmo número ou naipe
            carta jogar = make_pair(0, 'A');
            for (auto it = maos[jogador_atual].begin(); it != maos[jogador_atual].end(); it++) {
                if (it->first == topo.first || it->second == topo.second) {
                    jogar = *it;
                    maos[jogador_atual].erase(it);
                    break;
                }
            }

            // se encontrar carta que pode jogar, jogar
            if (!equal(jogar, make_pair(0, 'A'))) {

                // verificar se ganhou
                if (maos[jogador_atual].empty()) break;

                topo = jogar;

                // se no topo há uma dama, inverter direção
                if (topo.first == 12) dir *= -1;

                // passar a vez
                jogador_atual = (jogador_atual + dir + P) % P;

                // se há um 7, comprar 2 e perder a vez
                if (topo.first == 7) {
                    if (!baralho.empty()) {
                        maos[jogador_atual].push_back(baralho.front());
                        baralho.pop();
                    }
                    if (!baralho.empty()) {
                        maos[jogador_atual].push_back(baralho.front());
                        baralho.pop();
                    }

                    sort(maos[jogador_atual].rbegin(), maos[jogador_atual].rend(), menor_que);

                    jogador_atual = (jogador_atual + dir + P) % P;
                }

                // se há um ás, comprar 1 e perder a vez
                else if (topo.first == 1) {
                    if (!baralho.empty()) {
                        maos[jogador_atual].push_back(baralho.front());
                        baralho.pop();
                    }

                    sort(maos[jogador_atual].rbegin(), maos[jogador_atual].rend(), menor_que);

                    jogador_atual = (jogador_atual + dir + P) % P;
                }

                // se há um valete, perder a vez
                else if (topo.first == 11) {
                    jogador_atual = (jogador_atual + dir + P) % P;
                }
            }

            // se não, comprar do baralho
            else {
                if (baralho.empty()) break;
                jogar = baralho.front();
                baralho.pop();

                // se a carta comprada puder ser jogada, jogar
                if (jogar.first == topo.first || jogar.second == topo.second) {
                    topo = jogar;

                    // se no topo há uma dama, inverter direção
                    if (topo.first == 12) dir *= -1;

                    // passar a vez
                    jogador_atual = (jogador_atual + dir + P) % P;

                    // se há um 7, comprar 2 e perder a vez
                    if (topo.first == 7) {
                        if (!baralho.empty()) {
                            maos[jogador_atual].push_back(baralho.front());
                            baralho.pop();
                        }
                        if (!baralho.empty()) {
                            maos[jogador_atual].push_back(baralho.front());
                            baralho.pop();
                        }

                        sort(maos[jogador_atual].rbegin(), maos[jogador_atual].rend(), menor_que);

                        jogador_atual = (jogador_atual + dir + P) % P;
                    }

                    // se há um ás, comprar 1 e perder a vez
                    else if (topo.first == 1) {
                        if (!baralho.empty()) {
                            maos[jogador_atual].push_back(baralho.front());
                            baralho.pop();
                        }

                        sort(maos[jogador_atual].rbegin(), maos[jogador_atual].rend(), menor_que);

                        jogador_atual = (jogador_atual + dir + P) % P;
                    }

                    // se há um valete, perder a vez
                    else if (topo.first == 11) {
                        jogador_atual = (jogador_atual + dir + P) % P;
                    }
                }

                // se não, colocar na mão do jogador
                else {
                    maos[jogador_atual].push_back(jogar);
                    sort(maos[jogador_atual].rbegin(), maos[jogador_atual].rend(), menor_que);

                    // passar a vez
                    jogador_atual = (jogador_atual + dir + P) % P;
                }
            }

        }

        cout << jogador_atual + 1 << endl;
    }

}
