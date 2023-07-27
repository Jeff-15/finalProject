#ifndef CONST
#define CONST
#include <string>
class CONSTANTS{
    public: 
        static constexpr int ROADCOST[5] = {0,0,0,1,1};
        static constexpr int BASEMENTCOST[5] = {1,1,1,0,1};
        static constexpr int HOUSECOST[5] = {0,0,2,3,0};
        static constexpr int TOWERCOST[5] = {3,2,2,1,2};
        static const int RESOURCE = 100;
        static const int RESOURCETYPE = -200;
        static const int ROADCOMMAND = 2;
        static const int BASEMENTCOMMAND = 3;
        static const int IMPROVECOMMAND = 4;
<<<<<<< HEAD
        static const int TRADECOMMAND = 5;     

=======
        static const int TRADECOMMAND = 5; 
        static int get_resource_code(std::string s) {
            if (s == "BRICK") {
                return 100;
            } else if (s == "ENERGY") {
                return 101;
            } else if (s == "GLASS") {
                return 102;
            } else if (s == "HEAT") {
                return 103;
            } else {
                return 104;
            }
        }
>>>>>>> main
};
#endif
