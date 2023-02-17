#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <unistd.h>

#define NAME_MAX_SIZE 10

/* CSV Types: */
#define csv_Invalid (0)
#define csv_False  (1 << 0)
#define csv_True   (1 << 1)
#define csv_NULL   (1 << 2)
#define csv_Number (1 << 3)
#define csv_String (1 << 4)
#define csv_Array  (1 << 5)
#define csv_Object (1 << 6)
#define csv_Raw    (1 << 7) /* raw cell */

struct csv_Header {
  char name[NAME_MAX_SIZE];
  struct csv_Header *next;
};

struct csv_Cell {
  int type;  
  int valueint;
  double valuedouble;
  char *valuestring;
};

struct csv_Row {
  struct csv_Cell *cell;
};

struct csv_Column {
  struct csv_Row *row;
  struct csv_Column *next;
};

struct csv_Table {
  struct csv_Header header;
  struct csv_Column table;
};

struct csv_Table *csv_parser(FILE *fp, char sep) {
  if(fp == NULL) {
    exit(-1);
  }

  char buf[512] = {0};
  while(!feof(fp)) {
    memset(buf, 0, sizeof(buf));
    size_t len = fread(buf, sizeof(char), sizeof(buf), fp);
    

  }
}

int main(int argc, char *argv[])
{
  int c;
  while((c = getopt(argc, argv, "h:v:s:")) != -1) {
    switch(c) {
    case 'h':
      printf("%c", c);
      break;
    case 'v':
      printf("%c", c);
      break;
    case 's':
      printf("%c", c);
      break;
    }
  }
  return EXIT_SUCCESS;
}
