#ifndef CALC_HEADER
#define CALC_HEADER

/**
 * struct op -struct
 * @op: char
 * @f: int
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
