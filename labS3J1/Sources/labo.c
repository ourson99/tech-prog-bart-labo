﻿#include <assert.h>
#include <stdint.h>
#include "labo.h"


//Déclare struct appeler Node qui est un noeud simplement chaine

// Structure de noeud





// Creer un noeud et l'ajouter apr�s le noeud currNode. Utiliser la fonction allocate pour allouer de la memoire.
// Param currNode = Noeud    Param newData = Data du noeud
void insert(Node* currNode, void* newData)
{
	Node* NewNode = allocate(sizeof(Node));  // Allocation d'espace mémoire de la taille d'un Node
	NewNode->data = newData;  // Enregistrement des données passées en parametre dans un.data


	

	currNode->next = NewNode;  // CurrentNode.next prend la valeur de l'adresse de la nouvelle node

	NewNode->next = NULL; // L'adresse next du node devient NULL, puisqu'elle pointe vers rien

	

}



/*
* Cr�er un noeud et l'ajouter apr�s le noeud head. Si le noeud head est vide(data) lui donner la nouvelle valeur passer.
*/
void insertHead(Node* head, void* newData) // Node* Head = Le premier Node dans la liste   
{
	
	if (head->data == NULL)
	{
		head->data = newData;
	}  
	else
	{
		Node* NewNode = allocate(sizeof(Node)); // Allocate espace
		NewNode->next = head->next;  // NewNode->next pointe ce que le header pointait
		head->next = NewNode; // Le header pointe maintenant vers NewNode
		NewNode->data = newData;
	}
}

/*
Chercher param rmData, lorsque rmData = Node->Data, Supprimer la Node et retourner la précédente.
Pour supprimer = memset(node,0,sizeof(Node));
*/
Node* removeByData(Node* head, void* rmData)
{
	Node* previous;
	Node* cpy = head;
	int prev = 0;

	while (cpy != NULL)
	{

		// Si data == data head
		if (cpy->data == rmData && prev == 0)
		{
			memset(head, 0, sizeof(Node)); // Efface le head
			return 0;
		}
		// Si data != data-> head
		else if (cpy->data == rmData && prev > 0)
		{
			previous->next = cpy->next; // Bridge entre les nodes qui seront séparés

			memset(cpy, 0, sizeof(Node));
			goto hehe;
		}

		if (prev >= 0) // Tout le temps
		{
			previous = cpy;
			cpy = cpy->next;
		}

		prev++;
	}
	hehe:
	return previous;
}

/*
Supprimer le noeud ayant le nom passer par name.
When name = Node->data, return previous node

		supprimer faite un memset(node,0,sizeof(Node));
*/

Node* removeByName(Node* head, char* name)
{
	Node* previous;
	Node* cpy = head;
	Person* p;
	int count = 0;

	while (cpy != NULL)
	{
		p = cpy->data;
		if (p->name == name && count > 0) // Ignore le header puisque impossible de return previous
		{

			previous->next = cpy->next; // bridge
			memset(cpy, 0, sizeof(cpy));
			break;
		}

		previous = cpy;
		cpy = cpy->next;

		count++;
	}


	return previous;
}



void sort(Node* head) 
{
	Person* num1;
	Person* num2;
	Person* num3;
	Node* big = head;
	Node* comp = big->next;
	Node* temp = head;

	int count = 1;
	while (big->next != NULL) // Combien de nodes y a t-il
	{
		big = big->next;
		count++;
	}
	big = head;

	int change = 0;
	for (int i = 0; i < (count-1); i++)
	{
		num1 = big->data;
		num2 = comp->data;
		if (num1->age > num2->age)
		{
			temp->data = big->data;
			big->data = comp->data;
			comp->data = temp->data;
			change = 1;
		}
		if (change == 1)
		{
			i = -1;
			change = 0;
			
			big = head;
			comp = big->next;

		}
		else
		{
			big = big->next;
			if (comp->next != NULL)
			{
				comp = comp->next;
			}
			else
			{
				break;
			}
		}
	}

	



}
