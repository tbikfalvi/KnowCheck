#ifndef CLESSONFILE_H
#define CLESSONFILE_H

#include <QString>

class cLessonRecord
{
public:
    cLessonRecord();
    cLessonRecord( const QString p_qsQuestion,
                   const QString p_qsAnswer,
                   const int p_nAnswerType=1,
                   const QString p_qsSelection="" );
    ~cLessonRecord();

    QString     question() const;
    void        setQuestion( const QString p_qsQuestion );
    QString     answer() const;
    void        setAnswer( const QString p_qsAnswer );
    int         answerType() const;
    void        setAnswerType( const int p_nAnswerType=1 );
    QString     selection() const;
    void        setSelection( const QString p_qsSelection="" );

    QString     toString() const;

private:
    QString     m_qsQuestion;
    QString     m_qsAnswer;
    int         m_nAnswerType;
    QString     m_qsSelection;
};

class cLessonFile
{
public:
    cLessonFile();
    ~cLessonFile();

    void        setLessonFileName( const QString p_qsFileName );

private:

    void        _createLessonFile();

    QString     m_qsFileName;
};

#endif // CLESSONFILE_H
