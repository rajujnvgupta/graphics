#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main(){
	int gd = DETECT, gm;
	int row, rol, x = 50, y = 50, flag = 0;
	initgraph(&gd, &gm, "C:\\TURBOC\\BGI");
	printf("\t#################################################\n");
	for(row = 0; row < 8; row++){
		for(col = 1; col<=8; col++){
			if(flag == 0){
				setcolor(YELOW);
				setfillstyle(SOLID_FILL, BLACK);
				rectangle(x, y, x+50, y+50);
				floodfill(x+1, y+1, YELLOW);
				flag = 1;

			}else{
				setcolor(YELLOW);
				setfillstyle(SOLID_FILL, WHITE);
				rectangle(x, y, x+50, y+50);
				floodfill(x+1, y+1, YELLOW);
				flag = 0;
			}
			x = x+50;
		}
		if(flag == 0){
			flag = 1;
		}else{
			flag = 0;
		}
		delay(100);
		x = 50; 
		y = y+50;
	}
	getch();
closegraph();
return 0;
}
	
