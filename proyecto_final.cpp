#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int menuprincipal();
int submenuestudiantes();
int submenudocentes();

int main(){
    int opcion;

    while (true) {
        opcion = menuprincipal();

        if (opcion == 1) {
            submenuestudiantes();
        } else if (opcion == 2) {
            submenudocentes();
        } else if (opcion == 3) {
            cout << "Saliendo del programa. ¡MUCHAS GRACIAS!" << endl;
            break;
        } else {
            cout << "Opción no válida. Ingrese una opcion valida." << endl;
        }
    }

    return 0;
}

int menuprincipal(){
    int opcion;
    cout << "----------BIENVENIDO----------"<<endl;
    cout << "ELIJA LA OPCION DESEADA"<<endl;
    cout << "1.ESTUDIANTES"<<endl;
    cout << "2.DOCENTES"<<endl;
    cout << "3.SALIR"<<endl;
    cin >> opcion;
    return opcion;
}

int submenuestudiantes(){
    int opcion;
    cout << "*****Menú Estudiantes*****"<<endl;
    cout << "1.Ingresar Nuevo Estudiante"<<endl;
    cout << "2.Mostrar Lista de Estudiantes"<<endl;
    cout << "3.Eliminar Estudiante"<<endl;
    cout << "4.Buscar Estudiante"<<endl;
    cout << "5.Modificar Estudiante"<<endl;
    cout << "6.Volver al Menú Principal"<<endl;
    cout << "Elija la opción deseada: ";
    cin >> opcion;
    return opcion;
}

int submenudocentes(){
    int opcion;
    cout << "*****Menú Docentes*****"<<endl;
    cout << "1.Ingresar Nuevo Docente"<<endl;
    cout << "2.Mostrar Lista de Docentes"<<endl;
    cout << "3.Eliminar Docente"<<endl;
    cout << "4.Buscar Docente"<<endl;
    cout << "5.Modificar Docente"<<endl;
    cout << "6.Volver al Menú Principal"<<endl;
    cout << "Elija la opción deseada: ";
    cin >> opcion;
    return opcion;
}

void añadirestudiante(){
    float nota;
    ofstream archivo;
    string ID;
    string nombre;
    string apellido;
    string facultad;
    string semestre;
    string carrera;
    archivo.open("C:\\Users\\yuver\\Desktop\\proyecto final programacion\\proyecto final\\Reporte estudiantes\\Base_estudiantes.txt", ios::app);
    if(archivo.fail()){
        cout << "Archivo no encontrado" << endl;
    }
    cin.ignore();
    
    cout << "Ingrese un ID para el usuario: ";
    getline(cin, ID);


    
    


    archivo.close();

}

string verificarid(string ID_REPETIDO){
    ifstream archivo;
    archivo.open("C:\\Users\\PROGRAMACION\\Desktop\\codigos c++\\.vscode\\ejercicio 28\\estudiante.txt", ios::in);
    if(archivo.fail()){
        cout << "Archivo no encontrado" << endl;
    }
    string linea;
    while(getline(archivo, linea)){
        string ID;
        ID = linea.substr(0, 10);
        if (ID == ID_REPETIDO){
            string nota;
            nota = linea.substr(11, 2);
            return nota;
        }
    }
    archivo.close();
    linea="";
    return linea;
}