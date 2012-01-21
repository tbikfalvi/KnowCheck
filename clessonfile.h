
#ifndef CLESSONFILE_H
#define CLESSONFILE_H

#include <QString>
#include <vector>

#include "clessonrecord.h"

class cLessonFile
{
public:
    cLessonFile();
    ~cLessonFile();

    void                    setLessonFileName( const QString &p_qsFileName );
    void                    addNewLessonRecord( const QString &p_qsQuestion,
                                                const QString &p_qsAnswer,
                                                const int p_nAnswerType=1,
                                                const QString &p_qsSelection="" );
    void                    addNewLessonRecord( const cLessonRecord &p_lrRecord );

private:

    void                    _createLessonFile();

    vector<cLessonRecord*>  m_obRecords;
    QString                 m_qsFileName;
};

#endif // CLESSONFILE_H
