#ifndef NUNUSER_H
#define NUNUSER_H
#include <QString>

namespace VINI{

    class nunuser{
    private:
        int tam;
        int *array;
    public:
        nunuser(int tamP);
        ~nunuser();
    };

}
#endif // NUNUSER_H
