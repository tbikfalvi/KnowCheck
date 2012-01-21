#include "clessonrecord.h"

cLessonRecord::cLessonRecord()
{
    m_qsQuestion    = "";
    m_qsAnswer      = "";
    m_nAnswerType   = 1;
    m_qsSelection   = "";
}

cLessonRecord::cLessonRecord( const QString &p_qsQuestion,
                              const QString &p_qsAnswer,
                              const int p_nAnswerType,
                              const QString &p_qsSelection )
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

void cLessonRecord::setQuestion( const QString &p_qsQuestion )
{
    m_qsQuestion = p_qsQuestion;
}

QString cLessonRecord::answer() const
{
    return m_qsAnswer;
}

void cLessonRecord::setAnswer( const QString &p_qsAnswer )
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

void cLessonRecord::setSelection( const QString &p_qsSelection )
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

