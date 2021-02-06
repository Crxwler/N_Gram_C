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
     	
                /* 1 Mandar como paráemtro un vector de tipo string que va ser como tipo puntero, entonces todas las modif 
                        se ven reflejadas para regresar todas las palabras   (ELEGIDA)
                2.- Una función dentro de file, que nos regrese palabra por palabra (50/50 ?) */
	private:
                std::string nombreArchivo;
};