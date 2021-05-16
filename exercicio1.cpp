#include <iostream>

using namespace std;

int main()
{   

    //declarando os suspeitos
    string suspeito1;
    string suspeito2;
    string suspeito3;

    //declarando respostas
    string resposta1;
    string resposta2;
    string resposta3;
    string resposta4;
    string resposta5;

    //contador
    int contador = 0;


    //texto para ser exibido na tela
    cout << "Insira os Nomes dos Suspeitos:" << '\n';

    //entrada dos nomes dos suspeitos
    cin >> suspeito1;
    cin >> suspeito2;
    cin >> suspeito3;
    
    cout << '\n' << '\n';

    //saida nome dos suspeitos
    cout << "O Nome do suspeito 1: " << suspeito1 << '\n';
    cout << "O Nome do suspeito 2: " << suspeito2 << '\n';
    cout << "O Nome do suspeito 3: " << suspeito3 << '\n';

    cout << '\n' << '\n';

    cout << "Responda as perguntas a seguir com SIM / NAO" << '\n';
    cout << '\n';

    cout << "pergunta 1: ";
    cin >> resposta1; 
        if ((resposta1 == "SIM") || (resposta1 == "sim") || (resposta1 == "Sim"))
        {
            contador++;
        }

    cout << "pergunta 2: ";
    cin >> resposta2; 
        if ((resposta2 == "SIM") || (resposta2 == "sim") || (resposta2 == "Sim"))
        {
            contador++;
        } 

    cout << "pergunta 3: ";
    cin >> resposta3; 
        if ((resposta3 == "SIM") || (resposta3 == "sim") || (resposta3 == "Sim"))
        {
            contador++;
        }

    cout << "pergunta 4: ";
    cin >> resposta4; 
        if ((resposta4 == "SIM") || (resposta4 == "sim") || (resposta4 == "Sim"))
        {
            contador++;
        }

    cout << "pergunta 5: ";
    cin >> resposta5; 
        if ((resposta5 == "SIM") || (resposta5 == "sim") || (resposta5 == "Sim"))
        {
            contador++;
        }

    switch (contador)
    {
    case 2:
        cout << '\n'<< '\n';
        cout << "O culpado foi o suspeito: " << suspeito1;
        break;

    case 3:
        cout << '\n'<< '\n';
        cout << "O culpado foi o suspeito: " << suspeito2;
        break;
    
    case 4:
        cout << '\n'<< '\n';
        cout << "O culpado foi o suspeito: " << suspeito2;
        break;

    case 5:
        cout << '\n'<< '\n';
        cout << "O culpado foi o suspeito: " << suspeito3;
        break;

    case 0:
        cout << '\n'<< '\n';
        cout << "Nenhum dos 3 suspeitos abaixo foi culpado:" << '\n' << suspeito1 << '\n' << suspeito2 << '\n' << suspeito3;
        break;
    }





    return 0;
}