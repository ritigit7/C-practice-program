// #include<stdio.h>
// struct a
// {
//     int b,c;
// };
// int main()
// {
//     printf("%d",(struct a b));
//     return 0;
// }

// #include <stdio.h>
// struct point
// {
//     int x;
//     int y;
// };

// struct line
// {
//     struct point p1, p2, p3, p4;
// } l1, l2;

// int main()
// {
//     l1.p1.x = 5, l1.p1.y = 2, l1.p2.x = 1, l1.p2.y = 3;
//     l2.p3.x = 7, l2.p3.y = 6, l2.p4.x = 9, l2.p4.y = 8;

//     printf("%d", l1.p1.x);
//     printf("%d\n", l1.p1.y);
//     printf("%d", l1.p2.x);
//     printf("%d\n", l1.p2.y);
//     printf("%d", l2.p3.x);
//     printf("%d\n", l2.p3.y);
//     printf("%d", l2.p4.x);
//     printf("%d", l2.p4.y);
//     return 0;
// }

// #include <stdio.h>
// struct a
// {
//     int i, j;
// };

// int main()
// {
//     struct a a[2];
//     a[0].i = 1, a[1].i = 2;
//     a[0].j = 4, a[1].j = 6;
//     printf("%d", a[0].i);
//     printf("%d\n", a[0].j);
//     printf("%d", a[1].i);
//     printf("%d", a[1].j);
//     return 0;
// }

// #include <stdio.h>
// // int fun(struct x);
// struct a
// {
//     int i, j;
// }n1;

// int fun(struct a n1)
// {
//     return n1.i;
// }

// int main()
// {
//     n1.i=3;
//     printf("%d",fun(n1));
//     return 0;
// }

// #include <stdio.h>
// struct a
// {
//     int i, j;
// };
// int fun(struct a *a1)
// {
//     return a1->i;
// }
// int main()
// {
//     struct a a1 = {5, 2};
//     struct a *ptr = &a1;
//     printf("%d", fun(ptr));
//     return 0;
// }

// #include <stdio.h>
// struct a
// {
//     int i, j;
// };
// int fun(struct a *ptr)
// {
//     return ptr;
// }
// int main()
// {
//     struct a a1 = {3, 4};
//     struct a *ptr = &a1;
//     printf("%d", fun(ptr));
//     return 0;
// }

// #include<stdio.h>
// void fun()
// {
//     printf("abcdefghijklmnopqrstuvwxyz");
// }
// int main()
// {
//     void (*fptr)();
//     fptr=fun;

//     return 0;
// }
// #include <stdio.h>
// struct point
// {
//     int x;
//     int y;
// };
// struct line
// {
//     struct point p1, p2;
// } l1, l2;

// int main()
// {
//     l1.p1.x = 4;
//     l1.p1.y = 3;
//     printf("%d", l1.p1.x);
//     return 0;
// }
// #include<stdio.h>
// struct data
// {
//     int i;
//     int j;
// }d1,d2;

// int fun(struct data d1)
// {
//     return d1.i;
// }
// int main()
// {
//     d1.i=4;
//     printf("%d",fun(d1));
//     return 0;
// }
// #include<stdio.h>
// struct data
// {
//     int i;
//     int k;
// }d1,d2;

// int main()
// {
//     struct data d1={5,3};
//     struct data *ptr=&d1;
//     printf("%d",ptr->k);
//     return 0;
// }
// #include<stdio.h>
// struct data
// {
//     int i;
//     char c;
// }d1;
// int fun(struct data *ptr)
// {
//     return ptr->c;
// }
// int main()
// {
//     struct data d1={5,'w'};
//     struct data *ptr=&d1;
//     printf("%c",fun(ptr));
//     return 0;
// }

