#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";";
    cout << "amount:" << initial_deposit << ";";
    cout << "created" << "\n";
}

Account::Account() {
    _accountIndex = _nbAccounts++;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";";
    cout << "amount:" << _amount << ";";
    cout << "created" << "\n";
}

Account::~Account() {
    _nbAccounts--;
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";";
    cout << "amount:" << _amount << ";";
    cout << "closed" << "\n";
}

void Account::_displayTimestamp() {
    std::time_t result = std::time(nullptr);
    cout << "[" << result << "]";
}

void Account::displayAccountsInfos() {
    _displayTimestamp();
    cout << "accounts:" << _nbAccounts << ";";
    cout << "total:" << _totalAmount << ";";
    cout << "deposits:" << _totalNbDeposits << ";";
    cout << "withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";";
    cout << "p_amount:" <<  _amount << ";";
    cout << "deposit:" << deposit << ";";
    _amount += deposit;
    _totalAmount += deposit;
    cout << "amount:" << _amount << ";";
    _nbDeposits++;
    _totalNbDeposits++;
    cout << "nb_deposits:" << _nbDeposits << "\n";
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";";
    cout << "p_amount:" <<  _amount << ";";
    if (_amount < withdrawal) {
        cout << "withdrawal:refused" << "\n";
        return (false);
    } else {
        cout << "withdrawal:" << withdrawal << ";";
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        cout << "amount:" << _amount << ";";
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        cout << "nb_withdrawals:" << _nbWithdrawals << "\n";
    }
    return (true);
}

void Account::displayStatus() const {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";";
    cout << "amount:" << _amount << ";";
    cout << "deposits:" << _nbDeposits << ";";
    cout << "withdrawals:" << _nbWithdrawals << "\n";
}

int Account::getNbAccounts() {
    return 0;
}

int Account::getTotalAmount() {
    return 0;
}

int Account::getNbDeposits() {
    return 0;
}

int Account::getNbWithdrawals() {
    return 0;
}

int Account::checkAmount() const {
    return 0;
}