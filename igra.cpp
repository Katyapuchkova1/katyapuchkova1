#include"TXLib.h"

    //{Prototipy
    void DrawCircle(int x, int y);
    void DrawRectangle(int x, int y);
    void MoveTelo(int* x, int* y, int* vx , int* vy, int dt);
    void PartIgra();
    void Vol2();
    void MoveTasic(int* x, int* vx, int dt);
    void Menu (HDC gameover);



    //}

int  main()


    {
    txCreateWindow (1500, 900);
    txSetFillColor(RGB(255, 255, 255));
    txClear();
    PartIgra();
    Vol2();

    }

void DrawCircle(int x , int y, int c1, int c2, int c3)

    {
    txSetFillColor(RGB(c1, c2, c3));
    txSetColor(TX_NULL);
    txCircle(x, y, 30);
    }

void DrawRectangle(int x, int y)

    {
    txSetFillColor(RGB(0, 162, 201));
    txSetColor(TX_NULL);
    txRectangle(x, y, x + 200, y + 40);
    }

void MoveTelo(int* x, int* y, int* vx , int* vy, int dt)

    {
    *x = *x + *vx*dt;
    *y = *y + *vy*dt;

    if (*x > 1500)

        {
        *vx = -*vx;
        *x = 1500;
        };

    if (*y < 0)

        {
        *vy = -*vy;
        *y = 0;
        };

    if (*x < 0)

        {
        *vx = -*vx;
        *x = 0;
        };

    }

void PartIgra()

    {
    int x = 750, y = 450, vx = 7, vy = 3;
    int x1 = 650, vx1 = 4, y1 = 820, c1 = 255, c2 = 174, c3 = 201;
    int dt = 2, dt2 = 6;
    HDC gameover = txLoadImage ("gameover.bmp");
    HDC ogon = txLoadImage ("ogon.bmp");

    while ( !GetAsyncKeyState (VK_ESCAPE))

        {
        txTransparentBlt (txDC(), 0, 0, 1500, 900, ogon, 0, 0);
        DrawCircle(x , y, c1, c2, c3);
        DrawRectangle(x1, 820);

        if (y1 - y < 20 && x1 - x < 30 && x - x1 < 200)

            {
            vy = -vy;
            c1 = -c1;
            }

        if (GetAsyncKeyState (VK_LEFT))

            {
            vx1 = -vx1;
            }

        if (y < 900)

            {
            Menu (gameover);
            }

        MoveTelo(&x, &y, &vx, &vy, dt);
        MoveTasic(&x1, &vx1, dt2);

        txSleep(1);
        };

    }

void Vol2()

    {
    int t = 0;
    while (t <= 900)

        {
        DrawRectangle(650 + t*1, 820);
        }
        if ( GetAsyncKeyState (VK_LEFT))
            {
            t++;
            };

        txSleep(10);


    }


void MoveTasic(int* x, int* vx, int dt)

    {
    *x = *x + *vx*dt;

    if (*x > 1500)

        {
        *vx = -*vx;
        *x = 1500;
        };


    if (*x < 0)

        {
        *vx = -*vx;
        *x = 0;
        };

    }

void Menu(HDC gameover)

    {
    txTransparentBlt (txDC(), 450, 200, 600, 500, gameover, 0, 0);
    txSetFillColor (RGB(255, 255, 255));
    txSetColor (TX_NULL);
    txRectangle (550, 450, 650, 550);
    txRectangle (850, 450, 950, 550);
    txSelectFont ("Fixedsys", 30, 15, 100, false, false, false, 15);
    txDrawText (550, 450, 650, 550, "Play again");
    txDrawText (850, 450, 950, 550, "Go to the main menu");


    if ((txMouseButtons() == 1) &&
        (550 <= txMouseX()) && (txMouseX() <= 950) &&
        (450 <= txMouseY()) && (txMouseY() <= 550))

       {
       return;
       }

    }


