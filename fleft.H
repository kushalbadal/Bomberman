
#include<graphics.h>
static int xr=0;
void fleft(int BH,int BW)
{
  if(xr==0)
 {
 setcolor(8);
 //topi
 //setfillstyle(1,7);
 //ellipse(BW+2,BH-20,0,180,13,4);
 //rectangle(BW-13,BH-21,BW+15,BH-19);
// floodfill(BW+3,BH-22,8);
 //head
 setfillstyle(1,15);
 line(BW+2,BH-9,BW-9,BH-11);
 line(BW+2,BH-9,BW+14,BH-11);
 line(BW+14,BH-11,BW+14,BH-19);//str-line
 line(BW-9,BH-11,BW-9,BH-19);//str-line
 rectangle(BW-13,BH-21,BW+15,BH-19);//bw+15
 floodfill(BW+13,BH-17,8);
 setfillstyle(1,14);
 rectangle(BW-13,BH-21,BW+15,BH-19);
 floodfill(BW-10,BH-20,8);

 //eye
 //setcolor(14);
 circle(BW-7,BH-16,2);
 circle(BW-7,BH-16,0);

 setfillstyle(1,14);
 rectangle(BW-8,BH-9,BW+13,BH+6);//body
 floodfill(BW-7,BH-7,8);

 line(BW,BH-9,BW-8,BH-1);//tshirt-line
 //hand
 rectangle(BW+3,BH-6,BW+8,BH+3);//hand
 //line(BW+5,BH-9,BW+13,BH-1);//tshirt-line
// rectangle(BW-3,BH-6,BW+2,BH+3);//hand

 setfillstyle(1,6);
 rectangle(BW-6,BH+7,BW-1,BH+13);//lleg
 floodfill(BW-5,BH+8,8);

 setfillstyle(1,6);
 rectangle(BW+6,BH+7,BW+11,BH+13);//rleg
 floodfill(BW+7,BH+8,8);

 setfillstyle(1,8);
 ellipse(BW-3,BH+13,0,360,5,1);//lshoe
 floodfill(BW-3,BH+13,8);

 setfillstyle(1,8);
 ellipse(BW+9,BH+13,0,360,5,1);//rshoe
 floodfill(BW+9,BH+13,8);
 
}

else
 {

    setcolor(7);
 //topi
 //setfillstyle(1,7);
 //ellipse(BW+2,BH-20,0,180,13,4);
 //rectangle(BW-13,BH-21,BW+15,BH-19);
 //floodfill(BW+3,BH-22,7);
 //head
 setcolor(8);
 setfillstyle(1,15);
 line(BW+2,BH-9,BW-9,BH-11);
 line(BW+2,BH-9,BW+14,BH-11);
 line(BW+14,BH-11,BW+14,BH-19);//str-line
 line(BW-9,BH-11,BW-9,BH-19);//str-line
 rectangle(BW-13,BH-21,BW+15,BH-19);//bw+15
 floodfill(BW+13,BH-17,8);
 setfillstyle(1,14);
 rectangle(BW-13,BH-21,BW+15,BH-19);
 floodfill(BW-12,BH-20,8);

 //eye
 circle(BW-7,BH-16,2);
 circle(BW-7,BH-16,0);

 //body
 setcolor(8);
 setfillstyle(1,14);
 rectangle(BW-8,BH-9,BW+13,BH+6);//body
 floodfill(BW-7,BH-7,8);
 line(BW,BH-9,BW-8,BH-1);//tshirt-line
 //hand
 rectangle(BW+3,BH-6,BW+8,BH+3);//hand
 //leftleg
 setfillstyle(1,6);
 line(BW-9,BH+13,BW-4,BH+13);//bottomline
 line(BW-6,BH+7,BW-9,BH+13);//leftline
 line(BW-4,BH+13,BW-1,BH+7);//rightline
 //line(BW-6,BH+7,BW-1,BH+7);//topline
 floodfill(BW-5,BH+8,8);

 //rightleg
 setfillstyle(1,6);
 //line(BW+6,BH+7,BH+11,BH+7);//top
 line(BW+6,BH+7,BW+9,BH+13);//leftline
 line(BW+9,BH+13,BW+14,BH+13);//bottom
 line(BW+14,BH+13,BW+11,BH+7);//rightline
 floodfill(BW+8,BH+9,8);

 //Shoes
 setfillstyle(1,8);
 ellipse(BW-7,BH+13,0,360,5,1);//lshoe
 floodfill(BW-6,BH+13,8);

 setfillstyle(1,8);
 ellipse(BW+11,BH+13,0,360,5,1);//rshoe
 floodfill(BW+9,BH+13,8);
}
xr++;
if(xr>=2)
xr=0;
}