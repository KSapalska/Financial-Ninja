#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include "User.h"
#include "UsersFile.h"
#include "AncillaryMethods.h"

using namespace std;

class UserManager
{
    int idOfLoggedInUser;
    vector <User> users;
    UsersFile usersFile;

    User enterNewUserData();
    int getNewUserId();
    bool doesLoginExist(string login);

public:
    UserManager(string filename);
    void registerUser();
    void listAllUsers();
    int logIn();
    int getLoggedInUserId();
    bool isUserLoggedIn();
    void logOut();
    void changePasswordForLoggedUser();
};

#endif
