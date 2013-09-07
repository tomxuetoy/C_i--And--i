#include <stdio.h>
 
main()
{
    int i, j;
    for(i=0;i<10;i++)
        printf("i=%d\n", i);
 
    printf("\n------------------\n");
 
    for(i=0;i<10;++i)
        printf("i=%d\n", i);
}
/* 
 *
$ ./a.exe
i=0
i=1
i=2
i=3
i=4
i=5
i=6
i=7
i=8
i=9
 
------------------
i=0
i=1
i=2
i=3
i=4
i=5
i=6
i=7
i=8
i=9
 * */
