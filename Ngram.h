#include <iostream>
#include <vector>
#include <string>

class Ngram{
    public:
        Ngram();
        Ngram(std::string archivo);
        void menu();
        int menuTop();
        void menuImportar();
        void printAll();
        void biGram();
        void triGram();
        void cuatriGram();
        void pentaGram();
        bool find(std::string bus);
        int getTotal();
        void sortAll();
        void printAll(int n);
        void getProbability();
        void countWords();

    private:
        std::string archivo;
        std::vector<std::string> word;
        std::vector<std::string> gram;
        std::vector<int> frequency;
        std::vector<float> probability;
        std::vector<std::string> wordClear;
        std::vector<int> frequencyWord;
        float strength;
};