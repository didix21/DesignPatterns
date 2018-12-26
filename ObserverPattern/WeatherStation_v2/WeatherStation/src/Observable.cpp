#include "Observable.hpp"

void Observable::addObserver(Observer *observer)
{
    observers.push_back(observer);
}

void Observable::deleteObserver(Observer *observer)
{
    auto index = indexOf(observer);

    if(index != observers.end())
        observers.erase(index);
}

std::vector<Observer *>::iterator Observable::indexOf(Observer *observer)
{
    return std::find(observers.begin(), observers.end(), observer);
}

void Observable::notifyObservers()
{
    if(changed)
    {
        for(auto observer : observers)
        {
            observer->update(this);
        }

        changed = false;
    }
}
