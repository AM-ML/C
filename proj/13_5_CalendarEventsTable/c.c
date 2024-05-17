#include <stdio.h>
#include <string.h>
#define MAX_IN 100
#define MAX_REM 50
#define MAX_DAYS 50

int max_strlen(char array[][MAX_REM], int rows);
int read_line(char str[], int n);
char *get_day(char s[], char day[]);
char *get_reminder(char s[], char rem[]);
int get_wp_index(char s[]);

int main(void)
{
    int run = 1, index = 0;
    char input[MAX_IN + 3], reminders[MAX_IN][MAX_REM], days[MAX_IN][MAX_DAYS], day[MAX_DAYS], rem[MAX_REM + 3]; // Increased size of day array

    while (run == 1) 
    {
        printf("Enter: ");

        if (read_line(input, MAX_IN) == -1)
            break;

        get_reminder(input, rem); 
        get_day(input, day);     

        strcpy(reminders[index], rem); // Using strcpy to copy arrays
        strcpy(days[index], day);
        index++;
    }

    int l_max = max_strlen(reminders, index);

    printf("|Day %-*s |\n|=====", l_max, "Reminder");
    for(int i = 0; i < l_max; i++)
    	printf("=");
    printf("|\n");
    for(int i = 0; i < index; i++)
    {
    	printf("| %2s %-*s |\n", days[i], l_max, reminders[i]);
    }

    return 0;
}

int get_wp_index(char s[])
{
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == ' ')
            return i;
}

char *get_day(char s[], char day[])
{
    int fwp = get_wp_index(s);

    for (int i = 0; i < fwp; i++)
        day[i] = s[i];

    day[fwp] = '\0'; // Added null terminator
    return day;
}

char *get_reminder(char s[], char rem[])
{
    int fwp = get_wp_index(s);

    for (int i = fwp + 1; i < strlen(s); i++)
        rem[i - (fwp + 1)] = s[i];

    rem[strlen(s) - (fwp + 1)] = '\0'; // Added null terminator
    return rem;
}

int read_line(char str[], int n)
{
    int c, i = 0;

    if ((c = getchar()) == '0') // Corrected comparison to check for '0'
        return -1;
    else if (i < n)
        str[i++] = c;

    while ((c = getchar()) != '\n')
        if (i < n)
            str[i++] = c;
    str[i] = '\0';

    return i;
}

int max_strlen(char array[][MAX_REM], int rows) {
    int max_length = 0;

    for (int i = 0; i < rows; i++) {
        int length = strlen(array[i]);
        if (length > max_length) {
            max_length = length;
        }
    }

    return max_length;
}