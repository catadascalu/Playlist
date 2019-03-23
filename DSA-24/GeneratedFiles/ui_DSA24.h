/********************************************************************************
** Form generated from reading UI file 'DSA24.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DSA24_H
#define UI_DSA24_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DSA24Class
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *playListTable;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *startButton;
    QPushButton *nextButton;
    QPushButton *prevButton;
    QPushButton *playButton;
    QListWidget *songList;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *titleLabel;
    QLabel *artistLabel;
    QLabel *durationLabel;
    QLabel *linkLabel;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *titleBox;
    QPlainTextEdit *artistBox;
    QPlainTextEdit *durationBox;
    QPlainTextEdit *linkBox;
    QPushButton *removeButton;
    QPushButton *addButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DSA24Class)
    {
        if (DSA24Class->objectName().isEmpty())
            DSA24Class->setObjectName(QStringLiteral("DSA24Class"));
        DSA24Class->resize(1004, 496);
        centralWidget = new QWidget(DSA24Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(370, 1, 611, 391));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        playListTable = new QTableWidget(widget);
        if (playListTable->columnCount() < 4)
            playListTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        playListTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        playListTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        playListTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        playListTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        playListTable->setObjectName(QStringLiteral("playListTable"));

        verticalLayout_2->addWidget(playListTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        startButton = new QPushButton(widget);
        startButton->setObjectName(QStringLiteral("startButton"));

        verticalLayout->addWidget(startButton);

        nextButton = new QPushButton(widget);
        nextButton->setObjectName(QStringLiteral("nextButton"));

        verticalLayout->addWidget(nextButton);

        prevButton = new QPushButton(widget);
        prevButton->setObjectName(QStringLiteral("prevButton"));

        verticalLayout->addWidget(prevButton);

        playButton = new QPushButton(widget);
        playButton->setObjectName(QStringLiteral("playButton"));

        verticalLayout->addWidget(playButton);


        horizontalLayout->addLayout(verticalLayout);

        songList = new QListWidget(widget);
        songList->setObjectName(QStringLiteral("songList"));

        horizontalLayout->addWidget(songList);


        verticalLayout_2->addLayout(horizontalLayout);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 0, 370, 191));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        titleLabel = new QLabel(widget1);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));

        verticalLayout_3->addWidget(titleLabel);

        artistLabel = new QLabel(widget1);
        artistLabel->setObjectName(QStringLiteral("artistLabel"));

        verticalLayout_3->addWidget(artistLabel);

        durationLabel = new QLabel(widget1);
        durationLabel->setObjectName(QStringLiteral("durationLabel"));

        verticalLayout_3->addWidget(durationLabel);

        linkLabel = new QLabel(widget1);
        linkLabel->setObjectName(QStringLiteral("linkLabel"));

        verticalLayout_3->addWidget(linkLabel);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        titleBox = new QPlainTextEdit(widget1);
        titleBox->setObjectName(QStringLiteral("titleBox"));

        verticalLayout_4->addWidget(titleBox);

        artistBox = new QPlainTextEdit(widget1);
        artistBox->setObjectName(QStringLiteral("artistBox"));

        verticalLayout_4->addWidget(artistBox);

        durationBox = new QPlainTextEdit(widget1);
        durationBox->setObjectName(QStringLiteral("durationBox"));

        verticalLayout_4->addWidget(durationBox);

        linkBox = new QPlainTextEdit(widget1);
        linkBox->setObjectName(QStringLiteral("linkBox"));

        verticalLayout_4->addWidget(linkBox);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_2);

        removeButton = new QPushButton(widget1);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        verticalLayout_5->addWidget(removeButton);


        horizontalLayout_3->addLayout(verticalLayout_5);

        addButton = new QPushButton(widget1);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout_3->addWidget(addButton);

        DSA24Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DSA24Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1004, 18));
        DSA24Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DSA24Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DSA24Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DSA24Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DSA24Class->setStatusBar(statusBar);

        retranslateUi(DSA24Class);

        QMetaObject::connectSlotsByName(DSA24Class);
    } // setupUi

    void retranslateUi(QMainWindow *DSA24Class)
    {
        DSA24Class->setWindowTitle(QApplication::translate("DSA24Class", "DSA24", nullptr));
        QTableWidgetItem *___qtablewidgetitem = playListTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DSA24Class", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = playListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DSA24Class", "Artist", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = playListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DSA24Class", "Duration", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = playListTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DSA24Class", "Link", nullptr));
        startButton->setText(QApplication::translate("DSA24Class", "START", nullptr));
        nextButton->setText(QApplication::translate("DSA24Class", "NEXT", nullptr));
        prevButton->setText(QApplication::translate("DSA24Class", "PREVIOUS", nullptr));
        playButton->setText(QApplication::translate("DSA24Class", "PLAY", nullptr));
        titleLabel->setText(QApplication::translate("DSA24Class", "TITLE", nullptr));
        artistLabel->setText(QApplication::translate("DSA24Class", "ARTIST", nullptr));
        durationLabel->setText(QApplication::translate("DSA24Class", "DURATION", nullptr));
        linkLabel->setText(QApplication::translate("DSA24Class", "LINK", nullptr));
        removeButton->setText(QApplication::translate("DSA24Class", "REMOVE", nullptr));
        addButton->setText(QApplication::translate("DSA24Class", ">>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DSA24Class: public Ui_DSA24Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DSA24_H
