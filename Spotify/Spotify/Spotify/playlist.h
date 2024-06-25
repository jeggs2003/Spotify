#pragma once
using namespace std;
#include <string>
#include <fstream>
#include <sstream>
#include "canciones.h"
#include "colacan.h"
#include <locale.h>
#include <wchar.h>

class playlist
{
    //Estructura Pila
	struct Node
	{
		//Datos del Nodo
		canciones data;

		//Siguiente del Nodo
		Node* next;
	};


    //Estructura Cola
    struct NodeCola
    {
        //Datos del Nodo
        colacan data;

        //Siguiente del Nodo
        NodeCola* nextc;
    };

private:
	Node* Inicio = nullptr;


private:
    NodeCola* frente = NULL;
    NodeCola* fin = NULL;

public:

    //Inicializador quicksort artistas
    canciones* startQuickSortA(canciones Info[], int menor, int mayor)
    {
        QuickSortA(Info, menor, mayor);
        return Info;
    }

    //Inicializador quicksort canciones
    canciones* startQuickSort(canciones Info[], int menor, int mayor)
    {
        QuickSort(Info, menor, mayor);
        return Info;
    }


    //QuickSort Canciones
    void QuickSort(canciones Info[], int menor, int mayor)
    {
        if (menor < mayor)
        {
            int pi = QuickSortPartition(Info, mayor, menor);

            QuickSort(Info, menor, pi - 1);
            QuickSort(Info, pi + 1, mayor);
        }
    }

    //QuickSort Artistas
    void QuickSortA(canciones Info[], int menor, int mayor)
    {
        if (menor < mayor)
        {
            int pi = QuickSortPartitionA(Info, mayor, menor);

            QuickSortA(Info, menor, pi - 1);
            QuickSortA(Info, pi + 1, mayor);
        }
    }

    //Particion del quicksort para Artistas
    int QuickSortPartitionA(canciones Info[], int mayor, int menor)
    {

        std::string pivote = Info[mayor].Artista;

        int i = (menor - 1);  // Index of smaller element

        for (int j = menor; j <= mayor; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (Info[j].Artista < pivote)
            {
                i++;    // increment index of smaller element
                swap(&Info[i], &Info[j]);
            }
        }

        swap(&Info[i + 1], &Info[mayor]);
        return (i + 1);
    }

    //swap de datos para ambos metodos
    void swap(canciones* a, canciones* b)
    {
        canciones t = *a;
        *a = *b;
        *b = t;
    }

    //Particion del quicksort para Cancion
    int QuickSortPartition(canciones Info[], int mayor, int menor)
    {

        std::string pivote = Info[mayor].Cancion;

        int i = (menor - 1);  // Index of smaller element

        for (int j = menor; j <= mayor; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (Info[j].Cancion < pivote)
            {
                i++;    // increment index of smaller element
                swap(&Info[i], &Info[j]);
            }
        }

        swap(&Info[i + 1], &Info[mayor]);
        return (i + 1);
    }



    //contador de datos
    int contador()
    {
        int conteo = 0;
        Node* Cantidad = Inicio;
        while (Cantidad) {
            conteo++;
            Cantidad = Cantidad->next;
        }
        return conteo;
    }


    //Agrega los datos leidos a la pila
    void AgregaraLista(Node* lineas)
    {
        Node* ValNuevo = new Node();
        ValNuevo->data.Cancion = lineas->data.Cancion;
        ValNuevo->data.Artista = lineas->data.Artista;
      

        if (lineas->data.Cancion != "" && lineas->data.Cancion != " ")
        {
            if (Inicio == nullptr)
            {
                ValNuevo->next = nullptr;
                Inicio = ValNuevo;
            }
            else
            {
                Node* Moment = Inicio;
                while (Moment->next)
                {
                    Moment = Moment->next;
                }
                Moment->next = ValNuevo;
            }
        }
    }

    //Leer el archivo de texto para migrar datos a la pila
    Node* LeerArchivo(std::string nombre) {
        setlocale(LC_ALL, "spanish");
        std::fstream archivo;
        int totalLines = 0;
        archivo.open(nombre, std::ios_base::in);
        std::string linea;
        char delimitador = '-';
        static Node Playlist[100];
        while (archivo.good())
        {
            getline(archivo, linea);

            std::stringstream X(linea);
            Node* lineas = new Node;
            int countT = 0;
            std::string lineaT = "";
            std::string Espacios = "";

            while (getline(X, lineaT, delimitador)) {
                if (countT == 0) {
                    Espacios = "";
                    //Validacion de espacios iniciales
                    for (size_t i = 0; i < lineaT.length(); i++)
                    {
                        if (i < 2 && lineaT[i] == ' ')
                        {
                        }
                        else
                        {
                            Espacios += lineaT[i];
                        }
                    }
                    lineas->data.Cancion = Espacios;

                }
                if (countT == 1) {
                    Espacios = "";
                    //Validacion de espacios iniciales
                    for (size_t i = 0; i < lineaT.length(); i++)
                    {
                        if (i < 2 && lineaT[i] == ' ')
                        {
                        }
                        else
                        {
                            Espacios += lineaT[i];
                        }
                    }
                    if (Espacios == "") {
                        Espacios = "Desconocido";
                    }
                    lineas->data.Artista = Espacios;

                }
                countT = countT + 1;
            }
            totalLines = totalLines + 1;
            AgregaraLista(lineas);
        }
        archivo.close();
        return Playlist;
    }

    //Imprimir la Pila
    std::string ImprimirPlaylist()
    {
        setlocale(LC_ALL, "spanish");
        std::string Mostrar = "";
        Node* Canci = new Node();
        Canci = Inicio;
        while (Canci)
        {
           
            Mostrar +=  Canci->data.Cancion + " - " + Canci->data.Artista + "\r\n";
            Canci = Canci->next;
        }
        return Mostrar;


    }

    //Almacenar datos de la pila
    canciones* Almacenar()
    {
        
        static canciones Info[200];
        int conteo = 0;
        Node* Change = new Node;
        Change = Inicio;

        while (Change)
        {
            Info[conteo].Cancion = Change->data.Cancion;
            Info[conteo].Artista = Change->data.Artista;

            conteo++;
            Change = Change->next;
        }
        return Info;
    }


    //Agregar canciones a la cola
    void AlmacenarCola(string can, string art) {

        NodeCola* nodo_nuevo = new NodeCola();
        nodo_nuevo->data.Cancion = can;
        nodo_nuevo->data.Artista = art;
        nodo_nuevo->nextc = NULL;

        if (frente == NULL) {
            frente = nodo_nuevo;
        }
        else {
            fin->nextc = nodo_nuevo;
        }
        fin = nodo_nuevo;
    }

    //Imprimir la cola
    std::string ImprimirCola()
    {
        setlocale(LC_ALL, "spanish");
        std::string Mostrar = "";
        NodeCola* Canci = new NodeCola();
        Canci = frente;
        while (Canci)
        {

            Mostrar += Canci->data.Cancion + " - " + Canci->data.Artista + "\r\n";
            Canci = Canci->nextc;
        }
        return Mostrar;
    }

    std::string SacarPila() {
        Node* aux = Inicio;
        std::string repro = "";
        repro = (aux->data.Cancion) + " - " + (aux->data.Artista);
        Inicio = aux->next;
        delete aux;
        return repro;
    }

    void SacarPilaCola() {
        NodeCola* aux = frente;
        std::string can = "";
        std::string art = "";
        can = (aux->data.Cancion);
        art = (aux->data.Artista);
        frente = aux->nextc;
        delete aux;
        agregarPila(can,art);
    }

    void agregarPila(string can, string art) {
        Node* nuevonodo = new Node();
        nuevonodo->data.Cancion = can;
        nuevonodo->data.Artista = art;
        nuevonodo->next = Inicio;
        Inicio = nuevonodo;
    }

    void sacarcola() {
        NodeCola* aux = frente;
        std::string can = "";
        std::string art = "";
        can = (aux->data.Cancion);
        art = (aux->data.Artista);
        frente = aux->nextc;
        delete aux;
    }

    string sacarcolaRepro() {
        NodeCola* aux = frente;
        std::string can = "";
        std::string art = "";
        can = (aux->data.Cancion);
        art = (aux->data.Artista);
        string linea = can + " - " + art;
        frente = aux->nextc;
        delete aux; 
            return linea;
    }

    void ExportarArchivo(std::string nombre) {
        ofstream archivo;
        archivo.open(nombre, ios::out);

        if (archivo.fail()) {
            exit(1);
        }
        string datos  = ImprimirPlaylist();
        archivo << datos;
        archivo.close();
    }


};


