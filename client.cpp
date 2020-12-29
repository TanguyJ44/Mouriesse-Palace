#include "client.h"
#include "time.h"
#include <iostream>
#include <random>

/* CONSTRUCTOR */

Client::Client()
{
}

Client::Client(int genre, int payment, int members, std::string firstName, std::string lastName, std::string phone,
               std::string email, std::string address, std::string city, std::string cp, std::string info)
                : cGenre(genre), cPayment(payment), cAssociateMembers(members), cFirstName(firstName), cLastName(lastName),
                  cPhoneNumber(phone), cEmail(email), cAddress(address), cCity(city), cCP(cp), cInfo(info)
{
    createId();
}

Client::Client(const Client &other)
{
    cId = other.cId;
    cGenre = other.cGenre;
    cPayment = other.cPayment;
    cAssociateMembers = other.cAssociateMembers;
    cFirstName = other.cFirstName;
    cLastName = other.cLastName;
    cPhoneNumber = other.cPhoneNumber;
    cEmail = other.cEmail;
    cAddress = other.cAddress;
    cCity = other.cCity;
    cCP = other.cCP;
    cInfo = other.cInfo;
}

Client::~Client()
{
}

/* GETTER */

int Client::getId() const
{
    return cId;
}

int Client::getGenre() const
{
    return cGenre;
}

int Client::getPayment() const
{
    return cPayment;
}

int Client::getAssociateMembers() const
{
    return cAssociateMembers;
}

std::string Client::getFirstName() const
{
    return cFirstName;
}

std::string Client::getLastName() const
{
    return cLastName;
}

std::string Client::getPhoneNumber() const
{
    return cPhoneNumber;
}

std::string Client::getEmail() const
{
    return cEmail;
}

std::string Client::getAddress() const
{
    return cAddress;
}

std::string Client::getCity() const
{
    return cCity;
}

std::string Client::getCP() const
{
    return cCP;
}

std::string Client::getInfo() const
{
    return cInfo;
}

/* SETTER */

void Client::setGenre(const int genre)
{
    cGenre = genre;
}

void Client::setPayment(const int payment)
{
    cPayment = payment;
}

void Client::setAssociateMembers(const int members)
{
    cAssociateMembers = members;
}

void Client::setFirstName(const std::string firstName)
{
    cFirstName = firstName;
}

void Client::setLastName(const std::string lastName)
{
    cLastName = lastName;
}

void Client::setPhoneNumber(const std::string phone)
{
    cPhoneNumber = phone;
}

void Client::setEmail(const std::string email)
{
    cEmail = email;
}

void Client::setAddress(const std::string address)
{
    cAddress = address;
}

void Client::setCity(const std::string city)
{
    cCity = city;
}

void Client::setCP(const std::string cp)
{
    cCP = cp;
}

void Client::setInfo(const std::string info)
{
    cInfo = info;
}

/* METHODS */

void Client::createId()
{
    std::default_random_engine re(time(0));
    std::uniform_int_distribution<int> distrib{100000000, 999999999};

    cId = distrib(re);
}
