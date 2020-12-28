#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client
{
    public:
        Client();
        Client(std::string firstName, std::string lastName);
        Client(const Client &other);

        int getId() const;
        std::string getFirstName() const;
        std::string getLastName() const;

        void setFirstName(const std::string firstName);
        void setLastName(const std::string lastName);

    private:
        int cId;
        std::string cFirstName;
        std::string cLastName;

        void createId();

};

#endif // CLIENT_H
