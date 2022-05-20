//step01-2 week13_2_ellipse改用圓圈圈
void setup(){
 size(400,300);
 textSize(40);
}
int choice = -1;
void draw(){
  background(#DFEA45);
  fill(#456FEA);///字的填充顏色
  if(choice==0)ellipse(25,25,40,40);
  if(choice==1)ellipse(25,75,40,402);
  if(choice==2)ellipse(25,125,40,40);
  text("choice 1",50,50);
  text("choice 2",50,100);
  text("choice 3",50,150);
}
void mousePressed(){  
  choice = int (random(3));//choice=(choice+1)%3 
 }
