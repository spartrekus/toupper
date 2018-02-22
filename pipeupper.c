
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int begin = 1;
        int c ; int d ; 
        c = getchar();
        while( c != EOF )
        {
           if (( c >= 'a') && ( c <= 'z'))
              d = c - 32;
           else
              d = c;
           putchar( d );
           begin = 0;
           if ( c == '\n' ) begin = 1;
           c = getchar();
        }
	return 0;
    }


