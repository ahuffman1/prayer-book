#pragma once

#include <string>

namespace prayerbook
{
    /*
    Class modeling a user of the application.
    */
    class User
    {
        public:
        User() = default;
        
        User(const std::string& name):
            _name(name) {}

        const std::string& getName() { return _name; }

        void setName(const std::string& name) { _name = name;}


        private:
        std::string _name = "";


    };
}