#ifndef CONST
#define CONST
class CONSTANTS{
    public: 
        static constexpr int ROADCOST[5] = {0,0,0,1,1};
        static constexpr int BASEMENTCOST[5] = {1,1,1,0,1};
        static constexpr int HOUSECOST[5] = {0,0,2,3,0};
        static constexpr int TOWERCOST[5] = {3,2,2,1,2};
        static const int RESOURCE = 100;
        static const int RESOURCETYPE = 5;
        static const int ROADCOMMAND = 2;
};
#endif