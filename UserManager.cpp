#include "UserManager.h"

UserManager::UserManager(string filename)
    : usersFile(filename)
{
    idOfLoggedInUser = 0;
    users = usersFile.loadUsersFromFile();
}

void UserManager::registerUser()
{
    User user = enterNewUserData();

    users.push_back(user);
    usersFile.addUserToFile(user);

    cout << endl << "The account has been successfully created." << endl << endl;
    system("pause");
}

User UserManager::enterNewUserData()
{
    User user;

    user.setUserId(getNewUserId());

    system("cls");
    cout << " >>> REGISTRATION MENU <<<" << endl << endl;

    string login;
    do
    {
        cout << "Enter login: ";
        login = AncillaryMethods::getSingleLine();
        user.setLogin(login);
    }
    while (doesLoginExist(user.getLogin()) == true);

    string password;
    cout << "Enter password: ";
    password = AncillaryMethods::getSingleLine();

    user.setPassword(password);

    string name,surname;

    cout << "Enter name: ";
    name = AncillaryMethods::getSingleLine();
    name = AncillaryMethods::replaceFirstLetterUppercaseAndOtherLowercase(name);
    user.setName(name);

    cout << "Enter surname: ";
    surname = AncillaryMethods::getSingleLine();
    surname = AncillaryMethods::replaceFirstLetterUppercaseAndOtherLowercase(surname);
    user.setSurname(surname);

    return user;
}

int UserManager::getNewUserId()
{
    if (users.empty() == true)
        return 1;
    else
        return users.back().getUserId() + 1;
}

bool UserManager::doesLoginExist(string login)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].getLogin() == login)
        {
            cout << "This login is already taken." << endl;
            return true;
        }
    }
    return false;
}

void UserManager::listAllUsers()
{
    for(int i = 0; i < users.size(); i++)
    {
        cout << users[i].getUserId() << endl;
        cout << users[i].getLogin() << endl;
        cout << users[i].getPassword() << endl;
        cout << users[i].getName() << endl;
        cout << users[i].getSurname() << endl;
    }
    system("pause");
}


int UserManager::logIn()
{
    string login = "", password = "";

    cout << endl << "Enter login: ";
    login = AncillaryMethods::getSingleLine();

    for (int i = 0; i<users.size(); i++)
    {
        if (users[i].getLogin() == login)
        {
            for (int numberOfTest = 3; numberOfTest > 0; numberOfTest--)
            {
                cout << "Enter password. " << numberOfTest << " attempts left: ";
                password = AncillaryMethods::getSingleLine();

                if (users[i].getPassword() == password)
                {
                    cout << endl << "Welcome again " << users[i].getName() << " " << users[i].getSurname() << endl << endl;
                    system("pause");
                    idOfLoggedInUser = users[i].getUserId();
                    return idOfLoggedInUser;
                }
            }
            cout << "You've entered the wrong password 3 times." << endl;
            system("pause");
            return 0;
        }
    }
    cout << "User not found." << endl << endl;
    system("pause");
    return 0;
}

void UserManager::logOut()
{
    idOfLoggedInUser = 0;
}

void UserManager::changePasswordForLoggedUser()
{
    users = usersFile.changePasswordForLoggedUser(idOfLoggedInUser,users);
}


bool UserManager::isUserLoggedIn()
{
    if(idOfLoggedInUser == 0)
        return false;
    else
        return true;
}

int UserManager::getLoggedInUserId()
{
    return idOfLoggedInUser;
}
