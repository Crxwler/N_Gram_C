
#include "Ngram.h"
#include "File.h"

Ngram::Ngram(){
    n = 2;
    archivo = "";
}

Ngram::Ngram(int n, std::string archivo){
    n = n;
    archivo = archivo;
}

void Ngram::menu(){
    int opcion = 0;
    while(1){
        std::cout << "MENU DE OPCIONES" <<std::endl;
        std::cout << "1.- Bi-gram" << std::endl;
        std::cout << "2.- Tri-gram "<<std::endl;
        std::cout << "3.- N(4)-gram "<<std::endl;
        std::cout << "4.- N(5).gram"<<std::endl;
        std::cout << "Elije una opción: "<<std::endl;
        std::cin >> opcion;

        switch(opcion){
            
            case 1:

                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                std::cout <<"Opción no existente"<<std::endl;
                break;
        }
        break;
    }
}

int Ngram::menuTop(){
    int opcion = 0;
    while(1){
        std::cout << "TOP" <<std::endl;
        std::cout << "1.- 10" << std::endl;
        std::cout << "2.- 50 "<<std::endl;
        std::cout << "3.- 100 "<<std::endl;
        std::cout << "4.- 500"<<std::endl;
        std::cout << "Elije una opción: "<<std::endl;
        std::cin >> opcion;

        switch(opcion){
            
            case 1:
                return 10;
                break;
            case 2:
                return 50;
                break;
            case 3:
                return 100;
                break;
            case 4:
                return 500;
                break;
            default:
                std::cout <<"Opción no existente"<<std::endl;
                return 0;
        }
        break;
    }
}

void Ngram::printAll(){
    std::cout << "RESULTADOS" <<std::endl;
    std::cout << "No. \t N-gram \t\t Frequency \t Probability \t Strength "<<std::endl;

}

