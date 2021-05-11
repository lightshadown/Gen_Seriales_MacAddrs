/********************************************************************************
** Form generated from reading UI file 'FormSerial.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSERIAL_H
#define UI_FORMSERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormSerial
{
public:
    QWidget *widget;
    QComboBox *Mac_ComboBox;
    QLabel *Mac;
    QLabel *Serial;
    QLabel *Serial_edit;
    QLabel *titulo;

    void setupUi(QDialog *FormSerial)
    {
        if (FormSerial->objectName().isEmpty())
            FormSerial->setObjectName(QStringLiteral("FormSerial"));
        FormSerial->resize(400, 264);
        FormSerial->setStyleSheet(QStringLiteral("background:rgba(31, 71, 255, 0.2)"));
        widget = new QWidget(FormSerial);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 361, 201));
        widget->setStyleSheet(QLatin1String("background:white;\n"
"border:2px dotted black;\n"
"border-radius:5px;"));
        Mac_ComboBox = new QComboBox(widget);
        Mac_ComboBox->setObjectName(QStringLiteral("Mac_ComboBox"));
        Mac_ComboBox->setGeometry(QRect(80, 70, 251, 32));
        Mac_ComboBox->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:1px solid black;\n"
"border-radius:5px;"));
        Mac = new QLabel(widget);
        Mac->setObjectName(QStringLiteral("Mac"));
        Mac->setGeometry(QRect(10, 70, 59, 31));
        Mac->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:0 px;"));
        Mac->setAlignment(Qt::AlignCenter);
        Serial = new QLabel(widget);
        Serial->setObjectName(QStringLiteral("Serial"));
        Serial->setGeometry(QRect(10, 140, 61, 31));
        Serial->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:0px;"));
        Serial->setAlignment(Qt::AlignCenter);
        Serial_edit = new QLabel(widget);
        Serial_edit->setObjectName(QStringLiteral("Serial_edit"));
        Serial_edit->setGeometry(QRect(80, 140, 251, 31));
        Serial_edit->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:1px solid black;\n"
"border-radius:5px;"));
        Serial_edit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        titulo = new QLabel(widget);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(80, 20, 201, 31));
        titulo->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:0 px;"));
        titulo->setAlignment(Qt::AlignCenter);

        retranslateUi(FormSerial);

        QMetaObject::connectSlotsByName(FormSerial);
    } // setupUi

    void retranslateUi(QDialog *FormSerial)
    {
        FormSerial->setWindowTitle(QApplication::translate("FormSerial", "FormSerial", nullptr));
        Mac->setText(QApplication::translate("FormSerial", "MAC:", nullptr));
        Serial->setText(QApplication::translate("FormSerial", "Serial:", nullptr));
        Serial_edit->setText(QString());
        titulo->setText(QApplication::translate("FormSerial", "Generador de Seriales", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormSerial: public Ui_FormSerial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSERIAL_H
