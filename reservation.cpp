#include "reservation.h"
#include "time.h"
#include <iostream>
#include <random>

/* CONSTRUCTOR */

Reservation::Reservation()
{
}

Reservation::Reservation(int clientId, int onlyId, std::string type, std::string clientName,
                         std::string startDateTime, std::string endDateTime)
                : rClientId(clientId), rOnlyId(onlyId), rType(type), rClientName(clientName),
                  rStartDateTime(startDateTime), rEndDateTime(endDateTime)
{
    createId();
}

Reservation::Reservation(const Reservation &other)
{
    rId = other.rId;
    rType = other.rType;
    rClientId = other.rClientId;
    rOnlyId = other.rOnlyId;
    rClientName = other.rClientName;
    rStartDateTime = other.rStartDateTime;
    rEndDateTime = other.rEndDateTime;
}

Reservation::~Reservation()
{
}

/* GETTER */

int Reservation::getId() const
{
    return rId;
}

int Reservation::getClientId() const
{
    return rClientId;
}

int Reservation::getOnlyId() const
{
    return rOnlyId;
}

std::string Reservation::getType() const
{
    return rType;
}

std::string Reservation::getName() const
{
    return rClientName;
}

std::string Reservation::getStartDateTime() const
{
    return rStartDateTime;
}

std::string Reservation::getEndDateTime() const
{
    return rEndDateTime;
}

/* SETTER */

void Reservation::setClientId(const int clientId)
{
    rClientId = clientId;
}

void Reservation::setOnlyId(const int onlyId)
{
    rOnlyId = onlyId;
}

void Reservation::setType(const std::string type)
{
    rType = type;
}

void Reservation::setName(const std::string clientName)
{
    rClientName = clientName;
}

void Reservation::setStartDateTime(const std::string startDateTime)
{
    rStartDateTime = startDateTime;
}

void Reservation::setEndDateTime(const std::string endDateTime)
{
    rEndDateTime = endDateTime;
}

/* METHODS */

void Reservation::createId()
{
    std::default_random_engine re(time(0));
    std::uniform_int_distribution<int> distrib{1000, 9999};

    rId = distrib(re);
}
