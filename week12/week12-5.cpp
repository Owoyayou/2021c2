

function setup() {
    initializeFields();
    // /�n���ʡA�n��2�Ө禡:setup()�]�w
    createCanvas(300, 300);
    textSize(40);
}

function draw() {
    background(color(0xDF, 0xEA, 0x45));
    // /�r����R�C��
    fill(color(0x45, 0x6F, 0xEA));
    if (choice == 0)
        rect(50, 50, 150, 2);
    if (choice == 1)
        rect(50, 100, 150, 2);
    if (choice == 2)
        rect(50, 150, 150, 2);
    text("choice 1", 50, 50);
    text("choice 2", 50, 100);
    text("choice 3", 50, 150);
}

function mousePressed() {
    // choice=(choice+1)%3
    choice = int(random(3));
}

function initializeFields() {
}
