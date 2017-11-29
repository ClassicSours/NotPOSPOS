#ifndef _REGISTERCONTROLLER_H_
#define _REGISTERCONTROLLER_H_
#include "cashierView.h"
#include "StoreInventory.h"
#include "order.h"
#include "ObserverPattern.cpp"

class registerController : public IObserver
{
private:
  StoreInventory *database;
  order *cart;
  cashierView screen;
  Observable * observers;
public:
  registerController(StoreInventory *, order *);
  void processOrder(Observable *);
  void update();
};

#endif
