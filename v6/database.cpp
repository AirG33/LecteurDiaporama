#include "database.h"

database::database()
{

}

bool database::openDatabase()
{
    m_db = QSqlDatabase::addDatabase(CONNECT_TYPE);
    m_db.setDatabaseName(DATABASE_NAME);
    return m_db.open();
}

void database::closeDataBase()
{
    this->m_db.close();
}

bool database::isAlreadyOpen()
{
    return this->m_db.isOpen();
}
