#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <locale.h>


int is_code_file(const char *filename) {
    setlocale(LC_NUMERIC, "");
    
    const char *extensions[] = {".c", ".cpp", ".h", ".hpp", ".java", ".py", ".html", ".css",
                                ".js", ".php", ".rb", ".swift", ".go", ".pl", ".lua", ".sh",
                                ".sql", ".asm", ".r", ".cs", ".dart", ".scala", ".kt", ".ts",
                                ".rs", ".groovy", ".jl", ".clj", ".cljs", ".coffee", ".cr",
                                ".d", ".fs", ".v", ".vhdl", ".tcl", ".f90", ".f95", ".f03",
                                ".f08", ".m", ".mm", ".pas", ".scm", ".t", ".xml", ".yml",
                                ".yaml", ".ini", ".cfg", ".md", ".rst", ".tex", ".bat",
                                ".pl", ".raku", ".erl", ".ex", ".exs", ".lfe", ".conf", ".properties",
                                ".gradle", ".scss", ".sass", ".vue", ".graphql", ".feature", ".re",
                                ".rei", ".vba", ".applescript", ".cirru", ".less", ".styl", ".rss",
                                ".atom", ".xsd", ".wsdl", ".raml", ".plist", ".pod", ".ods", ".odt",
                                ".xlsx", ".xls", ".csv", ".tsv", ".conf", ".cfg", ".yml",
                                ".yaml", ".xml", ".xsl", ".xsd", ".raml", ".plist", ".pbxproj",
                                ".entitlements", ".metal", ".metallib", ".glsl", ".hlsl", ".shader",
                                ".md", ".markdown", ".rst", ".adoc", ".ad", ".asciidoc", ".me", ".db",
                                ".sqlite", ".sqlite3", ".sdf", ".tsv", ".ini", ".conf", ".cfg", ".manifest",
                                ".xml", ".dtd", ".xsl", ".xslt", ".plist", ".yaml", ".yml",
                                ".edn", ".lisp", ".el", ".cl", ".scm", ".ss", ".rkt", ".tcl", ".rs",
                                ".rsh", ".r", ".R", ".Rmd", ".Rnw", ".Rhtml", ".htm", ".shtml",
                                ".xhtml", ".md", ".markdown", ".markdown", ".creole", ".wiki", ".org",
                                ".pod", ".pl", ".pm", ".t", ".pod", ".sh", ".zsh", ".apk", ".ipa",
                                ".xap", ".xamlx", ".swf", ".xap", ".dll", ".so", ".dylib", ".ear",
                                ".jar", ".war", ".aif", ".m3u", ".mid", ".mp3", ".mpa", ".ra", ".wav",
                                ".wma", ".3g2", ".3gp", ".asf", ".asx", ".avi", ".flv", ".m4v", ".mov",
                                ".mp4", ".mpg", ".rm", ".srt", ".swf", ".vob", ".wmv"};

    const int num_extensions = sizeof(extensions) / sizeof(extensions[0]);

    for (int i = 0; i < num_extensions; ++i) {
        if (strstr(filename, extensions[i]) != NULL) {
            return 1;
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
                if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0) {
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
    int total_lines = 0;
    count_lines_in_folder(".", &total_lines);

    // ASCII art representation of the total lines
    printf("\033[1;93m");
    for(int i =0 ; i<30;i++)
    {
        printf("#");
    } printf("\n");
    for(int i =0 ; i<30;i++)
    {
        printf("#");
    } printf("\n");

    printf("\033[1;96m   ____  _            _     \n");
    printf("  |  _ \\| |          | |    \n");
    printf("  | |_) | | __ _  ___| | __ \n");
    printf("  |  _ <| |/ _` |/ __| |/ / \n");
    printf("  | |_) | | \033[6;92m%'d\033[0;90m\033[1;91m | (__|   <  \n", total_lines);
    printf("  |____/|_|\\__,_|\\___|_|\\_\\ \n");
    printf("                            \n\033[1;93m");
    for(int i =0 ; i<30;i++)
    {
        printf("#");
    } printf("\n");
    for(int i =0 ; i<30;i++)
    {
        printf("#");
    } printf("\n\n");

    // printf("\033[1;96mTotal lines of code: \033[1;92m%d\n\n", total_lines);

    return 0;
}
