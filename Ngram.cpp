#include <math.h> 
#include "Ngram.h"
#include "File.h"

Ngram::Ngram(){
    archivo = "";
}

Ngram::Ngram(std::string Archivo){
    archivo = Archivo;
}

void Ngram::menuImportar(){ //Agregado este menu necesario debido a que me generaba problemas el constructor con los names
    int opcion = 1;
    int salir = salir;
    std::string nombre = "";
    //std::vector<std::string> vectorPalabras;    //Ejemplo de uso del vetor
    std::cout << "MENU DE OPCIONES" <<std::endl;
    std::cout << "1.- Importar archivo" << std::endl;
    std::cout << "2.- Utilizar archivo de sistema "<<std::endl;
    std::cout << "3.- Salir"<<std::endl;
    std::cout << "Elije una opción: "<<std::endl;
    std::cin >> opcion;
    switch(opcion){
        case 1:
            //Todo esto es un ejemplo de como se llamaría para obtener dicho vector con puntero
            std::cout << "Ingrese el nombre del archivo: " << std::endl;
            std::cin.ignore();
            std::getline(std::cin, nombre);
            std::cout << "Nombre:  " << nombre <<std::endl;
            break;
        case 2:
            nombre = "file.txt";
            break;
        case 3:
            std::cout <<"Seguro que quieres salir...?"<<std::endl;
            std::cout <<"1. SI"<<std::endl;
            std::cout <<"2. NO"<<std::endl;
            std::cin >> salir;
            if (salir==1){
                exit(EXIT_FAILURE);
                break;
            }
            else{
                return menuImportar();
                break;
            }
        default:
            std::cout <<"Opcion no existente, porfavor ingresa una opcion valida"<<std::endl;
            return menuImportar();
            break;
    }
    File fis(&word, nombre);           //Instancia del objeto File, el cual le mando el punteros
    /*std::cout << "Find? " << fis.isFind() << std::endl;
    for (int i = 0; i < word.size(); ++i){
        std::cout<<word[i] << std::endl;
    } */   
    menu();
    
}

void Ngram::menu(){
    int opcion = 1;
    int result;
    while(opcion){
        std::cout << "MENU DE OPCIONES" <<std::endl;
        std::cout << "1.- Bi-gram" << std::endl;
        std::cout << "2.- Tri-gram "<<std::endl;
        std::cout << "3.- N(4)-gram "<<std::endl;
        std::cout << "4.- N(5).gram"<<std::endl;
        std::cout << "5.- Exit"<<std::endl;
        std::cout << "Elije una opción: "<<std::endl;
        std::cin >> opcion;

        switch(opcion){
            case 1:
                biGram();
                result = menuTop();
                printAll(result);
                break;
            case 2:
                triGram();
                result = menuTop();
                printAll(result);
                break;
            case 3:
                cuatriGram();
                result = menuTop();
                printAll(result);
                break;
            case 4:
                pentaGram();
                result = menuTop();
                printAll(result);
                break;
            case 5:
                menuImportar();
                break;
            default:
                std::cout <<"Opcion no existente, porfavor ingresa una opcion valida"<<std::endl;
                return menu();
                break;
        }   
    }
}

int Ngram::menuTop(){
    int opcion = 1;
    while(opcion){
        std::cout << "TOP" <<std::endl;
        std::cout << "1.- 5" << std::endl;
        std::cout << "2.- 10 "<<std::endl;
        std::cout << "3.- 15 "<<std::endl;
        std::cout << "4.- 20"<<std::endl;
        std::cout << "5.- 50"<<std::endl;
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
                std::cout <<"Opcion no existente, porfavor ingresa una opcion valida"<<std::endl;
                return 0;
        }
        break;
    }
    return 0;
}


void Ngram::printAll(int n){
    std::cout << "RESULTADOS" <<std::endl;
    std::cout << "No.  N-gram \t\t Frequency \t Probability \t Strength "<<std::endl;
    sortAll();
    int total = getTotal();
    n = n > gram.size() ? gram.size() : n;
    for (int i = 0; i < n; ++i){
        probability = frequency[i] / total;
        strength = log(frequency[i]) * probability; 
        std::cout << (i+1) <<" "<< gram[i]<< "\t\t\t" << frequency[i]<<"\t" <<probability <<"\t" << strength<< std::endl; 
    }
}

int Ngram::getTotal(){
    int count = 0;
    for (int i = 0; i < frequency.size(); ++i){
        count += frequency[i];
    }
    return count;
}

void Ngram::biGram(){
    std::string str="";
    for (int i = 0; i < word.size()-1; ++i){
        str = word[i] + " "+ word[i+1];
        if (!find(str)){
            gram.push_back(str);
            frequency.push_back(1);
        }  
    }
}
void Ngram::triGram(){
    std::string str="";
    for (int i = 0; i < word.size()-2; ++i){
        str = word[i] + " "+ word[i+1] + " "+ word[i+2];
        if (!find(str)){
            gram.push_back(str);
            frequency.push_back(1);
        }  
    }
}
void Ngram::cuatriGram(){
    std::string str="";
    for (int i = 0; i < word.size()-3; ++i){
        str = word[i] + " "+ word[i+1] + " "+ word[i+2] + " "+ word[i+3];
        if (!find(str)){
            gram.push_back(str);
            frequency.push_back(1);
        }  
    }
}
void Ngram::pentaGram(){
    std::string str="";
    for (int i = 0; i < word.size()-4; ++i){
        str = word[i] + " "+ word[i+1] + " "+ word[i+2] + " "+ word[i+3] + " "+ word[i+4];
        if (!find(str)){
            gram.push_back(str);
            frequency.push_back(1);
        }  
    }
}  

bool Ngram::find(std::string bus){
    if (gram.size()<1)
        return false;
    for (int i = 0; i < gram.size(); ++i){
        if (bus == gram[i]){
            frequency[i] += 1;
            return true;
        }
    }
    return false;
}

void Ngram::sortAll(){
    bool flag;
    int temp;
    std::string temp2; 
    for (int i = 0; i < frequency.size()-1; ++i) { 
        flag = false; 
        for (int j = 0; j < frequency.size()-i-1; ++j){ 
            if (frequency[j] < frequency[j+1]) {   
                flag = true; 
                temp = frequency[j];
                frequency[j] = frequency[j+1];
                frequency[j+1] = temp;
                temp2 = gram[j];
                gram[j] = gram[j+1];
                gram[j+1] = temp2;
            } 
        } 
        if (flag == false) 
            break; 
   } 
}