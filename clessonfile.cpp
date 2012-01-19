#include "clessonfile.h"

#include <QFile>
#include <QTextStream>


cLessonRecord::cLessonRecord()
{
    m_qsQuestion    = "";
    m_qsAnswer      = "";
    m_nAnswerType   = 1;
    m_qsSelection   = "";
}

cLessonRecord::cLessonRecord( const QString p_qsQuestion,
                              const QString p_qsAnswer,
                              const int p_nAnswerType,
                              const QString p_qsSelection )
{
    m_qsQuestion    = p_qsQuestion;
    m_qsAnswer      = p_qsAnswer;
    m_nAnswerType   = p_nAnswerType;
    m_qsSelection   = p_qsSelection;
}

cLessonRecord::~cLessonRecord()
{

}

QString cLessonRecord::question() const
{
    return m_qsQuestion;
}

void cLessonRecord::setQuestion( const QString p_qsQuestion )
{
    m_qsQuestion = p_qsQuestion;
}

QString cLessonRecord::answer() const
{
    return m_qsAnswer;
}

void cLessonRecord::setAnswer( const QString p_qsAnswer )
{
    m_qsAnswer = p_qsAnswer;
}

int cLessonRecord::answerType() const
{
    return m_nAnswerType;
}

void cLessonRecord::setAnswerType( const int p_nAnswerType )
{
    m_nAnswerType = p_nAnswerType;
}

QString cLessonRecord::selection() const
{
    return m_qsSelection;
}

void cLessonRecord::setSelection( const QString p_qsSelection )
{
    m_qsSelection = p_qsSelection;
}

QString cLessonRecord::toString() const
{
    QString     qsLine = "";

    qsLine.append( m_qsQuestion );
    qsLine.append( "\t" );
    qsLine.append( m_qsAnswer );
    qsLine.append( "\t" );
    qsLine.append( QString::number(m_nAnswerType) );
    qsLine.append( "\t" );
    qsLine.append( m_qsSelection );

    return qsLine;
}

//=============================================================================
cLessonFile::cLessonFile()
{
}

cLessonFile::~cLessonFile()
{
}

void cLessonFile::setLessonFileName( const QString p_qsFileName )
{
    m_qsFileName = p_qsFileName;
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
