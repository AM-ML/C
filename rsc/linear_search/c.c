#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string phone;
    string name;
} person;

int linear_search(person a[],string target,int len)
{
    for(int i = 0; i < len; i++)
        if(strcmp(a[i].name,target) == 0)
            return i;

    return -1;
}

int main(void)
{

    person people[] = {{"123-456-1141","david"},{"143-542-3913","john"},{"854-233-1231","lewis"},"111-111-1111","ali"};

    int len = sizeof(people) / sizeof(people[0]);

    while(1 == 1)
    {

    int index = linear_search(people,get_string("\033[1;92mname? \033[0;94m"),len);

    if(index == -1)
        printf("\033[1;91mNot Found!\n\n");
    else
        printf("\033[1;96m%s\n\n", people[index].phone);

    }

    return 0;
}
