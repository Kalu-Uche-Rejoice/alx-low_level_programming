#ifndef CALC
#define CALC
/**
 * struct op - structure of operator
 * @op: operator
 * @f: function
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif /*ends the definition of the header acts as a file guard*/
