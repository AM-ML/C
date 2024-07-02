#ifndef _H_CODE___
#define _H_CODE___
#define LEN 56
#include <string.h>

typedef struct {
  char country[LEN+1];
  int code;
} Code;

Code countries[40] = {
    {"United States", 1},
    {"China", 86},
    {"Japan", 81},
    {"Germany", 49},
    {"India", 91},
    {"United Kingdom", 44},
    {"France", 33},
    {"Italy", 39},
    {"Canada", 1},
    {"South Korea", 82},
    {"Russia", 7},
    {"Brazil", 55},
    {"Australia", 61},
    {"Spain", 34},
    {"Mexico", 52},
    {"Indonesia", 62},
    {"Netherlands", 31},
    {"Saudi Arabia", 966},
    {"Turkey", 90},
    {"Switzerland", 41},
    {"Taiwan", 886},
    {"Poland", 48},
    {"Sweden", 46},
    {"Belgium", 32},
    {"Thailand", 66},
    {"Argentina", 54},
    {"Norway", 47},
    {"Austria", 43},
    {"United Arab Emirates", 971},
    {"Ireland", 353},
    {"Singapore", 65},
    {"Malaysia", 60},
    {"South Africa", 27},
    {"Denmark", 45},
    {"Philippines", 63},
    {"Colombia", 57},
    {"Bangladesh", 880},
    {"Egypt", 20},
    {"Vietnam", 84},
    {"Lebanon", 961}
};

Code search_code(char *country) {
  for (int i = 0; i < (sizeof(countries) / sizeof(Code)); i++) {
    if (strcmp(country, countries[i].country) == 0)
      return countries[i];
  }

  return (Code) {.code=-1};
}

Code search_country(int code) {
  for(int i = 0; i < (sizeof(countries) / sizeof(Code)); i++) {
    if (code == countries[i].code) {
      return countries[i];
    }
  }

  return (Code) {.code = -1};
}
#endif
