
#include <QFile>
#include <QTextStream>

#include "clessonrecord.h"
#include "clessonfile.h"


//=============================================================================
cLessonFile::cLessonFile()
{
}

cLessonFile::~cLessonFile()
{
}

void cLessonFile::setLessonFileName( const QString &p_qsFileName )
{
    m_qsFileName = p_qsFileName;
}

void cLessonFile::addNewLessonRecord( const QString &p_qsQuestion,
                                      const QString &p_qsAnswer,
                                      const int p_nAnswerType,
                                      const QString &p_qsSelection )
{
    cLessonRecord   obRecord( p_qsQuestion, p_qsAnswer, p_nAnswerType, p_qsSelection );
}

void cLessonFile::addNewLessonRecord( const cLessonRecord &p_lrRecord )
{

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
    qtsOut << "//          -> 2: Multiple - this case possible Answers are separated by commas\n";
    qtsOut << "//                and one of the answer is acceptable\n";
    qtsOut << "//          -> 3: Multiple defined - this case possible Answers are separated by\n";
    qtsOut << "//                commas and Selection will give order numbers separated by commas\n";
    qtsOut << "//                of required answers\n";
    qtsOut << "//          -> 4: Selection - this case possible Answers are separated by commas\n";
    qtsOut << "//                and the answers will appeare and the user must select the correc\n";
    qtsOut << "//                answer that defined in Selection separated by commas if more than\n";
    qtsOut << "//                one good answer exists\n";
    qtsOut << "//      4   Selection -> described above\n";
    qtsOut << "//-----------------------------------------------------------------------------\n";
    qtsOut << "//\n";
    qtsOut << "//=============================================================================\n";

    qfFile.close();
}
