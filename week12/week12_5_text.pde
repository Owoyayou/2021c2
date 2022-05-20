
function setup() {
    initializeFields();
    // /要互動，要有2個函式:setup()設定
    createCanvas(400, 300);
    textSize(40);
}

function draw() {
    background(color(0xDF, 0xEA, 0x45));
    // /字的填充顏色
    fill(color(0x45, 0x6F, 0xEA));
    if (choice == 0)
        rect(50, 50, 150, 2);
    if (choice == 1)
        rect(50, 100, 150, 2);
    if (choice == 2)
        rect(50, 150, 150, 2);
    if (choice == 3)
        rect(50, 200, 150, 2);
    if (choice == 4)
        rect(50, 250, 150, 2);
    text("中餐吃泡麵", 50, 50);
    text("中餐UberEat", 50, 100);
    text("中餐FoodPanda", 50, 150);
    text("中餐吃牛排", 50, 200);
    text("中餐吃大餐", 50, 250);
}

function mousePressed() {
    // choice=(choice+1)%3
    choice = int(random(5));
}

function initializeFields() {
    choice = -1;
}
