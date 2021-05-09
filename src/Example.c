/*
 * Example.c
 *
 *  Created on: 20 jul. 2019
 *      Author: alberto
 */

#include <stdio.h>
#include <stdlib.h>
#include "XORList.h"

int main() {

	XORList* list = initXORList();
	add(list, 5);
	add(list, 6);
	removeFirst(list);

	return 0;
}

