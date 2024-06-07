#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

#define DATABASE_NAME "rgentil_bd_diapo" // Le nom du DSN permettant d'accéder à la BD
#define CONNECT_TYPE "QODBC" // Indique que l'on veut utiliser le driver odbc

class database
{
public:
    database();
    bool openDatabase();
    void closeDataBase();
    bool isAlreadyOpen();

private :
    QSqlDatabase m_db;
};

#endif // DATABASE_H
