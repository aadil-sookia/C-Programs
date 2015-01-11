#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h>

int main () {

//define structure

int temp;

int size = 0;

bool done = false;

typedef struct something {

	int Number;
	struct something  *Pointer;
			 } List;

//define head and tail

List *Head = NULL;
List *Tail = NULL;

//demand input and start loop

printf("Enter Number (-1 to finish): ");
scanf("%d", &temp);

while (temp != -1) {

List *NewList;

NewList = (List *)malloc(sizeof(List));

if (Head == NULL) Head = NewList;

NewList -> Number = temp;
NewList -> Pointer = NULL;

if (Tail != NULL) Tail -> Pointer = NewList;

Tail = NewList;

printf("Enter Number (-1 to finish): ");
scanf("%d",&temp);

}

//print inputs

List *Link = Head;

printf("Original List: \n");

while (Link != NULL) {

printf("%d\n", Link -> Number);

size ++;

Link = Link -> Pointer;

}

//sort list

if (Head -> Pointer != NULL) {

while (!done) {

//bool statement which will remain unchanged if no sorting
done = true;

//pointer that will move from structure to structure, along with copy pointers 
List *Sort = Head;
List *Temp1, *Temp2;

if (Sort -> Pointer -> Pointer == NULL) {

if ((Sort -> Number) < (Sort -> Pointer -> Number)) {

done = false;

//copies of pointers
Temp1 = Sort -> Pointer -> Pointer;

Temp2 = Sort -> Pointer;

//swapping of elements
Sort -> Pointer -> Pointer = Sort;

Sort -> Pointer = Temp1;

//reassign Head pointer
Head = Temp2;   } }

else {
//can only operate if at least two structures ahead
while ((Sort -> Pointer -> Pointer) != NULL) {

//if swapping first two elements, different procedure required
if (Sort == Head) {

if ((Sort -> Number) < (Sort -> Pointer -> Number)) {

done = false;

//copies of pointers
Temp1 = Sort -> Pointer -> Pointer;

Temp2 = Sort -> Pointer;

//swapping of elements
Sort -> Pointer -> Pointer = Sort;

Sort -> Pointer = Temp1;

//reassign Head pointer
Head = Temp2;   }

if ((Sort -> Pointer -> Number) < (Sort -> Pointer -> Pointer -> Number)) {

done = false;

//copies of pointers
Temp1 = Sort -> Pointer -> Pointer -> Pointer;

Temp2 = Sort -> Pointer -> Pointer;

Sort -> Pointer -> Pointer -> Pointer = Sort -> Pointer;

Sort -> Pointer -> Pointer = Temp1;

Sort -> Pointer = Temp2; } }

//perform following procedures for rest of linked list
else {

if ((Sort -> Pointer -> Number) < (Sort -> Pointer -> Pointer -> Number)) {

done = false;

//copies of pointers
Temp1 = Sort -> Pointer -> Pointer -> Pointer;

Temp2 = Sort -> Pointer -> Pointer;

Sort -> Pointer -> Pointer -> Pointer = Sort -> Pointer;

Sort -> Pointer -> Pointer = Temp1;

Sort -> Pointer = Temp2; } }

Sort = Sort -> Pointer;

}
}
}
}

//print sorted list
Link = Head;

printf("Sorted List: \n");

while (Link != NULL) {

printf("%d\n", Link -> Number);

size ++;

Link = Link -> Pointer;

}

return 0;

}
