void setup(){///要互動，要有2個函式:setup()設定
  size(300,300);
  textSize(40);
}
void draw(){
  background(#DFEA45);
  fill(#456FEA);///字的填充顏色
  if(choice==0)rect(50,50,150,2);
  if(choice==1)rect(50,100,150,2);
  if(choice==2)rect(50,150,150,2);
  text("choice 1",50,50);
  text("choice 2",50,100);
  text("choice 3",50,150);
}
void mousePressed(){  
  choice = int (random(3));//choice=(choice+1)%3 
 }
