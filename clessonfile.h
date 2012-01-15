#ifndef CLESSONFILE_H
#define CLESSONFILE_H

#include <QString>

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
