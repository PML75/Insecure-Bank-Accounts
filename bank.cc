#include "bank.h"
#include <map>

using namespace std;

std::string Bank::GetBankName() const
{
  return bank_name_;
}
std::map<int, Account> Bank::GetAccounts() const
{
  return accounts_;
}
int Bank::CreateAccount(const std::string &nAccount, double balance) 
{
  Account c1(nAccount, balance);
  int newId = GenerateAccountId();
  accounts_.insert({newId, c1});
  return newId;
}
int Bank::TotalAccounts() const
{
  return accounts_.size();
}
void Bank::DisplayBalances() const
{
  for (auto it = accounts_.begin(); it != accounts_.end(); it++)
    {
      Account curr_acc = it->second;
      cout << curr_acc.GetAccountHolder() << ": $" << curr_acc.GetBalance() << endl;
    }
}
void Bank::DeactivateAccount(int id)
{
  auto deactivate = accounts_.find(id);
  accounts_.erase(deactivate);
}
