#pragma once

#include <string>
#include "user.h"

namespace prayerbook
{
    /*
    Models a prayer request submitted by a user.
    */
    class Request
    {
        public:
        Request() = default;

        Request(const User& sender, const std::string& content, const bool isAnonymous = false):
            _sender(sender), _content(content), _anon(isAnonymous) {}

        const User& getSender() { return _sender; }
        const std::string& getContent() { return _content; }
        const bool& isAnonymous() { return _anon; }

        void setSender(const User& sender) { _sender = sender; }
        void setContent(const std::string& content) { _content = content; }
        void setAnonymous(const bool& isAnonymous) { _anon = isAnonymous; }

        private:
        User _sender;
        std::string _content = "";
        bool _anon = false;

    };
}