#include <eosiolib/eosio.hpp>

using namespace eosio;

CONTRACT helloworld: public contract{
    public:
        using contract::contract;

        ACTION hi(name user) {
           check(has_auth(get_self()) || has_auth("asmasmasmasm"_n),"FUCK YOU");
           /* name abc = name("sks123123123");
            get_self()
            check(has_auth(user), "DEFAULT");
            require_auth(get_self());  check( has_auth( get_self()), "you ain't a contract deployer!!"*)*/
            print("HELLO.", user);
        }

    private:
}; 