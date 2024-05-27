/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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

class Ui_lecteurvue
{
public:
    QAction *actionCharger_Diaporama;
    QAction *actionVitesse_de_defilement;
    QAction *actionEnlever_Diaporama;
    QAction *actionQuitter;
    QAction *actionA_propos_de;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gLayoutInfoImageDiapo;
    QHBoxLayout *hLayoutRang;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lRang;
    QLabel *lSlash;
    QLabel *lTotalImage;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *hLayoutTitreDiapo_2;
    QSpacerItem *horizontalSpacer;
    QLabel *lTitreDiapo;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *hLayoutTitreImage;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lTitreImage;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *lImage;
    QHBoxLayout *hLayoutMenuInter;
    QHBoxLayout *hLayoutChangerImage;
    QLabel *label;
    QHBoxLayout *hLayoutLancArretDiapo;
    QPushButton *bArreterDiapo;
    QPushButton *bLancerDiapo;
    QGridLayout *hLayoutFiltrage;
    QPushButton *bAvancer;
    QPushButton *bReculer;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuParam_tres;
    QMenu *menuA_propos_de;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *lecteurvue)
    {
        if (lecteurvue->objectName().isEmpty())
            lecteurvue->setObjectName("lecteurvue");
        lecteurvue->resize(762, 432);
        actionCharger_Diaporama = new QAction(lecteurvue);
        actionCharger_Diaporama->setObjectName("actionCharger_Diaporama");
        actionVitesse_de_defilement = new QAction(lecteurvue);
        actionVitesse_de_defilement->setObjectName("actionVitesse_de_defilement");
        actionEnlever_Diaporama = new QAction(lecteurvue);
        actionEnlever_Diaporama->setObjectName("actionEnlever_Diaporama");
        actionQuitter = new QAction(lecteurvue);
        actionQuitter->setObjectName("actionQuitter");
        actionA_propos_de = new QAction(lecteurvue);
        actionA_propos_de->setObjectName("actionA_propos_de");
        centralwidget = new QWidget(lecteurvue);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gLayoutInfoImageDiapo = new QGridLayout();
        gLayoutInfoImageDiapo->setObjectName("gLayoutInfoImageDiapo");
        hLayoutRang = new QHBoxLayout();
        hLayoutRang->setObjectName("hLayoutRang");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hLayoutRang->addItem(horizontalSpacer_5);

        lRang = new QLabel(centralwidget);
        lRang->setObjectName("lRang");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(9);
        lRang->setFont(font);

        hLayoutRang->addWidget(lRang);

        lSlash = new QLabel(centralwidget);
        lSlash->setObjectName("lSlash");
        lSlash->setFont(font);

        hLayoutRang->addWidget(lSlash);

        lTotalImage = new QLabel(centralwidget);
        lTotalImage->setObjectName("lTotalImage");
        lTotalImage->setFont(font);

        hLayoutRang->addWidget(lTotalImage);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hLayoutRang->addItem(horizontalSpacer_8);


        gLayoutInfoImageDiapo->addLayout(hLayoutRang, 3, 1, 1, 1);

        hLayoutTitreDiapo_2 = new QHBoxLayout();
        hLayoutTitreDiapo_2->setObjectName("hLayoutTitreDiapo_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hLayoutTitreDiapo_2->addItem(horizontalSpacer);

        lTitreDiapo = new QLabel(centralwidget);
        lTitreDiapo->setObjectName("lTitreDiapo");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(14);
        font1.setBold(true);
        lTitreDiapo->setFont(font1);

        hLayoutTitreDiapo_2->addWidget(lTitreDiapo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hLayoutTitreDiapo_2->addItem(horizontalSpacer_2);


        gLayoutInfoImageDiapo->addLayout(hLayoutTitreDiapo_2, 0, 1, 1, 1);

        hLayoutTitreImage = new QHBoxLayout();
        hLayoutTitreImage->setObjectName("hLayoutTitreImage");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hLayoutTitreImage->addItem(horizontalSpacer_3);

        lTitreImage = new QLabel(centralwidget);
        lTitreImage->setObjectName("lTitreImage");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(12);
        lTitreImage->setFont(font2);

        hLayoutTitreImage->addWidget(lTitreImage);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hLayoutTitreImage->addItem(horizontalSpacer_4);


        gLayoutInfoImageDiapo->addLayout(hLayoutTitreImage, 1, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutInfoImageDiapo->addItem(horizontalSpacer_6, 2, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutInfoImageDiapo->addItem(horizontalSpacer_7, 2, 2, 1, 1);

        lImage = new QLabel(centralwidget);
        lImage->setObjectName("lImage");
        lImage->setAlignment(Qt::AlignCenter);
        lImage->setOpenExternalLinks(false);

        gLayoutInfoImageDiapo->addWidget(lImage, 2, 1, 1, 1);


        verticalLayout->addLayout(gLayoutInfoImageDiapo);

        hLayoutMenuInter = new QHBoxLayout();
        hLayoutMenuInter->setObjectName("hLayoutMenuInter");
        hLayoutChangerImage = new QHBoxLayout();
        hLayoutChangerImage->setObjectName("hLayoutChangerImage");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        hLayoutChangerImage->addWidget(label);


        hLayoutMenuInter->addLayout(hLayoutChangerImage);

        hLayoutLancArretDiapo = new QHBoxLayout();
        hLayoutLancArretDiapo->setObjectName("hLayoutLancArretDiapo");
        bArreterDiapo = new QPushButton(centralwidget);
        bArreterDiapo->setObjectName("bArreterDiapo");

        hLayoutLancArretDiapo->addWidget(bArreterDiapo);

        bLancerDiapo = new QPushButton(centralwidget);
        bLancerDiapo->setObjectName("bLancerDiapo");

        hLayoutLancArretDiapo->addWidget(bLancerDiapo);


        hLayoutMenuInter->addLayout(hLayoutLancArretDiapo);

        hLayoutFiltrage = new QGridLayout();
        hLayoutFiltrage->setObjectName("hLayoutFiltrage");
        bAvancer = new QPushButton(centralwidget);
        bAvancer->setObjectName("bAvancer");

        hLayoutFiltrage->addWidget(bAvancer, 0, 1, 1, 1);

        bReculer = new QPushButton(centralwidget);
        bReculer->setObjectName("bReculer");

        hLayoutFiltrage->addWidget(bReculer, 0, 0, 1, 1);


        hLayoutMenuInter->addLayout(hLayoutFiltrage);


        verticalLayout->addLayout(hLayoutMenuInter);

        verticalLayout->setStretch(0, 1);
        lecteurvue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lecteurvue);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 762, 25));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName("menuFichier");
        menuParam_tres = new QMenu(menubar);
        menuParam_tres->setObjectName("menuParam_tres");
        menuA_propos_de = new QMenu(menubar);
        menuA_propos_de->setObjectName("menuA_propos_de");
        lecteurvue->setMenuBar(menubar);
        statusbar = new QStatusBar(lecteurvue);
        statusbar->setObjectName("statusbar");
        lecteurvue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParam_tres->menuAction());
        menubar->addAction(menuA_propos_de->menuAction());
        menuFichier->addAction(actionQuitter);
        menuParam_tres->addAction(actionCharger_Diaporama);
        menuParam_tres->addAction(actionVitesse_de_defilement);
        menuParam_tres->addAction(actionEnlever_Diaporama);
        menuA_propos_de->addAction(actionA_propos_de);

        retranslateUi(lecteurvue);

        QMetaObject::connectSlotsByName(lecteurvue);
    } // setupUi

    void retranslateUi(QMainWindow *lecteurvue)
    {
        lecteurvue->setWindowTitle(QCoreApplication::translate("lecteurvue", "lecteurvue", nullptr));
        actionCharger_Diaporama->setText(QCoreApplication::translate("lecteurvue", "Charger Diaporama", nullptr));
        actionVitesse_de_defilement->setText(QCoreApplication::translate("lecteurvue", "Vitesse de d\303\251filement", nullptr));
        actionEnlever_Diaporama->setText(QCoreApplication::translate("lecteurvue", "Enlever Diaporama", nullptr));
        actionQuitter->setText(QCoreApplication::translate("lecteurvue", "Quitter", nullptr));
        actionA_propos_de->setText(QCoreApplication::translate("lecteurvue", "A propos de ...", nullptr));
        lRang->setText(QCoreApplication::translate("lecteurvue", "Rang", nullptr));
        lSlash->setText(QCoreApplication::translate("lecteurvue", "/", nullptr));
        lTotalImage->setText(QCoreApplication::translate("lecteurvue", "nbTotalImages", nullptr));
        lTitreDiapo->setText(QCoreApplication::translate("lecteurvue", "Aucun Diapo charg\303\251", nullptr));
        lTitreImage->setText(QCoreApplication::translate("lecteurvue", "Titre Image", nullptr));
        lImage->setText(QString());
        label->setText(QCoreApplication::translate("lecteurvue", "Mode Manuel", nullptr));
        bArreterDiapo->setText(QCoreApplication::translate("lecteurvue", "Arr\303\252ter Diaporama", nullptr));
        bLancerDiapo->setText(QCoreApplication::translate("lecteurvue", "Lancer Diaporama", nullptr));
        bAvancer->setText(QCoreApplication::translate("lecteurvue", "Avancer", nullptr));
        bReculer->setText(QCoreApplication::translate("lecteurvue", "Reculer", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("lecteurvue", "Fichier", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("lecteurvue", "Param\303\250tres", nullptr));
        menuA_propos_de->setTitle(QCoreApplication::translate("lecteurvue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lecteurvue: public Ui_lecteurvue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
