/********************************************************************************
** Form generated from reading UI file 'dinamica.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINAMICA_H
#define UI_DINAMICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dinamica
{
public:
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit_2;
    QRadioButton *b1;
    QLineEdit *lineEdit;
    QRadioButton *b2;
    QRadioButton *b3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *rombo;
    QPushButton *horizontal;
    QPushButton *vertical;

    void setupUi(QDialog *dinamica)
    {
        if (dinamica->objectName().isEmpty())
            dinamica->setObjectName(QStringLiteral("dinamica"));
        dinamica->resize(407, 315);
        verticalLayoutWidget_3 = new QWidget(dinamica);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(190, 60, 201, 188));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lineEdit_2->setFont(font);
        lineEdit_2->setAutoFillBackground(true);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_2->setReadOnly(true);

        verticalLayout_3->addWidget(lineEdit_2);

        b1 = new QRadioButton(verticalLayoutWidget_3);
        b1->setObjectName(QStringLiteral("b1"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        b1->setFont(font1);
        b1->setAutoFillBackground(true);

        verticalLayout_3->addWidget(b1);

        lineEdit = new QLineEdit(verticalLayoutWidget_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setAutoFillBackground(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);

        verticalLayout_3->addWidget(lineEdit);

        b2 = new QRadioButton(verticalLayoutWidget_3);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setFont(font1);
        b2->setLayoutDirection(Qt::LeftToRight);
        b2->setAutoFillBackground(true);
        b2->setChecked(true);

        verticalLayout_3->addWidget(b2);

        b3 = new QRadioButton(verticalLayoutWidget_3);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setFont(font1);
        b3->setAutoFillBackground(true);
        b3->setChecked(false);

        verticalLayout_3->addWidget(b3);

        verticalLayoutWidget = new QWidget(dinamica);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 40, 160, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        rombo = new QPushButton(verticalLayoutWidget);
        rombo->setObjectName(QStringLiteral("rombo"));
        rombo->setFont(font1);

        verticalLayout->addWidget(rombo);

        horizontal = new QPushButton(verticalLayoutWidget);
        horizontal->setObjectName(QStringLiteral("horizontal"));
        horizontal->setFont(font1);

        verticalLayout->addWidget(horizontal);

        vertical = new QPushButton(verticalLayoutWidget);
        vertical->setObjectName(QStringLiteral("vertical"));
        vertical->setFont(font1);

        verticalLayout->addWidget(vertical);


        retranslateUi(dinamica);

        QMetaObject::connectSlotsByName(dinamica);
    } // setupUi

    void retranslateUi(QDialog *dinamica)
    {
        dinamica->setWindowTitle(QApplication::translate("dinamica", "Dialog", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("dinamica", "INDIVIDUO NO ENTRENADO", Q_NULLPTR));
        b1->setText(QApplication::translate("dinamica", "Individuo Aleatorio", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("dinamica", "INDIVIDUO ENTRENADO", Q_NULLPTR));
        b2->setText(QApplication::translate("dinamica", "Sin carga", Q_NULLPTR));
        b3->setText(QApplication::translate("dinamica", "Fuerza eje Y", Q_NULLPTR));
        rombo->setText(QApplication::translate("dinamica", "ROMBO", Q_NULLPTR));
        horizontal->setText(QApplication::translate("dinamica", "HORIZONTAL", Q_NULLPTR));
        vertical->setText(QApplication::translate("dinamica", "VERTICAL", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dinamica: public Ui_dinamica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINAMICA_H
