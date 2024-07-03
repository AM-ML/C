#include "day.h"
#pragma GCC diagnostic ignored "-Wsign-conversion"
Day days[30];


void add_task(int day, const char *task) {
    if (day < 1 || day > 30) {
        printf("Invalid day number\n");
        return;
    }

    if (days[day - 1].tasks == NULL) {
        days[day - 1].tasks = malloc(sizeof(char*)); // Allocate space for one char* initially
        if (days[day - 1].tasks == NULL) {
            printf("Memory allocation failed\n");
            return;
        }
    }

    days[day - 1].tasks = realloc(days[day - 1].tasks, (days[day - 1].len + 1) * sizeof(char*));
    if (days[day - 1].tasks == NULL) {
        printf("Memory reallocation failed\n");
        return;
    }

    days[day - 1].tasks[days[day - 1].len] = malloc(strlen(task) + 1);
    if (days[day - 1].tasks[days[day - 1].len] == NULL) {
        printf("Memory allocation for task string failed\n");
       return;
    }

    strcpy(days[day - 1].tasks[days[day - 1].len], task);

    days[day - 1].len++;
}

void initializeDays(void) {
    memset(days, 0, 30 * sizeof(Day));
}

int read_line(char *s, int len) {
  int c, i = 0;

  while((c = getchar()) != '\n') {
    if (i < len)
      s[i++] = (char) c;
  }

  s[i] = '\0';

  return i;
}

void prompt(int *day, char **s) {
    cyan;
    printf("Enter day: %s", GREEN);
    scanf("%d", day);

    *s = (char *)malloc(sizeof(char) * 25);
    if (*s == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    read_line(*s, 25);
    reset_color;
}


void display_tasks() {
  for(int i = 0; i < 30; i++) {
    if (days[i].len == 0)
      continue;

    yellow;
    printf("Day %s%d\n", GREEN, i+1);
    for(int j = 0; j < days[i].len; j++) {
      yellow;
      printf("::%s%3d %s%s\n", CYAN, j+1,  GREEN, days[i].tasks[j]);
    }
    BREAK();
    reset_color;
  }
}
