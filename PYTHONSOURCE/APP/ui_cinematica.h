/********************************************************************************
** Form generated from reading UI file 'cinematica.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CINEMATICA_H
#define UI_CINEMATICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cinematica
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *circulo;
    QPushButton *rombo;
    QPushButton *horizontal;
    QTextEdit *textEdit;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *boton1;
    QRadioButton *boton2;

    void setupUi(QDialog *cinematica)
    {
        if (cinematica->objectName().isEmpty())
            cinematica->setObjectName(QStringLiteral("cinematica"));
        cinematica->resize(385, 292);
        verticalLayoutWidget = new QWidget(cinematica);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 30, 160, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        circulo = new QPushButton(verticalLayoutWidget);
        circulo->setObjectName(QStringLiteral("circulo"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        circulo->setFont(font);

        verticalLayout->addWidget(circulo);

        rombo = new QPushButton(verticalLayoutWidget);
        rombo->setObjectName(QStringLiteral("rombo"));
        rombo->setFont(font);

        verticalLayout->addWidget(rombo);

        horizontal = new QPushButton(verticalLayoutWidget);
        horizontal->setObjectName(QStringLiteral("horizontal"));
        horizontal->setFont(font);

        verticalLayout->addWidget(horizontal);

        textEdit = new QTextEdit(cinematica);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(240, 60, 104, 31));
        textEdit->setReadOnly(true);
        verticalLayoutWidget_2 = new QWidget(cinematica);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(250, 110, 81, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        boton1 = new QRadioButton(verticalLayoutWidget_2);
        boton1->setObjectName(QStringLiteral("boton1"));
        boton1->setFont(font);
        boton1->setAutoFillBackground(true);

        verticalLayout_2->addWidget(boton1);

        boton2 = new QRadioButton(verticalLayoutWidget_2);
        boton2->setObjectName(QStringLiteral("boton2"));
        boton2->setFont(font);
        boton2->setAutoFillBackground(true);
        boton2->setChecked(true);

        verticalLayout_2->addWidget(boton2);


        retranslateUi(cinematica);

        QMetaObject::connectSlotsByName(cinematica);
    } // setupUi

    void retranslateUi(QDialog *cinematica)
    {
        cinematica->setWindowTitle(QApplication::translate("cinematica", "Dialog", Q_NULLPTR));
        circulo->setText(QApplication::translate("cinematica", "CIRCULO", Q_NULLPTR));
        rombo->setText(QApplication::translate("cinematica", "ROMBO", Q_NULLPTR));
        horizontal->setText(QApplication::translate("cinematica", "SINUSOIDAL", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("cinematica", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Rate (Hz)</span></p></body></html>", Q_NULLPTR));
        boton1->setText(QApplication::translate("cinematica", "5 Hz", Q_NULLPTR));
        boton2->setText(QApplication::translate("cinematica", "20 Hz", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cinematica: public Ui_cinematica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CINEMATICA_H
