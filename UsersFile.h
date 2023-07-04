#ifndef USERSFILE_H
#define USERSFILE_H

#include "User.h"
#include "Markup.h"
#include "AncillaryMethods.h"

#include "XMLFile.h"
#include <vector>

using namespace std;

class UsersFile :public XmlFile
{

    void changePasswordInFile(int idOfLoggedInUser,string newPassword);

public:
    UsersFile(string filename);
    void addUserToFile(User user);
    vector <User> loadUsersFromFile();
    vector <User> changePasswordForLoggedUser(int idOfLoggedInUser,vector <User> users);

};

#endif
