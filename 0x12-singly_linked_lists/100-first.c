#include <stdio.h>
/**
 * myStartupFun - Apply the constructor attributes to myStartupFun()
 * so as it is excecuted before main()
 */
void myStartupFun(void)__attribute__((constructor));
/**
 * myStartupFun - implement myStarupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
