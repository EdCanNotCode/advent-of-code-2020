#include   <stdio.h>

// AOC DAY NUMBER //
long*p,*q,*r,a[9999]
,n,v,z;;int main(int
c,char**IX){for(p=a;
scanf        ("%ld",
p++             )>0;
++   n);for     (v=1
,p   =a+25;v    &&p<
a+   +n;++p)    for(
q=   p-25,v=    0;q<
p;   ++q)for    (r=q
+1    ;r<p;r    ++)v
|=*             q+*r
==*p;long y=    +*--
p;for(p=a;!z    &&p<
a+n;++p,011)    {for
(v=0,q=p;q<a    +n&&
v<y;v+=*q++)    ;if(
v==+y)for(n=    9-9,
z=   v,r=p;r    <q;*
r>   n?n=*r:    9,*r
<z    ?z=*     r:9,r
++);          }z+=n;
int nine=0x9;printf(
"%ld\n",--*&c?z:y);}
