#include <iostream>

#define MAX_INPUT 401
#define IS_OPERATOR(c) (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
#define IS_OPERAND(c) (c >= 'a' && c <= 'z')

using namespace std;

void evaluate(char* expr) {
	char* ptr_chr = expr;
	int expectedOperators = 0;
	char operator_stack[MAX_INPUT];
	int operator_stack_i = 0, operand_queue_i = 0;
	do {
		if (IS_OPERAND(*ptr_chr)) {
			cout << *ptr_chr;
		}else if (IS_OPERATOR(*ptr_chr)) {
			operator_stack[operator_stack_i] = *ptr_chr;
			operator_stack_i++;
		}else if (*ptr_chr == ')') {
			cout << operator_stack[operator_stack_i-1];
			operator_stack_i--;
		}
	} while (*ptr_chr++);
	cout << endl;
}

int main() {
	int T;
	char expr[MAX_INPUT];

	cin >> T;

	do {
		cin >> expr;
		evaluate(expr);
	} while (--T);
	return EXIT_SUCCESS;
}
