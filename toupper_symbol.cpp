// Переведите символ в верхний регистр.

#include <iostream>
#include <cctype>

int	 main(void)
{
 char c;
 std:: cin >> c;
	std::cout << char(toupper(c));
	return (0);
}
