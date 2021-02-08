#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class File{
	public:
		File(std::vector<std::string>*, std::string nombreArchivo);   //Csontructor por defecto que recibe el puntero como tal
        bool isFind();    //Verifica si el archivo existe o no, sino existe preecarga uno del sistema.             
        void setNombreArchivo(std::string); //Necesario para modificar el nombre
        std::string getNombreArchivo();             //Necesario para obtener el nombre
	private:
        std::string nombreArchivo;
};
