#include <dirent.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_code_file(const char *filename) {
    const char *extensions[] = {
        ".c",
        ".C",
        ".cpp",
        ".CPP",
        ".h",
        ".H",
        ".hpp",
        ".HPP",
        ".java",
        ".JAVA",
        ".py",
        ".PY",
        ".html",
        ".HTML",
        ".css",
        ".js",
        ".JS",
        ".CSS",
        ".php",
        ".PHP",
        ".rb",
        ".RB",
        ".swift",
        ".SWIFT",
        ".go",
        ".GO",
        ".lua",
        ".LUA",
        ".sh",
        ".SH",
        ".asm",
        ".ASM",
        ".r",
        ".R",
        ".cs",
        ".CS",
        ".dart",
        ".DART"
        ".scala",
        ".SCALA",
        ".kt",
        ".KT",
        ".ts",
        ".TS",
        ".rs",
        ".RS",
        ".groovy",
        ".GROOVY",
        ".ini",
        ".INI",
        ".md",
        ".MD",
        ".rst",
        ".RST",
        ".bat",
        ".BAT",
        ".rsh",
        ".RSH",
        ".Rhtml",
        ".RHTML",
        ".htm",
        ".HTM",
        ".shtml",
        ".SHTML",
        ".xhtml",
        ".XHTML",
        ".md",
        ".MD",
        ".markdown",
        ".MARKDOWN",
        ".cc"};
    const int num_extensions = sizeof(extensions) / sizeof(extensions[0]);

  const char *file_extension = strrchr(filename, '.');
  if (file_extension != NULL) {
    for (int i = 0; i < num_extensions; ++i) {
      if (strcmp(file_extension, extensions[i]) == 0) {
        return 1;
      }
    }
  }
  return 0;
}

int count_lines(const char *filename) {
  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    return 0;
  }
  int lines = 0;
  char buffer[1024];
  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    lines++;
  }
  fclose(file);
  return lines;
}

void count_lines_in_folder(const char *folder_path, int *total_lines) {
  DIR *dir;
  struct dirent *entry;

  if ((dir = opendir(folder_path)) != NULL) {
    while ((entry = readdir(dir)) != NULL) {
      char path[1024];
      snprintf(path, sizeof(path), "%s/%s", folder_path, entry->d_name);
      if (entry->d_type == DT_DIR) {
        if (strcmp(entry->d_name, ".") != 0 &&
            strcmp(entry->d_name, "..") != 0) {
          count_lines_in_folder(path, total_lines);
        }
      } else if (entry->d_type == DT_REG && is_code_file(entry->d_name)) {
        *total_lines += count_lines(path);
      }
    }
    closedir(dir);
  }
}
int main() {

  setlocale(LC_NUMERIC, "");

  int total_lines = 0;
  count_lines_in_folder(".", &total_lines);

  // ASCII art representation of the total lines
  printf("\033[1;93m");
  for (int i = 0; i < 30; i++) {
    printf("#");
  }
  printf("\n");
  for (int i = 0; i < 30; i++) {
    printf("#");
  }
  printf("\n");

  printf("\033[1;96m   ____  _            _     \n");
  printf("  |  _ \\| |          | |    \n");
  printf("  | |_) | | __ _  ___| | __ \n");
  printf("  |  _ <| |/ _` |/ __| |/ / \n");
  printf("  | |_) | | \033[1;92m%'d\033[1;90m\033[1;91m | (__|   <  \n",
         total_lines);
  printf("  |____/|_|\\__,_|\\___|_|\\_\\ \n");
  printf("                            \n\033[1;93m");
  for (int i = 0; i < 30; i++) {
    printf("#");
  }
  printf("\n");
  for (int i = 0; i < 30; i++) {
    printf("#");
  }
  printf("\n\n");

  // printf("\033[1;96mTotal lines of code: \033[1;92m%d\n\n", total_lines);

  return 0;
}
