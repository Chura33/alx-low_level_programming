#include <stdio.h>
#include <unistd.h>

int main()
{
	open("chura.txt", O_CREAT, O_RDONLY);
}
