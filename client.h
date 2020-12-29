#ifndef CLIENT_H
#define CLIENT_H

#include <string>

class Client
{
    public:
        Client();
        Client(int genre, int payment, int members, std::string firstName, std::string lastName,
               std::string phone, std::string email, std::string address, std::string city,
               std::string cp, std::string info);
        Client(const Client &other);
        ~Client();

        int getId() const;
        int getGenre() const;
        int getPayment() const;
        int getAssociateMembers() const;
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getPhoneNumber() const;
        std::string getEmail() const;
        std::string getAddress() const;
        std::string getCity() const;
        std::string getCP() const;
        std::string getInfo() const;

        void setGenre(const int genre);
        void setPayment(const int payment);
        void setAssociateMembers(const int members);
        void setFirstName(const std::string firstName);
        void setLastName(const std::string lastName);
        void setPhoneNumber(const std::string phone);
        void setEmail(const std::string email);
        void setAddress(const std::string address);
        void setCity(const std::string city);
        void setCP(const std::string cp);
        void setInfo(const std::string info);

    private:
        int cId;
        int cGenre;
        int cPayment;
        int cAssociateMembers;
        std::string cFirstName;
        std::string cLastName;
        std::string cPhoneNumber;
        std::string cEmail;
        std::string cAddress;
        std::string cCity;
        std::string cCP;
        std::string cInfo;

        void createId();

};

#endif // CLIENT_H
