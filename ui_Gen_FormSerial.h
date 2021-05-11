/********************************************************************************
** Form generated from reading UI file 'Gen_FormSerial.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEN_FORMSERIAL_H
#define UI_GEN_FORMSERIAL_H

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
    QLabel *Dias;
    QComboBox *Days_ComboBox;

    void setupUi(QDialog *FormSerial2)
    {
        if (FormSerial2->objectName().isEmpty())
            FormSerial2->setObjectName(QStringLiteral("FormSerial2"));
        FormSerial2->resize(400, 270);
        FormSerial2->setStyleSheet(QStringLiteral("background: rgb(231, 231, 231);"));
        widget = new QWidget(FormSerial2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(25, 20, 351, 231));
        widget->setStyleSheet(QLatin1String("background:white;\n"
"border:2px dotted black;\n"
"border-radius:10px;"));
        Mac_ComboBox = new QComboBox(widget);
        Mac_ComboBox->setObjectName(QStringLiteral("Mac_ComboBox"));
        Mac_ComboBox->setGeometry(QRect(80, 70, 250, 30));
        Mac_ComboBox->setLayoutDirection(Qt::LeftToRight);
        Mac_ComboBox->setStyleSheet(QLatin1String("font:16px \"Roboto\" ;\n"
"background:transparent;\n"
"color:black;\n"
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
        Serial->setGeometry(QRect(10, 120, 60, 31));
        Serial->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:0px;"));
        Serial->setAlignment(Qt::AlignCenter);
        Serial_edit = new QLabel(widget);
        Serial_edit->setObjectName(QStringLiteral("Serial_edit"));
        Serial_edit->setGeometry(QRect(80, 120, 250, 31));
        Serial_edit->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:1px solid black;\n"
"border-radius:5px;"));
        Serial_edit->setAlignment(Qt::AlignCenter);
        Serial_edit->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        Dias = new QLabel(widget);
        Dias->setObjectName(QStringLiteral("Dias"));
        Dias->setGeometry(QRect(10, 170, 60, 31));
        Dias->setStyleSheet(QLatin1String("font:16px \"Roboto\";\n"
"background:transparent;\n"
"border:0px;"));
        Dias->setAlignment(Qt::AlignCenter);
        Days_ComboBox = new QComboBox(widget);
        Days_ComboBox->setObjectName(QStringLiteral("Days_ComboBox"));
        Days_ComboBox->setGeometry(QRect(80, 170, 81, 30));
        Days_ComboBox->setStyleSheet(QLatin1String("font:16px \"Roboto\" black;\n"
"background:transparent;\n"
"color:black;\n"
"border:1px solid black;\n"
"border-radius:5px;"));

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
        Dias->setText(QApplication::translate("FormSerial2", "Dias", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormSerial2: public Ui_FormSerial2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEN_FORMSERIAL_H
