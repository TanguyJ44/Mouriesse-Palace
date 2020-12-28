#include "client.h"
#include "time.h"
#include <iostream>
#include <random>

/* CONSTRUCTOR */

Client::Client() : cId(0), cFirstName(""), cLastName("")
{
}

Client::Client(std::string firstName, std::string lastName) : cFirstName(firstName), cLastName(lastName)
{
    createId();
}

Client::Client(const Client &other)
{
    cId = other.cId;
    cFirstName = other.cFirstName;
    cLastName = other.cLastName;
}

/* GETTER */

int Client::getId() const
{
    return cId;
}

std::string Client::getFirstName() const
{
    return cFirstName;
}

std::string Client::getLastName() const
{
    return cLastName;
}

/* SETTER */

void Client::setFirstName(const std::string firstName)
{
    cFirstName = firstName;
}

void Client::setLastName(const std::string lastName)
{
    cLastName = lastName;
}

/* METHODS */

void Client::createId()
{
    std::default_random_engine re(time(0));
    std::uniform_int_distribution<int> distrib{100000000, 999999999};

    cId = distrib(re);
}
