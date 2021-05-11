/********************************************************************************
** Form generated from reading UI file 'FormSerial2.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSERIAL2_H
#define UI_FORMSERIAL2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormSerial2
{
public:
    QWidget *widget;
    QComboBox *Mac_ComboBox;
    QLabel *Mac;
    QLabel *titulo;
    QLabel *Serial;
    QLabel *Serial_edit;

    void setupUi(QDialog *FormSerial2)
    {
        if (FormSerial2->objectName().isEmpty())
            FormSerial2->setObjectName(QStringLiteral("FormSerial2"));
        FormSerial2->resize(400, 270);
        FormSerial2->setStyleSheet(QStringLiteral("background: rgb(231, 231, 231);"));
        widget = new QWidget(FormSerial2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(25, 30, 351, 211));
        widget->setStyleSheet(QLatin1String("background:white;\n"
"border:2px dotted black;\n"
"border-radius:10px;"));
        Mac_ComboBox = new QComboBox(widget);
        Mac_ComboBox->setObjectName(QStringLiteral("Mac_ComboBox"));
        Mac_ComboBox->setGeometry(QRect(80, 70, 250, 30));
        Mac_ComboBox->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:1px solid black;\n"
"border-radius:5px;"));
        Mac = new QLabel(widget);
        Mac->setObjectName(QStringLiteral("Mac"));
        Mac->setGeometry(QRect(10, 70, 60, 31));
        Mac->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:0px;"));
        Mac->setAlignment(Qt::AlignCenter);
        titulo = new QLabel(widget);
        titulo->setObjectName(QStringLiteral("titulo"));
        titulo->setGeometry(QRect(59, 20, 231, 31));
        titulo->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:0px;"));
        titulo->setAlignment(Qt::AlignCenter);
        Serial = new QLabel(widget);
        Serial->setObjectName(QStringLiteral("Serial"));
        Serial->setGeometry(QRect(10, 140, 60, 31));
        Serial->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:0px;"));
        Serial->setAlignment(Qt::AlignCenter);
        Serial_edit = new QLabel(widget);
        Serial_edit->setObjectName(QStringLiteral("Serial_edit"));
        Serial_edit->setGeometry(QRect(80, 140, 250, 31));
        Serial_edit->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:1px solid black;\n"
"border-radius:5px;"));
        Serial_edit->setAlignment(Qt::AlignCenter);

        retranslateUi(FormSerial2);

        QMetaObject::connectSlotsByName(FormSerial2);
    } // setupUi

    void retranslateUi(QDialog *FormSerial2)
    {
        FormSerial2->setWindowTitle(QApplication::translate("FormSerial2", "FormSerial2", nullptr));
        Mac->setText(QApplication::translate("FormSerial2", "MAC", nullptr));
        titulo->setText(QApplication::translate("FormSerial2", "Generador de Seriales", nullptr));
        Serial->setText(QApplication::translate("FormSerial2", "Serial", nullptr));
        Serial_edit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormSerial2: public Ui_FormSerial2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSERIAL2_H
