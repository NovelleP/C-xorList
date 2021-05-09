/*
 * XORList.c
 *
 *  Created on: 20 jul. 2019
 *      Author: alberto
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "XORList.h"

XORList* initXORList() {
	XORList* list = malloc(sizeof(XORList));
	list->head = NULL;
	list->size = 0;

	return list;
}

XORNode* createNode(XORList* l, int data);

void add(XORList* l, int data) {
	XORNode* n = malloc(sizeof(XORNode));
	n->XORptr = (struct XORNode*) ((uintptr_t)NULL ^ (uintptr_t)l->head);
	if(l->head != NULL)
		(l->head)->XORptr = (struct XORNode*) ((uintptr_t)n ^ (uintptr_t)(l->head)->XORptr);
	n->data = data;
	l->head = n;
}

XORNode* removeFirst(XORList* l) {
	if(l->head == NULL) //list is empty
		return NULL;

	XORNode* removedNode = l->head;
	if(l->head->XORptr == NULL) { //list has only one element
		l->head = NULL;
	}
	else { //list has two or more elements
		XORNode* secondNode = (XORNode*)l->head->XORptr;
		secondNode->XORptr = (struct XORNode*) ((uintptr_t)secondNode->XORptr ^ (uintptr_t)l->head);
		l->head = secondNode;
	}

	return removedNode;
}

XORNode* removeByIndex(XORList* l, unsigned index);

XORNode* removeByNode(XORList* l, XORNode* n);
