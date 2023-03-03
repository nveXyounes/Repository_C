#include <stdio.h>

int main() {
  FILE *file;
  char buffer[100];

  file = fopen("example.txt", "r");

  // Read the first line of the file and print it
  fgets(buffer, 100, file);
  printf("First line: %s", buffer);

  // Move the file pointer back to the beginning of the file
  rewind(file);

  // Read the first line of the file again and print it
  fgets(buffer, 100, file);
  printf("First line (again): %s", buffer);

  fclose(file);

  return 0;
}
