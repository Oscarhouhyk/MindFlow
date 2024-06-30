#include "queren.h"
#include "ui_queren.h"

queren::queren(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::queren)
{
    ui->setupUi(this);
}

queren::~queren()
{
    delete ui;
}
