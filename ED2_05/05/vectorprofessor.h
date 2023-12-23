#ifndef VECTORPROFESSOR_H
#define VECTORPROFESSOR_H



#include "professor.h"
#include <vector>
#include <algorithm>

#include <fstream>
#include <sstream>
#include <QMessageBox>

namespace VINI {


class VectorProfessor{

    public:

        std::vector<professor> vectorProf;

        void OrderMatricula();
        void OrderNome();
        void OrderDerpat();
        void OrderTitulacao();
        void Ordertype();
        void OrderDerpatTitNome();
        void OrderDerpatTypeNome();
        void addProfVector(professor prof);



    };
}
#endif // VECTORPROFESSOR_H
