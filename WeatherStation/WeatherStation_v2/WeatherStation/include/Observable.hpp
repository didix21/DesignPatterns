#pragma once

#include <vector>
#include <algorithm>
#include "Observer.hpp"

class Observer;

class Observable
{
private:
  std::vector<Observer *> observers;
  bool changed = false;

public:
  Observable(){};
  ~Observable(){};

  void addObserver(Observer* observer);
  void deleteObserver(Observer* observer);

  void setChanged() { changed = true;}
  
  void notifyObservers();

private:
  std::vector<Observer *>::iterator indexOf(Observer *observer);
};