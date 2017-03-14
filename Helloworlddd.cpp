 #include"TXLib.h"

    //{Прототипы
void  Normcountry();//Прототип функции Normcountry
void  Movecar();//Прототип функции Movecar
void  MoveBird();//Прототип функции MoveBird
void  Portal();//Прототип функции Portal
void  Unrealcountry();//Прототип функции Unrealcountry
void  DrawPyatno(int sizeX, int sizeY);//Прототип функции Zalivka
void  DrawCar (int x, int y, double sizeX, double sizeY, double wheel, double meowWheel, double windowX, double windowY, int bumper, int cvet1, int cvet2, int cvet3 ); //Прототип функции DrawCar
void  DrawRoad (int x, int y, int sizeX, int sizeY, int phisicsX, int road, int phisicsY, int roadY, int cvet1, int cvet2, int cvet3);//Прототип функции DrawRoad
void  Drawriver (int X, int Y, double sizeZ, double sizeY, int waveX, int waveY, int polostX, int polostY, int cvet1, int cvet2, int cvet3);// Прототип функции Drawriver
void  DrawCesar (int x, int y, double sizeX, double sizeY, int penX, int penY, int cronaX, int cronaY, int cvet1, int cvet2, int cvet3, int cvet4, int cvet5, int cvet6); //Прототип функции DrawCesar
void  DrawNY (int x, int y, double sizeX, double sizeY, int zelenX, int zelenY, int cronaX, int cronaY, int cvet1, int cvet2, int cvet3);//Прототип функции DrawNY
void  DrawText (int x, int y ,double sizeX, double sizeY, double cloudX, double cloudY, double thoughtsX, double thoughtsY) ;//Прототип функции DrawText
void  DrawBird (int x, int y, int sizeX, int sizeY, int qluve, double glass, double stomach, double pupil, int cvet1, int cvet2, int cvet3 );//Прототип функции DrawBird
void  DrawSun (int x, int y, int sizeX, int sizeY, double rays, double joker, double crazy, double fat, int cvet1, int cvet2, int cvet3);//Прототип функции DrawSun
void  Zalivka(int cvet1, int cvet2, int cvet3) ;//Прототип функции Zalivka



    //}

int  main()


    {
    txCreateWindow (1500, 900);

    Movecar();//Вызов функции Movecar

    MoveBird();//Вызов функции MoveBird

    Normcountry();//Вызов функции Normcountry

    Portal();//Вызов функции Portal

    Unrealcountry();//Вызов функции Unrealcountry

    MoveBird();//Вызов функции MoveBird

    DrawPyatno (10, 10);//Вызов функции Pyatno

    DrawText (1130, 30, 13.0/10, 18.0/10, 1.0/1, 1.0/1, 1.0/1, 1.0/1);//Вызов функции DrawText

    DrawBird (1100, 200, 2, 2, 58, 3.0/10, 3.0/10, 9.0/10, 255, 174, 201); //Вызов функции DrawBird1

    DrawSun (97, 92, 1, 1, 130.0/10, 190.0/10, 1.0/1, 1.0/1, 0, 255, 255); //Вызов функции DrawSun

    DrawRoad (663, 630, 1, 1, 58, 58, 60, 60, 128, 0, 128); //Вызов функции DrawRoad

    DrawRoad (663, 439, 1, 1, 58, 58, 60, 60, 128, 0, 128); //Вызов функции DrawRoad

    Drawriver (743, 0, 7.0/10, 10.0/10, 50, 10, 50, 10, 0, 255, 0); //Вызов функции Drawriver

    Drawriver (598, 0, 8.0/10, 10.0/10, 50, 10, 50, 10, 0, 255, 0); //Вызов функции Drawriver

    DrawText (153, 390, 1.0/1, 11.0/10, 10.0/10, 17.0/10, 10.0/10, 9.0/10); //Вызов функции DrawText

    DrawBird (218, 218, 2, 2, 58, 4.0/10, 6.0/10, 9.0/10, 0, 255, 128); //Вызов функции DrawBird

    DrawSun (1403, 92, 1, 1, 300.0/10, 10.0/10, 2.0/1, 13.0/10, 0, 255, 255); //Вызов функции DrawSun

    DrawBird (120, 552, 2, 2, 58, 4.0/10, 4.0/10, 9.0/10, 3, 252, 22); //Вызов Функции DrawBird1

    DrawCesar (1173, 570, 11.0/10, 13.0/10, 40, 40, 40, 40, 255, 21, 28, 101, 6, 33); //Вызов функции DrawCesar

    DrawNY (943, -50, 10.0/10, 16.0/10, -30, 10, -30, 10, 255, 0, 255); //Вызов функции  DrawNY

    DrawBird (218, 218, 2, 2, 58, 4.0/10, 6.0/10, 9.0/10, 255, 0, 128); //Вызов функции DrawBird

    DrawBird (700, 754, 1, 1, 58, 6.0/10, 3.0/10, 9.0/10, 3, 252, 22); //Вызов функции DrawBird

    DrawCesar (1346, 570, 13.0/10, 13.0/10, 20, 20, 20, 20, 255, 21, 28, 101, 6, 33); //Вызов функции DrawCesar

    DrawBird (1350, 750, 1, 1, 58, 6.0/10, 2.0/10, 9.0/10, 3, 252, 22); //Вызов функции DrawBird

    DrawNY (100, 650, 14.0/10, 14.0/10, 80, 20, 0, 20, 255, 0, 255); //Вызов функции DrawNY

    DrawCesar (1000, 570, 13.0/10, 11.0/10, 30, 30, 30, 30, 255, 21, 28, 101, 6, 33); //Вызов функции DrawCesar

    DrawCesar (827, 570, 13.0/10, 13.0/10, 50, 50, 50, 50, 255, 21, 28, 101, 6, 33); //Вызов функции DrawCesar
    }

void Normcountry()

    {

    int t = 0;
    while (t <= 900)

        {
        Zalivka (15, 201, 10);//Вызов функции Zalivka
        DrawRoad (663, 630, 1, 1, 58, 58, 60, 60, 128, 128, 128); //Вызов функции DrawRoad
        DrawRoad (663, 439, 1, 1, 58, 58, 60, 60, 128, 128, 128); //Вызов функции DrawRoad
        DrawBird (218 + t*3, 218, 2, 2, 58, 4.0/10, 6.0/10, 9.0/10, 255, 234, 3); //Вызов функции DrawBird
        DrawBird (100 + t*2, 585 + 100 % 30, 2, 2, 58 + t/5 % 2 * 5 , 6.0/10 + t/8 % 4 *0.01, 3.0/10, 9.0/10, 255, 234, 3); //Вызов функции DrawBird
        DrawCesar (1346, 570, 13.0/10, 13.0/10, 20, 20, 20, 20, 35, 182, 79, 101, 6, 33); //Вызов функции DrawCesar
        DrawCesar (1173, 570, 11.0/10, 13.0/10, 40, 40, 40, 40, 35, 182, 79, 101, 6, 33); //Вызов функции DrawCesar
        DrawCesar (1000, 570, 13.0/10, 11.0/10, 30, 30, 30, 30, 35, 182, 79, 101, 6, 33); //Вызов функции DrawCesar
        DrawCesar (827, 570, 13.0/10, 13.0/10, 50, 50, 50, 50, 35, 182, 79, 101, 6, 33); //Вызов функции DrawCesar
        Drawriver (743, 0, 7.0/10, 10.0/10, 50, 10, 50, 10, 0, 162, 232); //Вызов функции Drawriver
        Drawriver (598, 0, 8.0/10, 10.0/10, 50, 10, 50, 10, 0, 162, 232); //Вызов функции Drawriver
        DrawCar (985 + t*5, 438 + t*0.3, 11.0/10, 11.0/10, 5.0/10, t/5 % 2 * 10, 7.0/10, 7.0/10, 98, 255, 255, 255); //Вызов функции DrawCar
        DrawCar (1344 + t*3, 552 - t*0.2, 14.0/10, 14.0/10, 8.0/10, t/5 % 2 * 10, 11.0/10, 11.0/10, 0, 255, 255, 255); //Вызов функции DrawCar
        DrawSun (1403, 92, 1, 1, 300.0/10, 10.0/10, 2.0/1, 13.0/10, 255, 255, 0); //Вызов функции DrawSun
        DrawSun (97, 92, 1, 1, 130.0/10, 190.0/10, 1.0/1, 1.0/1, 255, 255, 0); //Вызов функции DrawSun
        DrawNY (943, -50, 10.0/10, 16.0/10, -30, 10, -30, 10, 35, 182, 79); //Вызов функции  DrawNY
        // DrawText (153 + t*2, 390, 1.0/1, 11.0/10, 10.0/10, 17.0/10, 10.0/10, 9.0/10); //Вызов функции DrawText
        DrawBird (100 + t*2, 585 + 100 % 30, 2, 2, 58 + t/5 % 2 * 5 , 6.0/10, 3.0/10, 9.0/10, 255, 234, 3); //Вызов функции DrawBird
        DrawBird (1350 - t*2, 750, 1, 1, 58, 6.0/10, 2.0/10, 9.0/10, 255, 234, 3); //Вызов функции DrawBird
        t++;
        txSleep (10);
        }

    }
void MoveBird()

    {

    int x = 218, y = 218, vx = 1.5, vy = 2.5;
    int xCesar = 1173, yCesar = 570, vxCesar = 3, vyCesar = 2;
    int xSun = 1403, ySun = 92, vxSun = 4, vySun = 2;
    int xCrazy = 97, yCrazy = 92, vxCrazy = 5, vyCrazy = 3;
    int dt = 2; dt = 2, dt = 2, dt = 2;


    while ( !GetAsyncKeyState (VK_RIGHT))

       {
       txSetFillColor (RGB (15, 201, 10));//Определение функции Zalivka
       txClear();
       DrawBird (x, y, 2, 2, 58, 4.0/10, 6.0/10, 9.0/10, 255, 174, 201); //Вызов функции DrawBird
       DrawSun (xSun, ySun, 1, 1, 130.0/10, 190.0/10, 1.0/1, 1.0/1, 0, 255, 255); //Вызов функции DrawSun
       DrawCesar (xCesar, yCesar, 11.0/10, 13.0/10, 40, 40, 40, 40, 35, 182, 39, 101, 6, 33); //Вызов функции DrawCesar
       DrawSun (xCrazy, yCrazy, 1, 1, 130.0/10, 190.0/10, 1.0/1, 1.0/1, 0, 255, 255); //Вызов функции DrawSun

       xCesar = xCesar + vxCesar*dt;
       yCesar = yCesar + vyCesar*dt;
       x = x + vx*dt;
       y = y + vy*dt;
       xSun = xSun + vxSun*dt;
       ySun = ySun + vySun*dt;
       xCrazy = xCrazy + vxCrazy*dt;
       yCrazy = yCrazy + vyCrazy*dt;


       if (x > 1500, xCesar > 1500, xSun > 1500, xCrazy > 1500)

           {
           vx = -vx;
           x = 1500;
           vxCesar = -vxCesar;
           xCesar = 1500;
           vxSun = -vxSun;
           xSun = 1500;
           vxCrazy = -vxCrazy;
           xCrazy = 1500;
           };


       if (y > 900, ySun > 900, yCesar > 900, yCrazy > 900)

           {
           vy = -vy;
           y = 900;
           vyCesar = -vyCesar;
           yCesar = 900;
           vySun = -vySun;
           ySun = 900;
           vyCesar = -vyCesar;
           yCesar = 900;
           };

        if (y < 0, ySun < 0, yCesar < 0, yCrazy < 0)

           {
           vy = -vy;
           y = 0;
           vyCesar = -vyCesar;
           yCesar = 0;
           vySun = -vySun;
           ySun = 0;
           vyCrazy = -vyCrazy;
           yCrazy = 0;
           };

       if (x < 0, xSun < 0, xCesar < 0, xCrazy < 0)

           {
           vx = -vx;
           x = 0;
           vxCesar = -vxCesar;
           xCesar = 0;
           vxSun = -vxSun;
           xSun = 0;
           vxCrazy = -vxCrazy;
           xCrazy = 0;
           };



        txSleep(10);

        }
    }

void Movecar()

    {

    int x = 985, y = 438, vx = 3, vy = 3;
    int x1 = 1344, y1 = 552, vx1 = 3, vy1 = 3;
    int dt = 2, dt1 = 2;


    while ( !GetAsyncKeyState (VK_RIGHT))

        {
        txSetFillColor (RGB (15, 201, 10));//Определение функции Zalivka
        txClear();
        DrawCar (x, y, 11.0/10, 11.0/10, 5.0/10, 10, 7.0/10, 7.0/10, 98, 255, 255, 255); //Вызов функции DrawCar
        DrawCar (x1, y1, 14.0/10, 14.0/10, 8.0/10,10, 11.0/10, 11.0/10, 0, 255, 255, 255); //Вызов функции DrawCar

        x = x + vx*dt;
        y = y + vy*dt;
        x1 = x1 - vx1*dt1;
        y1 = y1 - vy1*dt1;


        if (x > 1500)

            {
            vx = -vx;
            x = 1500;
            };


        if (y > 900)

            {
            vy = -vy;
            y = 900;
            };

        if (y < 0)

            {
            vy = -vy;
            y = 0;
            };

        if (x < 0)

            {
            vx = -vx;
            x = 0;
            };

        if (x > 1102)

            {
            vx = -vx;
            x = 1102;
            };

        if (x1 < 1227)

            {
            vx1 = -vx1;
            x1 = 1227;
            };



        txSleep(1);

        }
    }


void Portal()

    {

    int t = 0;
    while (t <= 100)

        {
        DrawPyatno(10 + t%100*5, 10 + t%100*5);//Вызов функции Pyatno
        t++;
        txSleep (10);
        }

    }

void Unrealcountry()
    {

    int t = 0;
    while (t <= 1000)

        {
        Zalivka (0, 0, 160);//Вызов функции Zalivka
        DrawRoad (663, 630, 1, 1, 58, 58, 60, 60, 128, 0, 128); //Вызов функции DrawRoad
        DrawRoad (663, 439, 1, 1, 58, 58, 60, 60, 128, 0, 128); //Вызов функции DrawRoad
        DrawBird (218 + t*3, 218, 2, 2, 58, 4.0/10, 6.0/10, 9.0/10, 255, 174, 201); //Вызов функции DrawBird
        DrawBird (100 + t*2, 585 + 100 % 30, 2, 2, 58 + t/5 % 2 * 5 , 6.0/10 + t/8 % 4 *0.01, 3.0/10, 9.0/10, 0, 255, 128); //Вызов функции DrawBird
        DrawCesar (1346, 570 - t*0.8, 13.0/10, 13.0/10, 20, 20, 20, 20, 255, 21, 28, 101, 6, 33 ); //Вызов функции DrawCesar
        DrawCesar (1173, 570 - t*0.7, 11.0/10, 13.0/10, 40, 40, 40, 40, 255, 21, 28, 101, 6, 33); //Вызов функции DrawCesar
        DrawCesar (1000, 570 - t*0.5, 13.0/10, 11.0/10, 30, 30, 30, 30, 255, 21, 28, 101, 6, 33); //Вызов функции DrawCesar
        DrawCesar (827, 570 - t*2, 13.0/10, 13.0/10, 50, 50, 50, 50, 255, 21, 28, 101, 6, 33); //Вызов функции DrawCesar
        Drawriver (743, 0, 7.0/10, 10.0/10, 50, 10, 50, 10, 0, 255, 0); //Вызов функции Drawriver
        Drawriver (598, 0, 8.0/10, 10.0/10, 50, 10, 50, 10, 0, 255, 0); //Вызов функции Drawriver
        DrawCar (985 + t*5, 438 + t*0.3, 11.0/10, 11.0/10, 5.0/10, t/5 % 2 * 10, 7.0/10, 7.0/10, 98, 255, 255, 0); //Вызов функции DrawCar
        DrawCar (1344 + t*3, 552 - t*0.2, 14.0/10, 14.0/10, 8.0/10, t/5 % 2 * 10, 11.0/10, 11.0/10, 0, 255, 255, 0); //Вызов функции DrawCar
        DrawSun (1403, 92, 1, 1, 300.0/10 - t * 0.2, 10.0/10 + t/5 % 2 * 3, 2.0/1 + t/5 %5 * 0.4, 13.0/10, 0, 255, 255); //Вызов функции DrawSun
        DrawSun (97, 92, 1, 1, 130.0/10 - t*0.3, 190.0/10, 1.0/1, 1.0/1, 0, 255, 255); //Вызов функции DrawSun
        DrawNY (943 + t*0.4, -50 + t*0.3, 10.0/10, 16.0/10, -30, 10, -30, 10, 255, 0, 255); //Вызов функции  DrawNY
        DrawText (153 + t*2, 390, 1.0/1, 11.0/10, 10.0/10, 17.0/10, 10.0/10, 9.0/10); //Вызов функции DrawText
        DrawBird (100 + t*2, 585 + 100 % 30, 2, 2, 58 + t/5 % 2 * 5 , 6.0/10 + t/8 % 4 *0.1, 3.0/10, 9.0/10, 0, 255, 128); //Вызов функции DrawBird
        DrawBird (1350 - t*2, 750, 1, 1, 58, 6.0/10, 2.0/10, 9.0/10, 3, 252, 128); //Вызов функции DrawBird
        DrawBird (700 + t*3, 754, 1, 1, 58, 6.0/10, 3.0/10, 9.0/10, 255, 0, 128); //Вызов функции DrawBird
        t++;
        txSleep (10);
        }

    }

void  DrawPyatno (int sizeX, int sizeY)

    {
    txSetFillColor (RGB(0, 0, 0));//
    txSetColor (TX_NULL);//Определение функции Pyatno()
    txCircle (750, 450, 10*(sizeX+sizeY)/2);//
    }

void  Zalivka(int cvet1, int cvet2, int cvet3)

    {
    txSetFillColor (RGB (15, 201, 10));//Определение функции Zalivka
    txClear ();//
    }

void  DrawText (int x, int y, double sizeX, double sizeY, double cloudX, double cloudY, double thoughtsX, double thoughtsY )

    {
    txSetFillColor (RGB (255, 255, 255) );
    txSetColor(TX_NULL); //
    txEllipse (x*cloudX, y-20*cloudY, x+220*sizeX*cloudX, y+20*sizeY*cloudY);//
    txSetColor (RGB (253, 0, 6) ); //
    txSetFillColor (TX_NULL);//
    txSelectFont ("AR DELANEY", 29, 30, 10 , 0, 0, 0, 90); //  Определение функции  DrawText()
    txDrawText  (x, y, x+220*sizeX, y+50*sizeY,  "This is PUCHKOLYANDIA or something ugly.\n"); //
    txSetFillColor (RGB (250, 250, 250) );//
    txSetColor (TX_NULL);//
    txCircle (x+43*thoughtsX, y+73*thoughtsY, 15);//
    txCircle (x+27*thoughtsX, y+103*thoughtsY, 7);//
    }

void  DrawCesar (int x, int y, double sizeX, double sizeY, int cronaX, int cronaY, int penX, int penY, int cvet1, int cvet2, int cvet3, int cvet4, int cvet5, int cvet6 )

    {
    txSetFillColor (RGB (0+cvet1, 0+cvet2, 0+cvet3) ); //
    txSetColor (TX_NULL); //
    txEllipse (x+0*sizeX-cronaX, y+0*sizeY-cronaY, x+115*sizeX-cronaX, y+184*sizeY-cronaY); //
    txSetFillColor (RGB (0+cvet4, 0+cvet5, 0+cvet6) ); // Определение функции DrawCesar()
    txSetColor (TX_NULL);//
    txRectangle (x+46*sizeX-penX, y+184*sizeY-penY, x+69*sizeX-penX, y+304*sizeY-penY); //
    }

void  DrawNY (int x, int y, double sizeX, double sizeY, int zelenX, int zelenY, int cronaX, int cronaY, int cvet1, int cvet2, int cvet3 )

    {
    txSetFillColor (RGB (0+cvet1, 0+cvet2, 0+cvet3) );//
    txSetColor (TX_NULL); //
    POINT triangle [3] = {{x+zelenX, y+zelenY}, {x-69*sizeX+zelenX, y+92*sizeY+zelenY}, {x+69*sizeX+zelenX, y+92*sizeY+zelenY}}; // Определение функции DrawNY()
    txPolygon (triangle, 3);//
    POINT roof [3] = { {x+zelenX, y+92*sizeY+zelenY}, {x-92*sizeX+zelenX, y+207*sizeY+zelenY}, {x+92*sizeX+zelenX, y+207*sizeY+zelenY} }; //
    txPolygon (roof, 3); //
    txSetFillColor (RGB (101, 67, 33)); //
    txRectangle (x-12*sizeX+cronaX, y+207*sizeY+cronaY, x+23*sizeX+cronaX, y+253*sizeY+cronaY); //
    }


void  DrawBird (int x, int y, int sizeX, int sizeY, int qluve, double glass, double stomach, double pupil, int cvet1, int cvet2, int cvet3 )

    {
    txSetColor (TX_NULL); //
    txSetFillColor (RGB (0+cvet1, 0+cvet2, 0+cvet3) ); //
    txCircle (x, y, 34*( sizeX + sizeY )/2+stomach ); //
    txSetFillColor (RGB (0+cvet1, 0+cvet2, 0+cvet3)); //
    POINT roof [3] = { {x-qluve*sizeX, y-7*sizeY}, {x+12*sizeX, y-11*sizeY}, {x+12*sizeX, y+12*sizeY} }; //
    txPolygon (roof, 3); //
    txSetFillColor (RGB (255, 255, 255) ); //
    txCircle (x-11, y-4, 12*((sizeX+sizeY)/2*pupil) ); //
    txSetFillColor (RGB(0, 0, 0)); //
    txCircle ((x-7), y-4, 6*( (sizeX+sizeY) /2)*glass ); //Определение функции DrawBird()
    }

void  DrawRoad (int x, int y, int sizeX, int sizeY, int phisicsX, int road, int phisicsY, int roadY, int cvet1, int cvet2, int cvet3 )

    {
    txSetFillColor (RGB(0+cvet1, 0+cvet2, 0+cvet3)); //        Определение функции DrawWonderfulRoad()
    txSetColor (TX_NULL); //
    txRectangle (x-106*sizeX-road, y-89*sizeY+roadY, x+900*sizeX-road, y+111*sizeY+roadY ); //
    txSetFillColor (RGB (192, 192, 192 ) ); //
    txRectangle ( x-phisicsX, y+phisicsY, x+87*sizeX-phisicsX, y+24*sizeY+phisicsY ); //
    txRectangle ( x+117*sizeX-phisicsX, y+phisicsY, x+204*sizeX-phisicsX, y+24*sizeY+phisicsY ); //
    txRectangle ( x+244*sizeX-phisicsX, y+phisicsY, x+331*sizeX-phisicsX, y+24+phisicsY )*sizeY; //    Определение функции DrawRoad()
    txRectangle ( x+371*sizeX-phisicsX, y+phisicsY, x+458*sizeX-phisicsX, y+24+phisicsY )*sizeY; //
    txRectangle ( x+498*sizeX-phisicsX, y+phisicsY, x+585*sizeX-phisicsX, y+24+phisicsY )*sizeY; //
    txRectangle ( x+625*sizeX-phisicsX, y+phisicsY, x+712*sizeX-phisicsX, y+24+phisicsY )*sizeY; //
    txRectangle ( x+752*sizeX-phisicsX, y+phisicsY, x+837*sizeX-phisicsX, y+24+phisicsY )*sizeY; //
    }

void  DrawCar (int x, int y, double sizeX, double sizeY, double wheel, double meowWheel, double windowX, double windowY, int bumper, int cvet1, int cvet2, int cvet3 )

    {
    txSetFillColor (RGB (0+cvet1, 0+cvet2, 0+cvet3) ); //
    txSetColor (TX_NULL); //
    POINT sun [6] = { {x+69*sizeX, y-47*sizeY},{x, y}, {x, y+45*sizeY}, {x+399*sizeX-bumper, y+45*sizeY}, {x+399*sizeX-bumper, y},  {x+330*sizeX-bumper, y-47*sizeY} }; //
    txPolygon (sun, 6); //
    txSetFillColor (RGB (0, 0, 0) ); //
    txCircle (x+69, y+55 + meowWheel, 26*((sizeX+sizeY)/2*wheel)); //       Определение функции DrawCar()
    txSetFillColor (RGB(0, 0, 0) ); //
    txCircle (x+300, y+68 - meowWheel, 26*((sizeX+sizeY)/2*wheel)); //
    txSetFillColor ( RGB (0, 0, 0) );//
    txRectangle (x+212*sizeX*windowX, y-24*sizeY*windowX, x+304*sizeX*windowX, y+12*sizeY*windowX);//
    txRectangle (x+189*sizeX*windowY, y-24*sizeY*windowY, x+97*sizeX*windowY, y+12*sizeY*windowY);//
    }

void  Drawriver (int X, int Y, double sizeX, double sizeY, int waveX, int waveY, int polostX, int polostY, int cvet1, int cvet2, int cvet3)

    {
    txSetColor  (RGB (0+cvet1, 0+cvet2, 0+cvet3), 46); //
    txLine (X+0*sizeX+waveX, Y+0*sizeY+waveY, X+23*sizeX+waveX, Y+46*sizeY+waveY); //
    txLine (X+23*sizeX+waveX, Y+46*sizeY+waveY, X-23*sizeX+waveX,Y+184*sizeY+waveY); //
    txLine (X-23*sizeX+waveX, Y+184*sizeY+waveY, X+23*sizeX+waveX, Y+322*sizeY+waveY); //
    txLine (X+23*sizeX+waveX, Y+322*sizeY+waveY, X-23*sizeX+waveX, Y+460*sizeY+waveY); //
    txLine (X-23*sizeX+waveX, Y+460*sizeY+waveY, X+23*sizeX+waveX, Y+598*sizeY+waveY); //
    txLine (X+23*sizeX+waveX, Y+598*sizeY+waveY, X-23*sizeX+waveX, Y+736*sizeY+waveY); //
    txLine (X-23*sizeX+waveX, Y+736*sizeY+waveY, X+23*sizeX+waveX, Y+874*sizeY+waveY); //
    txLine (X-253*sizeX+waveX, Y+0*sizeY+waveY, X-276*sizeX+waveX, Y+46*sizeY+waveY); //Определение функции Drawriver()
    txLine (X-276*sizeX+waveX, Y+46*sizeY+waveY, X-230*sizeX+waveX, Y+184*sizeY+waveY); //
    txLine (X-230*sizeX+waveX, Y+184*sizeY+waveY, X-276*sizeX+waveX, Y+322*sizeY+waveY); //
    txLine (X-276*sizeX+waveX, Y+322*sizeY+waveY, X-230*sizeX+waveX, Y+460*sizeY+waveY); //
    txLine (X-230*sizeX+waveX, Y+460*sizeY+waveY, X-276*sizeX+waveX, Y+598*sizeY+waveY); //
    txLine (X-276*sizeX+waveX, Y+598*sizeY+waveY, X-230*sizeX+waveX, Y+736*sizeY+waveY); //
    txLine (X-230*sizeX+waveX, Y+736*sizeY+waveY, X-276*sizeX+waveX, Y+874*sizeY+waveY); //
    txLine (X-253*sizeX+waveX, Y-0*sizeY+waveY, X-0*sizeX+waveX, Y-0*sizeY+waveY); //
    txLine (X-283*sizeX+waveX, Y+900*sizeY+waveY, X-0*sizeX+waveX, Y+860*sizeY+waveY); //
    txLine (X-283*sizeX+waveX, Y*sizeY+waveY, X-230*sizeX+waveX, Y+46*sizeY+waveY); //
    txLine (X-230*sizeX+waveX, Y+46*sizeY+waveY, X-184*sizeX+waveX, Y+184*sizeY+waveY); //
    txLine (X-184*sizeX+waveX, Y+184*sizeY+waveY, X-230*sizeX+waveX, Y+322*sizeY+waveY); //
    txLine (X-230*sizeX+waveX, Y+322*sizeY+waveY, X-184*sizeX+waveX, Y+460*sizeY+waveY); //
    txLine (X-184*sizeX+waveX, Y+460*sizeY+waveY, X-230*sizeX+waveX, Y+598*sizeY+waveY); //
    txLine (X-230*sizeX+waveX, Y+598*sizeY+waveY, X-184*sizeX+waveX, Y+736*sizeY+waveY); //
    txLine (X-184*sizeX+waveX, Y+736*sizeY+waveY, X-230*sizeX+waveX, Y+874*sizeY+waveY); //
    txLine (X-46*sizeX+waveX, Y+0*sizeY+waveY, X-23*sizeX+waveX, Y+46*sizeY+waveY); //
    txLine (X-23*sizeX+waveX, Y+46*sizeY+waveY, X-69*sizeX+waveX, Y+184*sizeY+waveY); //
    txLine (X-69*sizeX+waveX, Y+184*sizeY+waveY, X-23*sizeX+waveX, Y+322*sizeY+waveY); //
    txLine (X-23*sizeX+waveX, Y+322*sizeY+waveY, X-69*sizeX+waveX, Y+460*sizeY+waveY); //
    txLine (X-69*sizeX+waveX, Y+460*sizeY+waveY, X-23*sizeX+waveX, Y+598*sizeY+waveY); //
    txLine (X-23*sizeX+waveX, Y+598*sizeY+waveY, X-69*sizeX+waveX, Y+736*sizeY+waveY); //
    txLine (X-69*sizeX+waveX, Y+736*sizeY+waveY, X-23*sizeX+waveX, Y+874*sizeY+waveY); //
    txSetFillColor (RGB (0+cvet1, 0+cvet2, 0+cvet3)); //
    txRectangle ( X-230*sizeX+polostX, Y*sizeY+polostY, X-23*sizeX+polostX, Y+900*sizeY+polostY); //
    }

void  DrawSun (int x, int y, int sizeX, int sizeY, double rays, double joker, double crazy, double fat, int cvet1, int cvet2, int cvet3)

    {
    txSetFillColor (RGB (0+cvet1, 0+cvet2, 0+cvet3)); //
    txSetColor (TX_NULL); //
    txCircle ( x, y, 87* ( (sizeX+sizeY)/2*fat) ); //
    txSetFillColor (RGB (0+cvet1, 0+cvet2, 0+cvet3)); //
    txSetColor(RGB(0+cvet1, 0+cvet2, 0+cvet3), 21); //
    txLine ( x-115*sizeX, y-92*sizeY-rays, x-46*sizeX, y-23*sizeY-rays );  //
    txLine ( x-23*sizeX,  y+46*sizeY-rays, x-92*sizeX, y+115*sizeY); //
    txLine ( x-46*sizeX, y+12*sizeY, x-138*sizeX, y+23*sizeY); //
    txLine ( x+11*sizeX, y+69*sizeY, x+11*sizeX-rays, y+151*sizeY); //
    txLine ( x+82*sizeX-rays, y+12*sizeY, x+151*sizeX-rays, y+12*sizeY); //
    txLine ( x+97*sizeX-rays, y-92*sizeY, x+28*sizeX-rays, y-23*sizeY);  //
    txSetColor (TX_NULL);    //
    txSetFillColor(RGB(0, 0, 0));//
    txEllipse (x-43*sizeX, y+23*sizeY-joker, x+49*sizeX, y+36*sizeY);//
    txCircle (x-33, y-23, 12* ( (sizeX+sizeY)/2)*crazy ) ;  //Определение функции DrawSun()
    txCircle (x+46, y-23, 12* ( (sizeX+sizeY)/2)*crazy );  //
    }





