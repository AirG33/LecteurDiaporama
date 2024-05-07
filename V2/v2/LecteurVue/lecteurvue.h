#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();

public slots :
    void demanderAvancer();
    void demanderReculer();
    void demanderLancer();
    void demanderArret();
    void on_acCharger_triggered();
    void on_acVider_triggered();
    void on_acQuitter_triggered();
    void on_acAproposde_triggered();

private:
    Ui::LecteurVue *ui;

};
#endif // LECTEURVUE_H
