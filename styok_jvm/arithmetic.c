#include <inttypes.h>
#include <stdio.h>
#include "maybe_int64.c"
typedef int64_t i64;
int64_t i64_add(int64_t a, int64_t b) { return a + b; }
int64_t i64_sub(int64_t a, int64_t b) { return a - b; }
int64_t i64_mul(int64_t a, int64_t b) { return a * b; }
struct maybe_i64 i64_div(int64_t a, int64_t b) {
	if(b==0) {
		printf("Division by zero.\n");
		return none_i64;
	}
	return some_i64(a/b);
}
int64_t i64_cmp(int64_t a, int64_t b) { if (a > b) return 1; else if (a < b) return -1; return 0; }

int64_t i64_neg(int64_t a) { return -a; }
