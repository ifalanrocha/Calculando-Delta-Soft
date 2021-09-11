#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, delta,
          x1, x2;
    char tecla;

menu: // ponto de repetição
    cout << "\n\n1. Para executar, calcular e exibir\n";
    cout << "\n2. finalizar\n\n";
    cin >> tecla;
    switch (tecla)
    {
    case '1':
    cout << "Coeficiente a: ";
    cin >> a;

    cout << "Coeficiente b: ";
    cin >> b;

    cout << "Coeficiente c: ";
    cin >> c;

    if(a != 0){
        delta = (b*b) - (4*a*c);

        if(delta<0){
            cout <<"Não tem raízes reais\n";
        goto menu;
        }
        else if (delta==0){
            x1=(-b)/(2*a);
            cout << "Possui apenas uma raiz real: "<<x1<<endl;
        goto menu;
        }else{
            x1=(-b - sqrt(delta))/(2*a);
            x2=(-b + sqrt(delta))/(2*a);
            cout << "Com A: " << a << "| B: " << b << " | C: " << c << "\nGerando o delta: " << delta << "\nResulta no X1: " << x1 << " e X2: " << x2;
        goto menu;
        }
    }else{
            cout << "Com A: " << a << ",B: " << b << " e C: " << c << "\nGerando o delta: " << delta;
            cout << "\nSem solucao no conjunto dos numeros reais\n";
    goto menu;
    }
    break;

     case '2':
        return 0;
        break;
    }
    return 0;

}
