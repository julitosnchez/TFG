/********************************************************************************
** Form generated from reading UI file 'menuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuprincipal
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *SIMULA;
    QPushButton *EJERCICIO;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *menuprincipal)
    {
        if (menuprincipal->objectName().isEmpty())
            menuprincipal->setObjectName(QStringLiteral("menuprincipal"));
        menuprincipal->resize(286, 154);
        centralWidget = new QWidget(menuprincipal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 20, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        SIMULA = new QPushButton(verticalLayoutWidget);
        SIMULA->setObjectName(QStringLiteral("SIMULA"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        SIMULA->setFont(font);

        verticalLayout->addWidget(SIMULA);

        EJERCICIO = new QPushButton(verticalLayoutWidget);
        EJERCICIO->setObjectName(QStringLiteral("EJERCICIO"));
        EJERCICIO->setFont(font);

        verticalLayout->addWidget(EJERCICIO);

        menuprincipal->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(menuprincipal);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 286, 22));
        menuprincipal->setMenuBar(menuBar);
        statusBar = new QStatusBar(menuprincipal);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        menuprincipal->setStatusBar(statusBar);

        retranslateUi(menuprincipal);

        QMetaObject::connectSlotsByName(menuprincipal);
    } // setupUi

    void retranslateUi(QMainWindow *menuprincipal)
    {
        menuprincipal->setWindowTitle(QApplication::translate("menuprincipal", "menuprincipal", Q_NULLPTR));
        SIMULA->setText(QApplication::translate("menuprincipal", "CINEM\303\201TICA", Q_NULLPTR));
        EJERCICIO->setText(QApplication::translate("menuprincipal", "DIN\303\201MICA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class menuprincipal: public Ui_menuprincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
