#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// Clase base Libro
class Libro {
protected:
    string titulo;
    string autor;
    string ISBN;
    bool prestado;

public:
    Libro() {}

    Libro(string t, string a, string i) {
        titulo = t;
        autor = a;
        ISBN = i;
        prestado = false;
    }

    string getTitulo() { return titulo; }
    string getAutor() { return autor; }
    string getISBN() { return ISBN; }
    bool estaPrestado() { return prestado; }

    void prestar() { prestado = true; }
    void devolver() { prestado = false; }
};
// Clase derivada LibroDigital
class LibroDigital:public Libro{
private:
    string url;

public:

    LibroDigital(){}
    
    LibroDigital(string t, string a, string i, string u) : Libro(t, a, i) {
        url=u;
    }
    string getURL(){return url;}
};