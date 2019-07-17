#include <eosiolib/eosio.hpp>

using namespace eosio;

CONTRACT helloworld: public contract{
    public:
        using contract::contract;

        ACTION hi(name user) {
            /* require_auth(user);*/
            check(has_auth(user), "mssing authority");
            print("HELLO.", user);
        }

    private:
}; 