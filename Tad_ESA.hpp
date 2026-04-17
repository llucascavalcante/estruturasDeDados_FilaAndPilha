#include <iostream>
using namespace std;

struct ESA{
    string sepInicio;
    string sepFim;
};

void montaCoisasMat(ESA novoElem){
    cout<<"Separador do inicio: "; cin>>novoElem.sepInicio;
    cout<<"Separador do fim: "; cin>>novoElem.sepFim;
}