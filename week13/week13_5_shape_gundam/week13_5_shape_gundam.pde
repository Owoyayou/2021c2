//drag all files into the sketch
//直接把鋼彈的檔案拉進來，會自動放進檔案總管
PShape gundam;//等下要用的鋼彈
void setup(){//P語言其實是java的變形(方言)
 size(500,500,P3D);//有3D功能視窗
 gundam=loadShape("Gundam.obj");
}//讀入模型，很像今天的loadImage()
void draw(){//每秒60次畫圖
  background(#F8FFAF);
  //但是這個模型太小了，等下要把它放大
  translate(250,0,0);//往右移一半
 scale(20,20,20);//放大2倍看起來倒過來
 //因為建3D模型時，Y軸向上
 shape(gundam);//秀出模型，很像今天的image
}
