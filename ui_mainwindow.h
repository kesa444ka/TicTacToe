/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *crossButton;
    QPushButton *zeroButton;
    QPushButton *startPlayingButton;
    QPushButton *aboutGameButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *pushButton_9;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *aboutGameLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(692, 502);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/images/title_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(196, 94, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font.setPointSize(30);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        crossButton = new QPushButton(centralwidget);
        crossButton->setObjectName("crossButton");
        crossButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/images/cross_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        crossButton->setIcon(icon1);
        crossButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(crossButton);

        zeroButton = new QPushButton(centralwidget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/images/zero_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        zeroButton->setIcon(icon2);
        zeroButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(zeroButton);


        verticalLayout->addLayout(horizontalLayout);

        startPlayingButton = new QPushButton(centralwidget);
        startPlayingButton->setObjectName("startPlayingButton");
        QFont font1;
        font1.setPointSize(13);
        startPlayingButton->setFont(font1);
        startPlayingButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(startPlayingButton);

        aboutGameButton = new QPushButton(centralwidget);
        aboutGameButton->setObjectName("aboutGameButton");
        QFont font2;
        font2.setPointSize(12);
        aboutGameButton->setFont(font2);
        aboutGameButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(aboutGameButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(380, 380));
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(5, 5, 5, 5);
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(120, 120));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(120, 120));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(120, 120));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_1 = new QPushButton(tab);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setMinimumSize(QSize(120, 120));
        pushButton_1->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(120, 120));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(120, 120));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMinimumSize(QSize(120, 120));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(120, 120));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(120, 120));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 255);"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        aboutGameLabel = new QLabel(tab_2);
        aboutGameLabel->setObjectName("aboutGameLabel");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Agency FB")});
        font3.setPointSize(14);
        font3.setBold(false);
        aboutGameLabel->setFont(font3);
        aboutGameLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        aboutGameLabel->setAlignment(Qt::AlignCenter);
        aboutGameLabel->setWordWrap(true);

        verticalLayout_2->addWidget(aboutGameLabel);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 692, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TicTacToe", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270-\320\235\320\276\320\273\320\270\320\272\320\270", nullptr));
        crossButton->setText(QString());
        zeroButton->setText(QString());
        startPlayingButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        aboutGameButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
        pushButton_9->setText(QString());
        pushButton_3->setText(QString());
        pushButton_6->setText(QString());
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        pushButton_8->setText(QString());
        pushButton_4->setText(QString());
        pushButton_7->setText(QString());
        pushButton_5->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
        aboutGameLabel->setText(QCoreApplication::translate("MainWindow", "kdiruriur", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
