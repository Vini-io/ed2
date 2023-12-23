
#ifndef FILEHANDLING_H
#define FILEHANDLING_H

#include <QString>
#include <fstream>
#include <sstream>
#include <QMessageBox>
#include <QTreeWidgetItem>
namespace VINI{
    class filehandling{
    public:
        filehandling();

        virtual bool treatment();

    };
}


#endif // FILEHANDLING_H

