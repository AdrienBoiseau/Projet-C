#include<stdio.h>
#include<sqlite3.h>

int open_db(sqlite3 *db)
{
    return sqlite3_open("database.db", &db);
}

int main(int argc, char* argv[])
{
    sqlite3 *db;
    
    if(open_db(db) == 0) {
        printf("connexion ouverte");
    } else {
        printf("erreur de connexion");
    }
    
    sqlite3_close(db);
    
    return 0;
}


