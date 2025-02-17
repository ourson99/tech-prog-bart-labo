<<<<<<< HEAD

#include <assert.h>
#include <stdint.h>

#define HEAP_SIZE 1024 * 1024
extern uint8_t* heap;
extern size_t heap_top;

static void* allocate(size_t size) {
	size_t old_top = heap_top;
	heap_top += size;
	assert(heap_top <= HEAP_SIZE);
	return &heap[old_top];
}



typedef struct Node_t Node;
struct Node_t
{
	void* data;  // Data -- Contiendra une person_t
	Node* next;  // Next data location
};

/*
 Déclarer une structure de donnée appeler Node qui est un noeud d'une liste simplement chaînée.
*/




typedef struct person_t {
	char name[256];
	size_t age;
} Person;




/*
* Cr�er un noeud et l'ajouter apr�s le noeud currNode. Utiliser la fonction allocate pour allouer de la m�moire.
*/
void insert(Node* currNode, void* newData);

/*
* Cr�er un noeud et l'ajouter apr�s le noeud head. Si le noeud head est vide(data) lui donner la nouvelle valeur passer.
*/
void insertHead(Node* head, void* newData);

/*
* Supprimer le noeud ayant la valeur de pointeur de data i.e. node->data == rmData. Par simplicit�, pour supprimer faite un memset(node,0,sizeof(Node));
* Retourner le noeud juste avant celui supprimer
*/
Node* removeByData(Node* head, void* rmData);

/*
* Supprimer le noeud ayant le nom passer par name.Par simplicit�, pour supprimer faite un memset(node,0,sizeof(Node));
* Retourner le noeud juste avant celui supprimer
*/
Node* removeByName(Node* head, char* name);

/*
* Trier par l'�ge. Utiliser l'algorithme que vous connaissez le mieux.
*/
=======

#include <assert.h>
#include <stdint.h>

#define HEAP_SIZE 1024 * 1024
extern uint8_t* heap;
extern size_t heap_top;

static void* allocate(size_t size) {
	size_t old_top = heap_top;
	heap_top += size;
	assert(heap_top <= HEAP_SIZE);
	return &heap[old_top];
}



typedef struct Node_t Node;
struct Node_t
{
	void* data;  // Data -- Contiendra une person_t
	Node* next;  // Next data location

};

/*
* Déclarer une structure de donnée appeler Node qui est un noeud d'une liste simplement chaînée.
*/




typedef struct person_t {
	char name[256];
	size_t age;
} Person;




/*
* Cr�er un noeud et l'ajouter apr�s le noeud currNode. Utiliser la fonction allocate pour allouer de la m�moire.
*/
void insert(Node* currNode, void* newData);

/*
* Cr�er un noeud et l'ajouter apr�s le noeud head. Si le noeud head est vide(data) lui donner la nouvelle valeur passer.
*/
void insertHead(Node* head, void* newData);

/*
* Supprimer le noeud ayant la valeur de pointeur de data i.e. node->data == rmData. Par simplicit�, pour supprimer faite un memset(node,0,sizeof(Node));
* Retourner le noeud juste avant celui supprimer
*/
Node* removeByData(Node* head, void* rmData);

/*
* Supprimer le noeud ayant le nom passer par name.Par simplicit�, pour supprimer faite un memset(node,0,sizeof(Node));
* Retourner le noeud juste avant celui supprimer
*/
Node* removeByName(Node* head, char* name);

/*
* Trier par l'�ge. Utiliser l'algorithme que vous connaissez le mieux.
*/
>>>>>>> 1bf6f970a419589f7dcae93ba9dac368e07c8753
void sort(Node* head);