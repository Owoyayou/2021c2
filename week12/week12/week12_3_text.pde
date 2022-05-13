//ctrl-N可開新程式，ctrl-R可存檔
void setup(){///要互動，要有2個函式:setup()設定
  size(300,300);
  textSize(40);
}
void draw(){
  background(#DFEA45);
  fill(#456FEA);///字的填充顏色
  text("Hello",mouseX,mouseY);
}///我的mouse移動時，mouseX座標 mouseY座標 用來放數字
