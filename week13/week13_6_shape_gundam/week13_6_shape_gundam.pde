//drag all files into the sketch
//直接把鋼彈的檔案拉進來，會自動放進檔案總管
PShape gundam;//等下要用的鋼彈
void setup(){//P語言其實是java的變形(方言)
 size(500,500,P3D);//有3D功能視窗
 gundam=loadShape("Gundam.obj");
}
void draw(){
  background(#F8FFAF);
 translate(250,400,0);
 scale(10,-10,10);//x,y,z
 rotateY(radians(frameCount));
 shape(gundam);
}
