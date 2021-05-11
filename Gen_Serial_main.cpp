/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: Patron
 *
 * Created on 1 de mayo de 2021, 22:18
 */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-copy"

#include <QApplication>
#include "Gen_FormSerial.h"
#pragma GCC diagnostic pop

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    app.setWindowIcon(QIcon("iconengines/barcode.png"));
    FormSerial* ventana = new FormSerial;  
    ventana->setFixedSize(400, 270);
    ventana->PopCB(ventana->getMacAddressQStringList());
    //ventana->PopCB(ventana->getMacAddress());
    ventana->show();

    return app.exec();
}
