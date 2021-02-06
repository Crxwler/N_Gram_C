
#include <iostream>
#include <vector>
#include <string>

class Ngram{
    public:

        Ngram();
        Ngram(int n, std::string archivo);
        
        void menu();
        int menuTop();
        void menuImportar();//es para seleccionar si usaremos un archivo por default o no
        void printAll();
        void create();
        /*
        Ngram(std::string cadena, std::string cadenaDos);
        Ngram(std::string cadena, std::string cadenaDos, std::string cadenaTres);
        Ngram(std::string cadena, std::string cadenaDos, std::string cadenaTres, std::string cadenaCuatro);
        Ngram(std::string cadena, std::string cadenaDos, std::string cadenaTres, std::string cadenaCuatro, std::string cadenaCinco);
        */

    private:

        std::string archivo;
        int n;
        std::vector<int> frequency;
        float probability;
        float strength;

};