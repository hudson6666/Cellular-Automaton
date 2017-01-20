//
// Created by lijiahao on 9/10/16.
//

#ifndef CA_GAMECONTROLLER_H
#define CA_GAMECONTROLLER_H

#include "CellCar.h"
#include "drawhelper.h"
#include <vector>
#include <QPainter>
#include <QWidget>

#define CARNUM 100
#define LEFTXLIM 0
#define RIGHTXLIM 10 //Exclude
#define TOPYLIM 0
#define BOTTOMYLIM 10 //Exclude

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
    void carFactory();
};
#endif //CA_GAMECONTROLLER_H
