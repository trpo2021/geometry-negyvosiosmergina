#ifndef H_SCAN
#define H_SCAN
#include <stddef.h>
typedef struct {
	char name[7];
	int x, y;
	double r;
} figure;

void skip_char(size_t * i, char* line, size_t symb);

size_t parse_coord(size_t * i, int* coord, char* line);

size_t scan_string(char* line, size_t number, figure* circle); 

size_t scan(char* str, figure* circle);
#endif
