
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
    int opcion = -1;
    while(opcion){
        std::cout << "MENU DE OPCIONES" <<std::endl;
        std::cout << "1.- Bi-gram" << std::endl;
        std::cout << "2.- Tri-gram "<<std::endl;
        std::cout << "3.- N(4)-gram "<<std::endl;
        std::cout << "4.- N(5).gram"<<std::endl;
        std::cout << "0.- Exit"<<std::endl;
        std::cout << "Elije una opción: "<<std::endl;
        std::cin >> opcion;

        switch(opcion){
            
            case 1:
                menuTop();
                break;
            case 2:
                menuTop();
                break;
            case 3:
                menuTop();
                break;
            case 4:
                menuTop();
                break;
            default:
                std::cout <<"Opcion no existente"<<std::endl;
                break;
        }
        
    }
}

int Ngram::menuTop(){
    int opcion = -1;
    while(opcion){
        std::cout << "TOP" <<std::endl;
        std::cout << "1.- 5" << std::endl;
        std::cout << "2.- 10 "<<std::endl;
        std::cout << "3.- 15 "<<std::endl;
        std::cout << "4.- 20"<<std::endl;
        std::cout << "0.- 50"<<std::endl;
        std::cout << "Elije una opción: "<<std::endl;
        std::cin >> opcion;

        switch(opcion){
            
            case 1:
                return 5;
                break;
            case 2:
                return 10;
                break;
            case 3:
                return 15;
                break;
            case 4:
                return 20;
                break;
            case 5:
                return 50;
                break;
            default:
                std::cout <<"Opción no existente"<<std::endl;
                return 0;
        }
        break;
    }
    return 0;
}

void Ngram::create(){
/*
1. Conforme se estan sacando las palabras, se van agregando a un vector en el formato n-gram, y al sacar el siguiente n-gram se comprueba el vector para
    no volverlo a generar y si existe se agrega su frecuencia
 */
}
void Ngram::printAll(){
    std::cout << "RESULTADOS" <<std::endl;
    std::cout << "No. \t N-gram \t\t Frequency \t Probability \t Strength "<<std::endl;

}

