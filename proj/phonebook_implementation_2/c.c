#include <stdio.h>
#include "lib.h"

typedef struct
{
    int result;
    char* name;
} LS;

typedef struct
{
    char* name;
    char* phone;
} Person;

typedef struct
{
    Person* book;
    int index;
} Phonebook;


Person newPerson(char* name, char* phone);
void addPerson(Phonebook* pb, Person person);
char** getPhones(Phonebook pb);
char** getNames(Phonebook pb);
void listBook(Phonebook pb, bool format);
size_t size(Phonebook pb);


int main(int argc, char* argv[])
{
    Phonebook pb;
    pb.book = (Person*)malloc(sizeof(Person) * 100);
    pb.index = 0;

    Person p1 = newPerson("david", "341-738-9580");
    addPerson(&pb, p1);
    addPerson(&pb, newPerson("ali", "013-692-9409"));
    addPerson(&pb, newPerson("samer", "910-873-0865"));
    addPerson(&pb, newPerson("Alice", "823-991-9999"));
    addPerson(&pb, newPerson("Bob", "142-783-3029"));
    addPerson(&pb, newPerson("Charlie", "842-985-2983"));
    addPerson(&pb, newPerson("David", "524-293-4243"));
    addPerson(&pb, newPerson("Emma", "910-086-2384"));
    addPerson(&pb, newPerson("Frank", "812-783-3912"));
    addPerson(&pb, newPerson("Grace", "823-854-8888"));
    addPerson(&pb, newPerson("Henry", "129-433-9034"));
    addPerson(&pb, newPerson("Ivy", "034-830-7123"));
    addPerson(&pb, newPerson("Jack", "642-589-1823"));

    listBook(pb, true);

    free(pb.book);
    return 0;
}


size_t size(Phonebook pb)
{
    return (size_t) pb.index;
}

Person newPerson(char* name, char* phone)
{
    Person person;
    person.name = capitalize(name);
    person.phone = phone;

    return person;
}

void listBook(Phonebook pb, bool format)
{
	if(format)
	{
		size_t max_len = Max_String_Length(getNames(pb), size(pb));
	    for (int i = 0; i < size(pb); i++)
	    {
	    	cyan();
	        printf("%*s %s%s\n", (int)max_len, pb.book[i].name,GREEN,pb.book[i].phone);
	        reset();
	    }
	} else {
	    for (int i = 0; i < size(pb); i++)
	    {
	        printf("%s %s\n", pb.book[i].name, pb.book[i].phone);
	    }

	}
}

void addPerson(Phonebook* pb, Person person)
{
    pb->book[pb->index++] = person;
}

char** getNames(Phonebook pb)
{
    char** names = (char**)malloc(sizeof(char*) * size(pb));
    for (int i = 0; i < size(pb); i++)
    {
        names[i] = pb.book[i].name;
    }
    return names;
}

// Function to get an array of phones from the phone book
char** getPhones(Phonebook pb)
{
    char** phones = (char**)malloc(sizeof(char*) * size(pb));
    for (int i = 0; i < size(pb); i++)
    {
        phones[i] = pb.book[i].phone;
    }
    return phones;
}
