#ifndef CALC_HEADER
#define CALC_HEADER

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
