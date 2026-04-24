#include <vector>
#include <string>
#include <random>
using namespace std;

vector<string> nomes = {"Lucas", "Ana", "Carlos", "Marina", "João"};
vector<string> sobrenomes = {"Silva", "Souza", "Oliveira", "Santos", "Costa"};

string gerarNome(mt19937 &gen) {
    uniform_int_distribution<> distNome(0, nomes.size() - 1);
    uniform_int_distribution<> distSobrenome(0, sobrenomes.size() - 1);

    return nomes[distNome(gen)] + " " + sobrenomes[distSobrenome(gen)];
}
