#include <iostream>
#include <vector>
#include <stdint.h>

class Numbers{
private:
        uint64_t Oi;
        uint64_t Lads;
        uint64_t Ahoy;
public:
        Numbers(uint64_t oi, uint64_t lads, uint64_t ahoy) {
                Oi = oi;
                Lads = lads;
                Ahoy = ahoy;
        };

        bool info() {
                return (Oi > Lads) && (Oi-Lads < Ahoy);
        };
};


int main(){
	Numbers test(754, 550, 400);
	std::cout << test.info() << std::endl;
};
