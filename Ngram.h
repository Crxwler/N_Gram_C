
#include <iostream>
#include <vector>
#include <string>

class Ngram{
    public:

        Ngram();
        Ngram(int n, std::string archivo);
        
        void menu();
        int menuTop();
        void menuImportar();
        void printAll();
        void create();

    private:

        std::string archivo;
        int n;
        std::vector<std::string> gram;
        std::vector<int> frequency;
        float probability;
        float strength;

};