#include "User.hpp"

void show_contact(User user) {
    cout << "Firstname: " << user.getFirstName() + "\n";
    cout << "Lastname: " << user.getLastName() + "\n";
    cout << "Nickname: " << user.getNickName() + "\n";
    cout << "Phone: " << user.getPhone() + "\n";
    cout << "Secret: " << user.getSecret() + "\n";
}

void add_f(User* userArray[]) {
    int g_index = 0;

    while (userArray[g_index] != NULL)
        g_index++;

    g_index = (g_index > 9) ? 9 : g_index;

    userArray[g_index] = new User();
    cout << "* Let's fill the information about a new contact! *\n";
    cout << "Firstname: ";
    userArray[g_index]->setFirstName(getInput());
    cout << "Lastname: ";
    userArray[g_index]->setLastName(getInput());
    cout << "Nickname: ";
    userArray[g_index]->setNickName(getInput());
    cout << "Phone: ";
    userArray[g_index]->setPhone(getInput());
    cout << "Secret: ";
    userArray[g_index]->setSecret(getInput());
    cout << "* DONE *\n";
}

void search_f(User* userArray[]) {
    int i = 0;
    int input_index;
    string input;

    cout << "     index|" << "first name|" << " last name|" << "  nickname|";
    while (userArray[i] != NULL) {
        string index = std::to_string(i + 1);
        cout << "\n";
        cout << parseString(index) << "|";
        cout << parseString(userArray[i]->getFirstName()) << "|";
        cout << parseString(userArray[i]->getLastName()) << "|";
        cout << parseString(userArray[i]->getNickName()) << "|";
        i++;
        if (i > 9)
            break;
    }
    while (true) {
        cout << "\nType index of contact you need. " << "Type 0 to go to main menu\n";
        input = getInput();
        try {
            input_index = std::stoi(input);
        } catch (std::invalid_argument& e) {
            cout << "Bad index\n";
            break;
        } catch (std::out_of_range& e) {
            cout << "Bad index\n";
            break;
        }
        if (input_index < 11 && input_index > 0 && userArray[input_index - 1] != NULL) {
            show_contact(*userArray[input_index - 1]);
        } else if (input_index == 0)
            break;
        else
            cout << "There is no contant with such id";
    }
}

int main() {
    User* userArray[10];
    string input;

    for (int i = 0; i < 10; i++)
        userArray[i] = NULL;

    while (true) {
        cout << "* MAIN MENU *\n";
        input = getInput();
        if (input == "EXIT") {
            break;
        } else if (input == "ADD") {
            add_f(userArray);
        } else if (input == "SEARCH") {
            search_f(userArray);
        } else {
            cout << "Unknown command. Exiting...\n";
            break;
        }
    }
    return 0;
}
