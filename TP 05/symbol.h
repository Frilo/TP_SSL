#ifndef DICCIONARIO
#define DICCIONARIO

struct Dicc {
	char lexema[16];
	int valor;
	struct Dicc *sig;
};

struct Dicc * insertar(struct Dicc **, char*, int);
void mostrarLista(struct Dicc *);
struct Dicc * buscarLexema(struct Dicc **, char[]);
int estaEnElDic(struct Dicc ** inicio, char nombreID[]);

#endif // DICCIONARIO

