/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *acQuitter;
    QAction *acCharger;
    QAction *acVider;
    QAction *acAproposde;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *lTitreDiapo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lTitreImage;
    QLabel *lCategorieImage;
    QLabel *lRangImage;
    QLabel *lTotalNbImages;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lImage;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lMode;
    QPushButton *bLancerDiapo;
    QPushButton *bArreterDiapo;
    QPushButton *bPrecedent;
    QPushButton *bSuivant;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tres;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(711, 299);
        acQuitter = new QAction(LecteurVue);
        acQuitter->setObjectName(QString::fromUtf8("acQuitter"));
        acCharger = new QAction(LecteurVue);
        acCharger->setObjectName(QString::fromUtf8("acCharger"));
        acVider = new QAction(LecteurVue);
        acVider->setObjectName(QString::fromUtf8("acVider"));
        acAproposde = new QAction(LecteurVue);
        acAproposde->setObjectName(QString::fromUtf8("acAproposde"));
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lTitreDiapo = new QLabel(centralwidget);
        lTitreDiapo->setObjectName(QString::fromUtf8("lTitreDiapo"));

        verticalLayout->addWidget(lTitreDiapo);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lTitreImage = new QLabel(centralwidget);
        lTitreImage->setObjectName(QString::fromUtf8("lTitreImage"));

        horizontalLayout_2->addWidget(lTitreImage);

        lCategorieImage = new QLabel(centralwidget);
        lCategorieImage->setObjectName(QString::fromUtf8("lCategorieImage"));

        horizontalLayout_2->addWidget(lCategorieImage);

        lRangImage = new QLabel(centralwidget);
        lRangImage->setObjectName(QString::fromUtf8("lRangImage"));
        lRangImage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lRangImage);

        lTotalNbImages = new QLabel(centralwidget);
        lTotalNbImages->setObjectName(QString::fromUtf8("lTotalNbImages"));

        horizontalLayout_2->addWidget(lTotalNbImages);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(4, 2);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lImage = new QLabel(centralwidget);
        lImage->setObjectName(QString::fromUtf8("lImage"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lImage->sizePolicy().hasHeightForWidth());
        lImage->setSizePolicy(sizePolicy);
        lImage->setMinimumSize(QSize(128, 128));
        lImage->setMaximumSize(QSize(128, 128));
        lImage->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lImage);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lMode = new QLabel(centralwidget);
        lMode->setObjectName(QString::fromUtf8("lMode"));

        horizontalLayout_3->addWidget(lMode);

        bLancerDiapo = new QPushButton(centralwidget);
        bLancerDiapo->setObjectName(QString::fromUtf8("bLancerDiapo"));

        horizontalLayout_3->addWidget(bLancerDiapo);

        bArreterDiapo = new QPushButton(centralwidget);
        bArreterDiapo->setObjectName(QString::fromUtf8("bArreterDiapo"));

        horizontalLayout_3->addWidget(bArreterDiapo);

        bPrecedent = new QPushButton(centralwidget);
        bPrecedent->setObjectName(QString::fromUtf8("bPrecedent"));

        horizontalLayout_3->addWidget(bPrecedent);

        bSuivant = new QPushButton(centralwidget);
        bSuivant->setObjectName(QString::fromUtf8("bSuivant"));

        horizontalLayout_3->addWidget(bSuivant);


        verticalLayout->addLayout(horizontalLayout_3);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 711, 22));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuParam_tres = new QMenu(menubar);
        menuParam_tres->setObjectName(QString::fromUtf8("menuParam_tres"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setSizeGripEnabled(false);
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tres->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuFichier->addAction(acQuitter);
        menuParam_tres->addAction(acCharger);
        menuParam_tres->addAction(acVider);
        menuAide->addAction(acAproposde);

        retranslateUi(LecteurVue);
        QObject::connect(acQuitter, &QAction::triggered, LecteurVue, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        acQuitter->setText(QCoreApplication::translate("LecteurVue", "Quitter", nullptr));
        acCharger->setText(QCoreApplication::translate("LecteurVue", "Charger diaporama", nullptr));
        acVider->setText(QCoreApplication::translate("LecteurVue", "Enlever diaporama", nullptr));
        acAproposde->setText(QCoreApplication::translate("LecteurVue", "A propos de ...", nullptr));
        lTitreDiapo->setText(QCoreApplication::translate("LecteurVue", "titreDiapo", nullptr));
        lTitreImage->setText(QCoreApplication::translate("LecteurVue", "titre", nullptr));
        lCategorieImage->setText(QCoreApplication::translate("LecteurVue", "Cat\303\251gorie", nullptr));
        lRangImage->setText(QCoreApplication::translate("LecteurVue", "Rang", nullptr));
        lTotalNbImages->setText(QCoreApplication::translate("LecteurVue", "/TotalnbImages", nullptr));
        lImage->setText(QCoreApplication::translate("LecteurVue", "image", nullptr));
        lMode->setText(QCoreApplication::translate("LecteurVue", "Mode: Manuel", nullptr));
        bLancerDiapo->setText(QCoreApplication::translate("LecteurVue", "Lancer diaporama", nullptr));
        bArreterDiapo->setText(QCoreApplication::translate("LecteurVue", "Arreter Diaporama", nullptr));
        bPrecedent->setText(QCoreApplication::translate("LecteurVue", "Pr\303\251c\303\251dent", nullptr));
        bSuivant->setText(QCoreApplication::translate("LecteurVue", "Suivant", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tres", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
