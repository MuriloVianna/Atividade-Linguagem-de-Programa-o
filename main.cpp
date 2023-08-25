#include <iostream>

using namespace std;

int opcao_tela_principal = 0, x;

struct pacientes
{
    string nome;
    string horadia;
    string doutor;
    string obs;
};

pacientes agendamento[5];

int tela_principal();
void agendar_paciente();
void pacientes_agendados();
void troca_pagina();

int main()
{
    do 
    {
        tela_principal();

        switch (opcao_tela_principal)
        {
            case 1: 
                agendar_paciente();
                break;
            case 2:
                pacientes_agendados();
                break;
            case 3:
                cout << "Fechando o programa, até próxima!!\n\n" << endl;
                break;
            default:
                cout << "Opção inválida, tente novamente!" << endl;           
        }
    } while (opcao_tela_principal != 3);
    return 0;
}

int tela_principal()
{
    cout << "\n\n\n----------------------------- Consultório da Bilu -----------------------------\n\n\n";

        cout << "Selecione a opção desejada: \n\n";

        cout << "1 - Agendar paciente" << endl;
        cout << "2 - Pacientes agendados" << endl;
        cout << "3 - Fechar \n\n" << endl;

        cin >> opcao_tela_principal;
  
    troca_pagina();
    return opcao_tela_principal;  
}

void agendar_paciente()
{
    x += 1;

        cout << "Nome do paciente: ";
        getline (cin, agendamento[x].nome);

        cout << "Hora e data da consulta: ";
        getline (cin, agendamento[x].horadia);

        cout << "Doutor da consulta: ";
        getline (cin, agendamento[x].doutor);

        cout << "Obs: ";
        getline (cin, agendamento[x].obs); 

    troca_pagina();
}

void pacientes_agendados()
{
    cout << "Agendamentos: \n\n" << endl;

    for (int i = 1; i < 5; i++)
    {
        cout << "Nome: " << agendamento[i].nome << endl;
        cout << "Hora: " << agendamento[i].horadia << endl;
        cout << "Doutor(a): " << agendamento[i].doutor << endl;
        cout << "Obs: " << agendamento[i].obs << "\n\n" << endl;
    }
        cout << "Precione ENTER para voltar a tela principal!" << endl;

    system("pause");
    troca_pagina();
    tela_principal();
}

void troca_pagina() //função que limpa o código da tela
{
    system("cls");
}