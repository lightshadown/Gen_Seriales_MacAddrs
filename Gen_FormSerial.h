/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FormSerial2.h
 * Author: Patron
 *
 * Created on 1 de mayo de 2021, 22:51
 */

#ifndef _FORMSERIAL2_H
#define _FORMSERIAL2_H

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-copy"

#include <QObject>
#include <QString>
#include <QStringList>
#include <QMessageBox> // crea los mensajes de advertencia
#include <QIcon>

#include <stdio.h>
#include <iostream>
#include <string>
//#include <math.h>   // pow, regresa el exponente
//#include <vector>
//#include <sstream> 
#include <fstream>  // hacer stream para escribir en un archivo
#include <windows.h> // funciones de windows, funciones para abrir y cerrar directorios 
#include <ctime>
#include <QByteArray>
#include <Iphlpapi.h>  //  pip adapter, for mac address
#include <Assert.h>

#include "ui_Gen_FormSerial.h"

#pragma GCC diagnostic pop


class FormSerial : public QDialog {
    Q_OBJECT
public:
    FormSerial();
    void Log(QString);
    void PopCB(const QStringList &);
    QStringList getMacAddressQStringList();
    virtual ~FormSerial();
    //std::vector<std::string> getMacAddress();
    //void PopCB(std::vector<std::string>);
public slots:
    void crearSerial(QString);
private:
    Ui::FormSerial2 widget;
};

#endif /* _FORMSERIAL2_H */
