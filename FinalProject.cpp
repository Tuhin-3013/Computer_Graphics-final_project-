#include<bits/stdc++.h>
#include<graphics.h>
#include<cmath>
using namespace std;
void Simple_name();
void Emoji();
void DDA();
void Flag();
void Moving_emoji();
void house();
void moving_car_Stop();
void first_stop();
void finish();
void condition();
void moving_car();

int main()
{
    int i,c;
    cout << "           Menu..\n";
    cout << "============================\n";
    cout << "  1. Simple Name.\n";
    cout << "  2. Emoji.\n";
    cout << "  3. DDA.\n";
    cout << "  4. Flag.\n";
    cout << "  5. Moving emoji.\n";
    cout << "  6. House.\n";
    cout << "  7. Moving car.\n";
    cout << "  0. Exit.\n";
    cout << "============================\n";
    while(1)
    {

        cout << "Enter your choice:-";
        cin>>c;
        cout << "--------------------\n";
        switch(c)
        {
        case 1:

            Simple_name();
            break;
        case 2:
            Emoji();
            break;
        case 3:
            DDA();
            break;
        case 4:
            Flag();
            break;
        case 5:
            Moving_emoji();
            break;
        case 6:
            house();
            break;
        case 7:
            moving_car();
            break;
        case 0:
            exit(0);
        default:
            cout << "Your choice is wrong..\n";

        }
    }

    return 0;
}
void Simple_name()
{
    initwindow(200,200,"NAME"); //Tuhin name print.
    line(10,10,30,10);
    line(20,10,20,50);
    line(40,10,40,50);
    line(60,10,60,50);
    line(40,50,60,50);
    line(80,10,80,50);
    line(100,10,100,50);
    line(80,30,100,30);
    line(120,10,120,50);
    line(140,10,140,50);
    line(140,10,160,50);
    line(160,10,160,50);


}
void Emoji()
{
    initwindow(600,600,"Emoji");

    setcolor(RED);
    circle(300,200,70);
    setfillstyle(1,GREEN);
    floodfill(315, 215, RED);

    setcolor(WHITE);
    circle(275,170,12);
    setfillstyle(1,BLACK);
    floodfill(276,171,WHITE);

    setcolor(WHITE);
    circle(320,170,12);
    setfillstyle(1,BLACK);
    floodfill(325,171,WHITE);

    setcolor(WHITE);
    line(285, 200, 305, 200);
    line(285,200, 295, 210);
    line(295,210,305,200);
    setfillstyle(1,BLACK);
    floodfill(290,203,WHITE);

    setcolor(RED);
    line(280,230,310,230);
    ellipse(295,230,180,360,15,11);
    setfillstyle(4,BLACK);
    floodfill(296,231,RED);


}
void DDA()
{
    float x1,x2,y1,y2,step;

    initwindow(700,700,"DDA..");
    cout<<("Enter the x1 & y1:");
    cin >>x1>>y1;

    cout<<("Enter the x2 & y2:");
    cin >>x2>>y2;

    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
//cout << dx <<" " << dy << endl;

    if(dx>dy)
    {
        step=dx;
    }
    else
    {
        step = dy;
    }
//cout << "Step :" << step << endl;
    float xin,yin;
    xin=dx/step;
    yin=dy/step;
//cout << xin <<" " << yin << endl;
    int x=x1;
    int y=y1;
    for(int i=0; i<step; i++)
    {
        putpixel(x,y,RED);
        x=x+xin;
        y=y+yin;
       // cout << x <<" " << y << endl;
        delay(200);
    }

}
void Flag()
{
    initwindow(600,600,"Flag..");
    setcolor(WHITE);
    rectangle(200,150,450,250);
    setfillstyle(1,GREEN);
    floodfill(210,170,WHITE);
    rectangle(190,150,200,450);
    setfillstyle(1,12);
    floodfill(195,170,WHITE);
    circle(325,200,35);
    setfillstyle(1,RED);
    floodfill(325,200,WHITE);



}
void Moving_emoji()
{
    initwindow(850,600,"Moving emoji..");

    for(int i=0; i<700; i=i+10)
    {
        line(0,550,850,550);  //Base line
        setcolor(WHITE);
        line(70+i,400,20+i,490);
        line(70+i,400,110+i,490);
        line(20+i,490,110+i,490);//triangle close
        setfillstyle(1,GREEN);
        floodfill(71+i,420,WHITE);
        line(10+i,490,120+i,490);
        line(10+i,490,17+i,530);
        line(120+i,490,111+i,530);
        line(111+i,530,17+i,530);
        setfillstyle(3,YELLOW);
        floodfill(71+i,500,WHITE);

        delay(50);

        cleardevice();
    }
    //last triangle
    line(0,550,850,550);  //Base line
    setcolor(WHITE);
    line(770,400,720,490);
    line(770,400,810,490);
    line(720,490,810,490);//triangle close
    setfillstyle(1,GREEN);
    floodfill(771,420,WHITE);

    line(710,490,820,490);
    line(710,490,717,530);
    line(820,490,811,530);
    line(811,530,717,530);
    setfillstyle(3,YELLOW);
    floodfill(771,500,WHITE);

}
void house()
{

    initwindow(800,600,"HOUSE");

    setcolor(WHITE);

    circle(150,150,50);//sun
    setfillstyle(1,RED);
    floodfill(125,124,WHITE);

    //boarder
    line(50,50,750,50);
    line(50,50,50,550);
    line(750,50,750,550);
    line(50,550,750,550);


    //house
    line(250,200,450,200);//upper line
    line(250,200,280,275);
    line(280,275,500,275);
    line(500,275,450,200);
    setfillstyle(1,YELLOW);
    floodfill(255,205,WHITE);

    line(283,275,283,400);//middle line
    line(500,275,500,400);
    line(283,400,500,400);
    setfillstyle(4,GREEN);
    floodfill(288,305,WHITE);

    line(278,410,505,410);//base line
    line(283,400,278,410);
    line(500,400,505,410);
    setfillstyle(1,RED);
    floodfill(285,405,WHITE);

    line(250,200,180,285);//Inside line
    line(189,275,189,395);
    line(189,395,283,400);
    setfillstyle(3,GREEN);
    floodfill(192,277,WHITE);
    line(189,395,185,405);
    line(185,405,278,410);
    setfillstyle(1,RED);
    floodfill(277,409,WHITE);

    rectangle(220,315,250,355);
    setfillstyle(4,BLACK);
    floodfill(223,325,WHITE);


    line(353,315,353,400);//door
    line(353,315,420,315);
    line(420,315,420,400);
    setfillstyle(4,BLACK);
    floodfill(355,316,WHITE);
    line(353,315,370,330);//door left
    line(370,330,370,400);
    setfillstyle(4,9);
    floodfill(354,333,WHITE);
    line(420,315,403,330);//door right
    line(403,330,403,400);
    setfillstyle(4,9);
    floodfill(405,335,WHITE);

    line(370,410,380,520);//road
    line(410,410,430,520);
    line(50,520,380,520);
    line(430,520,705,520);
    line(705,50,705,520);
    setfillstyle(1,RED);
    floodfill(55,525,WHITE);

    line(50,335,189,335);//house left corner
    line(50,305,100,275);
    line(100,275,189,320);
    setfillstyle(1,11);
    floodfill(55,315,WHITE);
    line(500,335,590,335);//house right corner
    line(500,305,545,275);
    line(545,275,590,315);
    setfillstyle(1,GREEN);
    floodfill(570,310,WHITE);

    rectangle(590,275,615,355);//tree
    setfillstyle(1,RED);
    floodfill(592,277,WHITE);
    line(602,225,590,250);//tree body
    line(602,225,615,250);
    line(590,250,595,250);
    line(595,250,580,275);
    line(615,250,610,250);
    line(610,250,625,275);
    line(580,275,625,275);
    setfillstyle(1,GREEN);
    floodfill(596,270,WHITE);

    line(615,335,705,335);//tree right
    line(615,315,660,275);
    line(660,275,705,310);
    setfillstyle(1,11);
    floodfill(625,315,WHITE);


    setfillstyle(1,GREEN);
    floodfill(60,450,WHITE);
    setfillstyle(1,WHITE);
    floodfill(60,100,WHITE);


}
void moving_car()
{

    int i, j = 0, gd = DETECT, gm;
    //initgraph(&gd, &gm, "");

    initwindow(950,600,"Moving car.");

    for (i = 0; i <= 300; i = i + 10)
    {
        setcolor(WHITE);
        line(0,400,950,400);
        line(0,400,0,410);
        line(950,400,950,410);
        line(0,410,950,410);
        setfillstyle(1,12);
        floodfill(10,405,WHITE);

        outtextxy(5,250,"START..");

        // body
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);
        setfillstyle(1,GREEN);
        floodfill(76+i,299,WHITE);

        // left wheel
        circle(65 + i, 330, 15);
        setfillstyle(5,BROWN);
        floodfill(65+i,329,WHITE);
        circle(65 + i, 330, 2);


        circle(145 + i, 330, 15);// right wheel
        setfillstyle(5,BROWN);
        floodfill(146+i,329,WHITE);
        circle(145 + i, 330, 2);



        line(0 + i, 330, 50 + i, 330);//  left of left wheel
        line(80 + i, 330, 130 + i, 330);//  middle of both wheel
        line(210 + i, 330, 160 + i, 330);//  right of right wheel
        setfillstyle(1,YELLOW);
        floodfill(81+i,315,WHITE);

        delay(100);
        cleardevice();
    }

    first_stop();
    delay(500);
    condition();


}
void condition()
{


    rectangle(515,230,521,300);//stop rectangle
    setfillstyle(1,GREEN);
    floodfill(516,232,WHITE);

    circle(519,210,20);//stop circle
    setfillstyle(1,RED);
    floodfill(520,215,WHITE);

    outtextxy(505,203,"stop");
    delay(300);
    outtextxy(530,260,"Are you finish the task.");
    cout << "Are you finish the task."<<endl;

        string c;
        cin >> c;
        if(c == "yes")
        {
            outtextxy(460,260,"YES...");
            cout << "Yes.\n";

            delay(800);
            cleardevice();
            first_stop();
            cout << "Ok you will go\n";
            outtextxy(530,260,"OK YOU WILL GO");
            delay(2000);
            cleardevice();
            first_stop();
            outtextxy(460,260,"let's go...");
            delay(2000);
            finish();

            moving_car_Stop();

        }
        else if(c=="no")
        {
            cout  << "No.\n";
            outtextxy(460,260,"NO...");
            delay(500);
            cleardevice();

        }
        else
        {
            cout << "Your request not right.";

        }

}
void first_stop()
{
    setcolor(WHITE);
    line(0,400,950,400);
    line(0,400,0,410);
    line(950,400,950,410);
    line(0,410,950,410);
    setfillstyle(1,12);
    floodfill(10,405,WHITE);
    // body
    line(300, 300, 510, 300);
    line(350, 300, 375, 270);
    line(375, 270, 450, 270);
    line(450, 270, 465, 300);
    line(300, 300, 300, 330);
    line(510, 300, 510, 330);
    setfillstyle(1,GREEN);
    floodfill(376,299,WHITE);

    // left wheel
    circle(365, 330, 15);
    setfillstyle(5,BROWN);
    floodfill(365,329,WHITE);
    circle(365, 330, 2);


    circle(445, 330, 15); // right wheel
    setfillstyle(5,BROWN);
    floodfill(446,329,WHITE);
    circle(445, 330, 2);



    line(300, 330, 350, 330);  //  left of left wheel
    line(380, 330, 430, 330);  //  middle of both wheel
    line(510, 330, 460, 330);  //  right of right wheel
    setfillstyle(1,YELLOW);
    floodfill(381,315,WHITE);


}
void finish()
{
    for ( int i = 510; i <= 700; i = i + 10)
    {

        setcolor(WHITE);
        line(0,400,950,400);
        line(0,400,0,410);
        line(950,400,950,410);
        line(0,410,950,410);
        setfillstyle(1,12);
        floodfill(10,405,WHITE);
        // body
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);
        setfillstyle(1,GREEN);
        floodfill(76+i,299,WHITE);

        // left wheel
        circle(65 + i, 330, 15);
        setfillstyle(5,BROWN);
        floodfill(65+i,329,WHITE);
        circle(65 + i, 330, 2);


        circle(145 + i, 330, 15);// right wheel
        setfillstyle(5,BROWN);
        floodfill(146+i,329,WHITE);
        circle(145 + i, 330, 2);



        line(0 + i, 330, 50 + i, 330);//  left of left wheel
        line(80 + i, 330, 130 + i, 330);//  middle of both wheel
        line(210 + i, 330, 160 + i, 330);//  right of right wheel
        setfillstyle(1,YELLOW);
        floodfill(81+i,315,WHITE);
        delay(100);
        cleardevice();
    }

}
void moving_car_Stop()
{
    setcolor(WHITE);
    line(0,400,950,400);
    line(0,400,0,410);
    line(950,400,950,410);
    line(0,410,950,410);
    setfillstyle(1,12);
    floodfill(10,405,WHITE);

    // body
    line(700, 300, 910, 300);
    line(750, 300, 775, 270);
    line(775, 270, 850, 270);
    line(850, 270, 865, 300);
    line(700, 300, 700, 330);
    line(910, 300, 910, 330);
    setfillstyle(1,GREEN);
    floodfill(776,299,WHITE);

    // left wheel
    circle(765, 330, 15);
    setfillstyle(5,BROWN);
    floodfill(765,329,WHITE);
    circle(765, 330, 2);

// right wheel
    circle(845, 330, 15);
    setfillstyle(5,BROWN);
    floodfill(846,329,WHITE);
    circle(845, 330, 2);



    line(700, 330, 750, 330);  //  left of left wheel
    line(780, 330, 830, 330);  //  middle of both wheel
    line(910, 330, 860, 330);  //  right of right wheel
    setfillstyle(1,YELLOW);
    floodfill(781,315,WHITE);

    outtextxy(890,250,"FINISH..");

}
