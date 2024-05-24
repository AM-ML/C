#include "lib.h"

typedef struct {
	char *name;
	char *phone;
} Person;

typedef struct {
	int result;
	char *phone;
} LS;

void addPerson(Person *phonebook[], Person person, int index) {
	phonebook[index] = (Person*) malloc(sizeof(Person));
	phonebook[index]->name = person.name;
	phonebook[index]->phone = person.phone;
}

Person newPerson(char *name, char*phone)
{
	Person p;

	p.name = name;
	p.phone = phone;

	return p;
}

LS linear_search(Person *phonebook[], char* target, int n);

int main(int argc, char *argv[]) {
	int index = 0;

	Person p1, p2, p3;

	p1.name = "John";
	p2.name = "Jane";

	p1.phone = "123-321-1234";
	p2.phone = "456-789-938";

	p3 = newPerson("David", "879-424-3946");

	Person* phonebook[100];

	addPerson(phonebook, p1, index++);
	addPerson(phonebook, p2, index++);
	addPerson(phonebook, p3, index++);

	char target[50];

	for(;;)
	{
		printf("\033[1;96mEnter Name: \033[1;92m");
		read_line(target, 50);

		if(strcmp(strLower(target), "exit") == 0)
		{
			printf("\033[1;92mGoodbye!\033[0;0m\n\n");
			break;
		}

		LS returned = linear_search(phonebook, target, index);

		if(returned.result == -1) {
			printf("\033[1;91mNot Found.\033[0;0m\n\n");
		} else {
			printf("\033[1;96m%s: \033[1;92m%s.\n\n\033[0;0m", capitalize(target), returned.phone);
		}

		// Free allocated memory
		free(returned.phone);
	}

	for (int i = 0; i < index; i++) {
		free(phonebook[i]);
	}
	return 0;
}

LS linear_search(Person *phonebook[], char* target, int n) {
	LS returned;
	returned.result = -1;
	returned.phone = (char*) malloc(20 * sizeof(char)); // Allocate memory for phone

	char *lwrTarget = strLower(target);

	for(int i = 0; i < n; i++) {
		if(strcmp(strLower(phonebook[i]->name), lwrTarget) == 0) {
			returned.result = 0;
			strcpy(returned.phone, phonebook[i]->phone);
			break;
		}
	}

	free(lwrTarget);

	return returned;
}
