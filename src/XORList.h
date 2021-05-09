/*
 * XORList.h
 *
 *  Created on: 20 jul. 2019
 *      Author: alberto
 */

#ifndef SRC_XORLIST_H_
#define SRC_XORLIST_H_

typedef struct node_xorList_t {
	int data;
	struct XORNode* XORptr;
}XORNode;

typedef struct xorList_t {
	XORNode* head;
	unsigned size;
}XORList;


XORList* initXORList();

XORNode* createNode(XORList* l, int data);

void add(XORList* l, int data);

XORNode* removeFirst(XORList* l);

XORNode* removeByIndex(XORList* l, unsigned index);

XORNode* removeByNode(XORList* l, XORNode* n);

#endif /* SRC_XORLIST_H_ */
