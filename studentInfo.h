#ifndef STUDENTINFO_H
#define STUDENTINFO_H


#include <QString>

class studentInfo
{
public:
    studentInfo();

    QString getId() const;
    void setId(const QString &value);

    QString getName() const;
    void setName(const QString &value);

    int getSex() const;
    void setSex(int value);

    int getAge() const;
    void setAge(int value);

    QString getClassname() const;
    void setClassname(const QString &value);

    QString getCoursedate() const;
    void setCoursedate(const QString &value);

    int getCoursenum() const;
    void setCoursenum(int value);

    QString getCoursename() const;
    void setCoursename(const QString &value);

    QString getCoursetype() const;
    void setCoursetype(const QString &value);

    double getCredit() const;
    void setCredit(double value);

    QString getCourselauchtime() const;
    void setCourselauchtime(const QString &value);

    bool setData(QString Id,
    QString Name,
    int sex,
    int age,
    QString classname,
    QString coursedate,
    int coursenum,
    QString coursename,
    QString coursetype,
    double credit,
    QString courselauchtime
    );

private:
    QString Id;
    QString Name;
    int sex;
    int age;
    QString classname;
    QString coursedate;
    int coursenum;
    QString coursename;
    QString coursetype;
    double credit;
    QString courselauchtime;
};

#endif // STUDENTINFO_H
