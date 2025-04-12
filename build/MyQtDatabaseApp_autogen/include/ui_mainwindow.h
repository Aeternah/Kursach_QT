/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tabQuery;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbConnection;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *rbSQLite;
    QHBoxLayout *horizontalLayout;
    QLabel *lblSQLitePath;
    QLineEdit *leSQLitePath;
    QPushButton *btnBrowse;
    QRadioButton *rbPostgreSQL;
    QGridLayout *gridLayout;
    QLabel *lblPGHost;
    QLineEdit *lePGHost;
    QLabel *lblPGDatabase;
    QLineEdit *lePGDatabase;
    QLabel *lblPGUser;
    QLineEdit *lePGUser;
    QLabel *lblPGPassword;
    QLineEdit *lePGPassword;
    QLabel *lblPGPort;
    QSpinBox *sbPGPort;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblConnectionName;
    QLineEdit *leConnectionName;
    QPushButton *btnConnect;
    QPushButton *btnDisconnect;
    QGroupBox *gbExplorer;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblConnections;
    QComboBox *cbConnections;
    QLabel *lblTables;
    QComboBox *cbTables;
    QPushButton *btnBuildQuery;
    QTableView *tvResults;
    QGroupBox *gbQuery;
    QVBoxLayout *verticalLayout_5;
    QPlainTextEdit *pteQuery;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnExecute;
    QPushButton *btnClear;
    QPushButton *btnExport;
    QSpacerItem *horizontalSpacer;
    QWidget *tabLog;
    QVBoxLayout *verticalLayout_6;
    QPlainTextEdit *pteQueryLog;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnClearLog;
    QPushButton *btnSaveLog;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabQuery = new QWidget();
        tabQuery->setObjectName("tabQuery");
        verticalLayout_2 = new QVBoxLayout(tabQuery);
        verticalLayout_2->setObjectName("verticalLayout_2");
        gbConnection = new QGroupBox(tabQuery);
        gbConnection->setObjectName("gbConnection");
        verticalLayout_3 = new QVBoxLayout(gbConnection);
        verticalLayout_3->setObjectName("verticalLayout_3");
        rbSQLite = new QRadioButton(gbConnection);
        rbSQLite->setObjectName("rbSQLite");
        rbSQLite->setChecked(true);

        verticalLayout_3->addWidget(rbSQLite);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lblSQLitePath = new QLabel(gbConnection);
        lblSQLitePath->setObjectName("lblSQLitePath");

        horizontalLayout->addWidget(lblSQLitePath);

        leSQLitePath = new QLineEdit(gbConnection);
        leSQLitePath->setObjectName("leSQLitePath");

        horizontalLayout->addWidget(leSQLitePath);

        btnBrowse = new QPushButton(gbConnection);
        btnBrowse->setObjectName("btnBrowse");

        horizontalLayout->addWidget(btnBrowse);


        verticalLayout_3->addLayout(horizontalLayout);

        rbPostgreSQL = new QRadioButton(gbConnection);
        rbPostgreSQL->setObjectName("rbPostgreSQL");

        verticalLayout_3->addWidget(rbPostgreSQL);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        lblPGHost = new QLabel(gbConnection);
        lblPGHost->setObjectName("lblPGHost");

        gridLayout->addWidget(lblPGHost, 0, 0, 1, 1);

        lePGHost = new QLineEdit(gbConnection);
        lePGHost->setObjectName("lePGHost");

        gridLayout->addWidget(lePGHost, 0, 1, 1, 1);

        lblPGDatabase = new QLabel(gbConnection);
        lblPGDatabase->setObjectName("lblPGDatabase");

        gridLayout->addWidget(lblPGDatabase, 1, 0, 1, 1);

        lePGDatabase = new QLineEdit(gbConnection);
        lePGDatabase->setObjectName("lePGDatabase");

        gridLayout->addWidget(lePGDatabase, 1, 1, 1, 1);

        lblPGUser = new QLabel(gbConnection);
        lblPGUser->setObjectName("lblPGUser");

        gridLayout->addWidget(lblPGUser, 2, 0, 1, 1);

        lePGUser = new QLineEdit(gbConnection);
        lePGUser->setObjectName("lePGUser");

        gridLayout->addWidget(lePGUser, 2, 1, 1, 1);

        lblPGPassword = new QLabel(gbConnection);
        lblPGPassword->setObjectName("lblPGPassword");

        gridLayout->addWidget(lblPGPassword, 3, 0, 1, 1);

        lePGPassword = new QLineEdit(gbConnection);
        lePGPassword->setObjectName("lePGPassword");
        lePGPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lePGPassword, 3, 1, 1, 1);

        lblPGPort = new QLabel(gbConnection);
        lblPGPort->setObjectName("lblPGPort");

        gridLayout->addWidget(lblPGPort, 4, 0, 1, 1);

        sbPGPort = new QSpinBox(gbConnection);
        sbPGPort->setObjectName("sbPGPort");
        sbPGPort->setMaximum(65535);
        sbPGPort->setValue(5432);

        gridLayout->addWidget(sbPGPort, 4, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblConnectionName = new QLabel(gbConnection);
        lblConnectionName->setObjectName("lblConnectionName");

        horizontalLayout_2->addWidget(lblConnectionName);

        leConnectionName = new QLineEdit(gbConnection);
        leConnectionName->setObjectName("leConnectionName");

        horizontalLayout_2->addWidget(leConnectionName);

        btnConnect = new QPushButton(gbConnection);
        btnConnect->setObjectName("btnConnect");

        horizontalLayout_2->addWidget(btnConnect);

        btnDisconnect = new QPushButton(gbConnection);
        btnDisconnect->setObjectName("btnDisconnect");

        horizontalLayout_2->addWidget(btnDisconnect);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(gbConnection);

        gbExplorer = new QGroupBox(tabQuery);
        gbExplorer->setObjectName("gbExplorer");
        verticalLayout_4 = new QVBoxLayout(gbExplorer);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lblConnections = new QLabel(gbExplorer);
        lblConnections->setObjectName("lblConnections");

        horizontalLayout_3->addWidget(lblConnections);

        cbConnections = new QComboBox(gbExplorer);
        cbConnections->setObjectName("cbConnections");

        horizontalLayout_3->addWidget(cbConnections);

        lblTables = new QLabel(gbExplorer);
        lblTables->setObjectName("lblTables");

        horizontalLayout_3->addWidget(lblTables);

        cbTables = new QComboBox(gbExplorer);
        cbTables->setObjectName("cbTables");

        horizontalLayout_3->addWidget(cbTables);

        btnBuildQuery = new QPushButton(gbExplorer);
        btnBuildQuery->setObjectName("btnBuildQuery");

        horizontalLayout_3->addWidget(btnBuildQuery);


        verticalLayout_4->addLayout(horizontalLayout_3);

        tvResults = new QTableView(gbExplorer);
        tvResults->setObjectName("tvResults");
        tvResults->setAlternatingRowColors(true);
        tvResults->setSelectionMode(QAbstractItemView::SingleSelection);
        tvResults->setSelectionBehavior(QAbstractItemView::SelectRows);

        verticalLayout_4->addWidget(tvResults);


        verticalLayout_2->addWidget(gbExplorer);

        gbQuery = new QGroupBox(tabQuery);
        gbQuery->setObjectName("gbQuery");
        verticalLayout_5 = new QVBoxLayout(gbQuery);
        verticalLayout_5->setObjectName("verticalLayout_5");
        pteQuery = new QPlainTextEdit(gbQuery);
        pteQuery->setObjectName("pteQuery");

        verticalLayout_5->addWidget(pteQuery);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        btnExecute = new QPushButton(gbQuery);
        btnExecute->setObjectName("btnExecute");

        horizontalLayout_4->addWidget(btnExecute);

        btnClear = new QPushButton(gbQuery);
        btnClear->setObjectName("btnClear");

        horizontalLayout_4->addWidget(btnClear);

        btnExport = new QPushButton(gbQuery);
        btnExport->setObjectName("btnExport");

        horizontalLayout_4->addWidget(btnExport);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(gbQuery);

        tabWidget->addTab(tabQuery, QString());
        tabLog = new QWidget();
        tabLog->setObjectName("tabLog");
        verticalLayout_6 = new QVBoxLayout(tabLog);
        verticalLayout_6->setObjectName("verticalLayout_6");
        pteQueryLog = new QPlainTextEdit(tabLog);
        pteQueryLog->setObjectName("pteQueryLog");
        pteQueryLog->setReadOnly(true);

        verticalLayout_6->addWidget(pteQueryLog);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        btnClearLog = new QPushButton(tabLog);
        btnClearLog->setObjectName("btnClearLog");

        horizontalLayout_5->addWidget(btnClearLog);

        btnSaveLog = new QPushButton(tabLog);
        btnSaveLog->setObjectName("btnSaveLog");

        horizontalLayout_5->addWidget(btnSaveLog);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_5);

        tabWidget->addTab(tabLog, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Database Query Builder", nullptr));
        gbConnection->setTitle(QCoreApplication::translate("MainWindow", "Connection Settings", nullptr));
        rbSQLite->setText(QCoreApplication::translate("MainWindow", "SQLite", nullptr));
        lblSQLitePath->setText(QCoreApplication::translate("MainWindow", "Database path:", nullptr));
        btnBrowse->setText(QCoreApplication::translate("MainWindow", "Browse...", nullptr));
        rbPostgreSQL->setText(QCoreApplication::translate("MainWindow", "PostgreSQL", nullptr));
        lblPGHost->setText(QCoreApplication::translate("MainWindow", "Host:", nullptr));
        lblPGDatabase->setText(QCoreApplication::translate("MainWindow", "Database:", nullptr));
        lblPGUser->setText(QCoreApplication::translate("MainWindow", "User:", nullptr));
        lblPGPassword->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        lblPGPort->setText(QCoreApplication::translate("MainWindow", "Port:", nullptr));
        lblConnectionName->setText(QCoreApplication::translate("MainWindow", "Connection name:", nullptr));
        btnConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        btnDisconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        gbExplorer->setTitle(QCoreApplication::translate("MainWindow", "Database Explorer", nullptr));
        lblConnections->setText(QCoreApplication::translate("MainWindow", "Connection:", nullptr));
        lblTables->setText(QCoreApplication::translate("MainWindow", "Table:", nullptr));
        btnBuildQuery->setText(QCoreApplication::translate("MainWindow", "Build Query", nullptr));
        gbQuery->setTitle(QCoreApplication::translate("MainWindow", "Query Builder", nullptr));
        btnExecute->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btnExport->setText(QCoreApplication::translate("MainWindow", "Export to CSV", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabQuery), QCoreApplication::translate("MainWindow", "Query Builder", nullptr));
        btnClearLog->setText(QCoreApplication::translate("MainWindow", "Clear Log", nullptr));
        btnSaveLog->setText(QCoreApplication::translate("MainWindow", "Save Log", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabLog), QCoreApplication::translate("MainWindow", "Query Log", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
