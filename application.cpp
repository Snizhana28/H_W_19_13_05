#include "template_class.h"

int main()
{
	base<int, string> b(1, "hello");
	b.show();
	child<int, string, double, char> c(2, "world", 3.14, 'a');
	c.show();
	child2<int, string, double, char, bool, int> c2(3, "!", 2.718, 'b', true, 42);
	c2.show();
	return 0;
}