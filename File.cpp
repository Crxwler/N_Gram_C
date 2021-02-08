#include <string>
#include "File.h"
#include <fstream>
#include <sstream>
#include <algorithm>

void File::setNombreArchivo(std::string nombre){
	File::nombreArchivo = nombre;
}

std::string File::getNombreArchivo(){
	return File::nombreArchivo;
}


File::File(std::vector<std::string> *tokens, std::string nombre) {
	std::fstream fin;
	setNombreArchivo(nombre);
	if(isFind()){
		//std::cout <<"Se encontro xd" << std::endl;
		fin.open(getNombreArchivo(),  std::ios::in);
	}else{
		//std::cout <<"no se encontro xd" << std::endl;
		fin.open("file.txt",  std::ios::in);
	}
	
	std::vector<std::string> row;
	std::string line, word, temp;

	while (!fin.eof()) {

		//row.clear();
		
		std::getline(fin, line);
		//std::cout <<"linea: " <<line << std::endl;
		std::stringstream s(line);
		while (std::getline(s, word, ' ')) {
			transform(word.begin(), word.end(), word.begin(), ::tolower);
			row.push_back(word);
		}
		*tokens = row;    //Contendrá las palabras que se obtuvieron mediante la separación
	}
}


bool File::isFind(){ 	//Verifica si un archivo existe o no
	std::ifstream fin;
	fin.open(getNombreArchivo(), std::ios::in);
	if(fin){
		return 1;
	}else{
		std::cout << "Archivo no existente, tomando el archivo por defecto" << std::endl;
		return 0;
	}
	return 0;
}
