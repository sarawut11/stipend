/********************************************************************************
** Form generated from reading UI file 'masternodemanager.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASTERNODEMANAGER_H
#define UI_MASTERNODEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MasternodeManager
{
public:
    QVBoxLayout *topLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *createButton;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *editButton;
    QPushButton *removeButton;
    QPushButton *UpdateButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *startButton;
    QPushButton *startAllButton;

    void setupUi(QWidget *MasternodeManager)
    {
        if (MasternodeManager->objectName().isEmpty())
            MasternodeManager->setObjectName(QStringLiteral("MasternodeManager"));
        MasternodeManager->resize(723, 457);
        topLayout = new QVBoxLayout(MasternodeManager);
        topLayout->setObjectName(QStringLiteral("topLayout"));
        topLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        tabWidget = new QTabWidget(MasternodeManager);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        createButton = new QPushButton(tab_2);
        createButton->setObjectName(QStringLiteral("createButton"));

        horizontalLayout->addWidget(createButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        tableWidget_2 = new QTableWidget(tab_2);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setMinimumSize(QSize(550, 0));
        tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_2->setAlternatingRowColors(true);
        tableWidget_2->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_2->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_2->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidget_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        editButton = new QPushButton(tab_2);
        editButton->setObjectName(QStringLiteral("editButton"));

        horizontalLayout_2->addWidget(editButton);

        removeButton = new QPushButton(tab_2);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        horizontalLayout_2->addWidget(removeButton);

        UpdateButton = new QPushButton(tab_2);
        UpdateButton->setObjectName(QStringLiteral("UpdateButton"));

        horizontalLayout_2->addWidget(UpdateButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        startButton = new QPushButton(tab_2);
        startButton->setObjectName(QStringLiteral("startButton"));

        horizontalLayout_2->addWidget(startButton);

        startAllButton = new QPushButton(tab_2);
        startAllButton->setObjectName(QStringLiteral("startAllButton"));

        horizontalLayout_2->addWidget(startAllButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        topLayout->addLayout(verticalLayout);


        retranslateUi(MasternodeManager);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MasternodeManager);
    } // setupUi

    void retranslateUi(QWidget *MasternodeManager)
    {
        MasternodeManager->setWindowTitle(QApplication::translate("MasternodeManager", "Form", Q_NULLPTR));
        createButton->setText(QApplication::translate("MasternodeManager", "&Create...", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MasternodeManager", "Alias", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MasternodeManager", "IP/Onion", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MasternodeManager", "Donation %", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MasternodeManager", "Donation Address", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MasternodeManager", "Status", Q_NULLPTR));
        editButton->setText(QApplication::translate("MasternodeManager", "&Edit", Q_NULLPTR));
        removeButton->setText(QApplication::translate("MasternodeManager", "&Remove", Q_NULLPTR));
        UpdateButton->setText(QApplication::translate("MasternodeManager", "&Update", Q_NULLPTR));
        startButton->setText(QApplication::translate("MasternodeManager", "S&tart", Q_NULLPTR));
        startAllButton->setText(QApplication::translate("MasternodeManager", "St&art All", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MasternodeManager", "My Master Nodes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MasternodeManager: public Ui_MasternodeManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASTERNODEMANAGER_H
