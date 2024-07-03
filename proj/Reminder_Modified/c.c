#include "lib.h"
#include "day.h"
#pragma GCC diagnostic ignored "-Wsign-conversion"

int main(int argc, char *argv[]) {
  initializeDays();

  // add_task(1, "eat");
  int day; string task = NULL;
  for(;;) {
    prompt(&day, &task);
    if (day == 0)
      break;
    add_task(day, task);
  }

  display_tasks();

  return 0;
}
