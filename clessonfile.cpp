#include "clessonfile.h"

#include <QFile>
#include <QTextStream>

cLessonFile::cLessonFile()
{
}

cLessonFile::~cLessonFile()
{
}

void cLessonFile::setLessonFileName( const QString p_qsFileName )
{
    m_qsFileName = p_qsFileName;

    _createLessonFile();
}

void cLessonFile::_createLessonFile()
{
    QFile   qfFile( m_qsFileName );

    if ( !qfFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        return;

    QTextStream qtsOut( &qfFile );

    qtsOut << "//=============================================================================\n";
    qtsOut << "// KnowChek lesson file\n";
    qtsOut << "//-----------------------------------------------------------------------------\n";
    qtsOut << "// Please do not modify this file, unless you know what are you doing.\n";
    qtsOut << "// If you want to edit this file, please use the following format for the\n";
    qtsOut << "// new data lines:\n";
    qtsOut << "// Separator: tabulator\n";
    qtsOut << "// Columns:\n";
    qtsOut << "//      1   Question\n";
    qtsOut << "//      2   Answer\n";
    qtsOut << "//      3   Type of answer\n";
    qtsOut << "//          -> 1: Simple\n";
    qtsOut << "//          -> 2: Multiple - this case Answers are separated by comma\n";
    qtsOut << "//\n";
    qtsOut << "//=============================================================================\n";

    qfFile.close();
}
