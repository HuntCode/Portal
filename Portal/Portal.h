#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Portal.h"

class Portal : public QMainWindow
{
    Q_OBJECT

public:
    Portal(QWidget *parent = nullptr);
    ~Portal();

private:
    Ui::PortalClass ui;
};
