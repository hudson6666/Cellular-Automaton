//
// Created by lijiahao on 9/10/16.
//

#ifndef CA_GAMECONTROLLER_H
#define CA_GAMECONTROLLER_H

#include "cellcar.h"
#include "drawhelper.h"
#include <vector>
#include <QPainter>
#include <QWidget>

#define LEFTXLIM 0
#define RIGHTXLIM 6 //Exclude
#define TOPYLIM 0
#define BOTTOMYLIM 30 //Exclude
#define FPS 10
#define GENFREQ 1 //Num of waves car factory produce per second

//ACC has an effect on time. So that it's not strange that speed correlate to FPS
//High FPS causes splash screen

class GameController : public QWidget
{
    Q_OBJECT
public:
    GameController();
    void startLooping();
public slots:
    void draw(QPainter *painter);
    void loop();
signals:
    void onRedraw();
private:
    DrawHelper dh;
    std::vector<CellCar> stage;
    std::vector<CellBlock> edge;
    void carFactory();
    void blockFactory();
};
#endif //CA_GAMECONTROLLER_H
