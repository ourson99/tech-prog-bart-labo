<<<<<<< HEAD
#include <stdint.h>
#include <assert.h>

#define HEAP_SIZE 1024 * 1024
extern uint8_t* heap;
extern size_t heap_top;

static void* allocate(size_t size) {
	size_t old_top = heap_top;
	heap_top += size;
	assert(heap_top <= HEAP_SIZE);
	return &heap[old_top];
}

/*
* D�clarer une structure de donn�e appeler Node qui est un noeud d'une liste doublement cha�n�e.
*/

typedef struct Node_double Node;
struct Node_double
{
	Node* prev; // Previous data location
	void* data; // Data -- Contiendra une person_double
	Node* next; // Next data locatiom
};

typedef struct person_t {
	char name[256];
	size_t age;
} Person;


/*
* Cr�er un noeud et l'ajouter apr�s le noeud currNode. Consid�rer la propri�t� next et prev.
*/
void insert(Node* currNode, void* newData);

/*
* Cr�er un noeud et l'ajouter apr�s le noeud de fin. Si le noeud head est vide(data) lui donner la nouvelle valeur passer.
*/
void insertTail(Node* head, void* newData);

/*
* Cr�er un noeud et l'ajouter apr�s le noeud head. Si le noeud head est vide(data) lui donner la nouvelle valeur passer.
*/
void insertHead(Node* head, void* newData);

/*
* Enlever le noeud de la liste et retourner le noeud avec aucune r�f�rence(i.e. next et prev == NULL)
*/
Node* removeNode(Node* currNode);

/*
* Ajouter dans le tableau le nom de chacun en ordre alphab�tic. Par simplicit�, consid�rer seulement les deux premi�re lettre.
*/
void alphabetise(Node* head, char* names[]);


=======
#include <stdint.h>
#include <assert.h>

#define HEAP_SIZE 1024 * 1024
extern uint8_t* heap;
extern size_t heap_top;

static void* allocate(size_t size) {
	size_t old_top = heap_top;
	heap_top += size;
	assert(heap_top <= HEAP_SIZE);
	return &heap[old_top];
}

/*
* D�clarer une structure de donn�e appeler Node qui est un noeud d'une liste doublement cha�n�e.
*/

typedef struct Node_double Node;
struct Node_double
{
	Node* prev; // Previous data location
	void* data; // Data -- Contiendra une person_double
	Node* next; // Next data locatiom
};

typedef struct person_t {
	char name[256];
	size_t age;
} Person;


/*
* Cr�er un noeud et l'ajouter apr�s le noeud currNode. Consid�rer la propri�t� next et prev.
*/
void insert(Node* currNode, void* newData);

/*
* Cr�er un noeud et l'ajouter apr�s le noeud de fin. Si le noeud head est vide(data) lui donner la nouvelle valeur passer.
*/
void insertTail(Node* head, void* newData);

/*
* Cr�er un noeud et l'ajouter apr�s le noeud head. Si le noeud head est vide(data) lui donner la nouvelle valeur passer.
*/
void insertHead(Node* head, void* newData);

/*
* Enlever le noeud de la liste et retourner le noeud avec aucune r�f�rence(i.e. next et prev == NULL)
*/
Node* removeNode(Node* currNode);

/*
* Ajouter dans le tableau le nom de chacun en ordre alphab�tic. Par simplicit�, consid�rer seulement les deux premi�re lettre.
*/
void alphabetise(Node* head, char* names[]);


>>>>>>> 1bf6f970a419589f7dcae93ba9dac368e07c8753
void HeadLast(Node* currNode);