#include <iostream>
#include <map>
#include <vector>

#include "bank.h"

int main() {
  Bank chase("phuphu");

  int id = chase.CreateAccount("Tuffy", 121.00);
  chase.CreateAccount("Frank", 1234.56);
  chase.CreateAccount("Oreo", 140.12);

  chase.DeactivateAccount(id);

  chase.DisplayBalances();
}
