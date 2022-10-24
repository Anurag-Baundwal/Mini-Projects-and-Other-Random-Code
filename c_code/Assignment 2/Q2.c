// 22 Jan 2020
// Ques 2 - Singly linked list

#include <stdio.h>
#include <stdlib.h>

int i;

struct node {
	int data;
	struct node* next;
};

struct node* new = NULL;
struct node* head = NULL;
struct node* temp = NULL;

// made three pointers to data type "struct node"
// and stored address "NULL" in each of them

struct node* makeNode(void) {
	new = (struct node*)malloc(sizeof(struct node));
	// allocates memory for a node and stores the address of that memory in new
	printf("Enter data for the new node : ");
	scanf("%d", &(new->data));
	new->next = NULL;
	return new;
	// the "next" field of the newly created node will be NULL
}

// 1
void addAtBeginning(void) {
	temp = head; // NULL
	head = makeNode();
	// the pointer to the head node stores the address present in new

	head->next = temp;
	printf(" ... Successfully inserted %d at the beginning.\n", new->data);
	return;
}

// 2
void printAll (void) {
	temp = head;

	while (temp != NULL) {
		printf("%d <-- ", temp->data);
		temp = temp->next;
	}
	printf("\n");
	return;
}

// 3
int countElements (void) {
	temp = head;
	i=0;
	while (temp!=NULL) {
		i++;
		temp = temp->next;
	}
	return i;

}

// 4
void removeFirst(void) {
	temp = head->next;
	head = temp;
	printf("\n%d\n", head);
	return;
}

// 5
void addAtEnd(void) {
	temp = head;
	while(temp != NULL) {
		temp = temp->next;
		if (temp->next->next == NULL) {
			break;
		} // stop at the second last node
	}
	temp->next->next = makeNode();
	return;
}

// 6
void removeLast(void) {
	temp = head;
	if (temp == NULL) {
		printf("Error : The list is empty. No element to remove.\n");
		return;
	}
	while(temp->next->next != NULL) {
		temp = temp->next;
	}
	temp->next = NULL;
	return;
	// throws seg fault when there's only one element remaining

}
int main () {

	int choice;
	printf("\nHere are your choices : \n");
	printf(" 0. Terminate the program\n"); //
	printf(" 1. Insert an element at the beginning.\n"); //
	printf(" 2. Print all the elements.\n"); //
	printf(" 3. Count the number of elements.\n"); //
	printf(" 4. Remove the first element.\n"); //
	printf(" 5. Insert an element at the end.\n"); //
	printf(" 6. Remove the last element.\n"); //
	printf(" 7. Add an element at an index of your choice.\n");
	printf(" 8. Add an element after the first occurence of a given key.\n");
	printf(" 9. Remove the first occurrence of a given data of the list.\n");
	printf("10. Reverse the linked list");
	printf("11. Reverse the linked list without creating a new list.\n");
	printf("12. Insert an element at the correct position in sorted list.\n");
	printf("13. Sort the linked list.\n");
	printf("\n");

	do {
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
		case 0:
			exit(0);
		case 1:
			addAtBeginning();
			break;

		case 2:
			printAll();
			break;

		case 3:
			printf("%d\n", countElements());
			break;

		case 4:
			removeFirst();
			break;

		case 5:
			addAtEnd();
			break;

		case 6:
			removeLast();
			break;

		default:
			break;
		}
	} while(choice != 0);

	return 0;
}
