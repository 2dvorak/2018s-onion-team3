#ifndef MESSAGE_H
#define MESSAGE_H

#include "common.h"

using namespace std;
using json = nlohmann::json;

namespace newmsg{
    class Message{
    public:
        Message();
        // for key
        Message(string id, string loginStatus, string IP, string githubID, string pubkey);
        virtual ~Message();
        // Socket Client
        void SendMessage();
        void RecvMessage();
        void SendKey();
        void RecvKey();

        // json setting
        void setBullian(string);
        void setIP(string);
        string getIP();
        void setContent(string);
        void setJason(json);
        void CheckMessage();
    private:
        // We have to make rules(Protocol)
        // +a // string attachment;
        json jason;
    };
}

#endif // MESSAGE_H
