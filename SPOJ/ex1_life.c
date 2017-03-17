 #include <stdio.h>

  int main(void) 
  {
   int n = 0;
   while (1) 
   {scanf("%d",&n);
	if(n==42)
		break;
    printf("%d\n", n);
   }
    return 0;
   }