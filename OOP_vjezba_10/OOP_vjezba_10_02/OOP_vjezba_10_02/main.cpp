#include "stack.h"

int main()
{

stack<int> test;
test.push(3);
test.push(7);
test.pop();
test.push(11);
test.push(12);
test.pop();
test.push(4);
test.pop();

test.print();

return 0;
}