#include stdio.h>

#includes conio.h>

#include graphics.h>

void main()

t

int x,y.x1,x2,y1,y2.k.dx.dy.s.xi.yi; int gdriver DETECT.gmode ;

initgraph(&gdriver,&gmode, "C:\\te\\bgi:");

printf("enter first point");

scanf("%d%d",&x,&y1);

printf("enter second point"); scanf("%d%d",&x,&y2);

x =x1

y =y1

putpixel(x,y,7);

dx =x2-xI

dy =y2-y l

iffabs(dx)>abs(dy))

s - abs(dx)

else

s = abs(dy)

xi = dx / s * i

yi + - d * y / s

x - x * 1

yyl:

putpixel d(x, y, 7)

for(k=0;k<s;k++)

x = x + xi

y = y + yi

putpixel (x, y, 7)

getch():

closegraph();