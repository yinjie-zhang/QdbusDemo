#include "candidate.h"

candidate::candidate(QObject *parent) : QObject(parent)
{
    //监听signal
    company::interface *p_company; //该类是根据 .xml文件自动生成的  //此处一定要是指针
    //创建接口对象  company.recruitment" "/company/path" 是对方的 service name 和 object path
    p_company = new company::interface("company.recruitment","/company/path",
                                 QDBusConnection::sessionBus());
    //绑定Interface的信号到本地的槽
    connect(p_company,SIGNAL(recruitInfo(QString, QString)),
            this,SLOT(recruitInfoSlot(QString ,QString)));
}

candidate::~candidate()
{

}
void candidate::recruitInfoSlot(const QString &usr_name,const QString& info){
    qDebug()<<"-------------";
    qDebug()<<"candidate's name is "<<usr_name<<" recruit result "<<info;
}

//调用method
//这里体现出了DBusProxy的强大之处：通过调用本地成员就可以访问到远程应用的method
void candidate::setCandidateName(QString name){
    //创建接口对象
    company::interface m_company("company.recruitment","/company/path",
                                 QDBusConnection::sessionBus());
    //调用远程应用对象的method方法
    QDBusPendingReply<QString> reply = m_company.candidateName(name);
    //等待完成（默认是异步调用）
    reply.waitForFinished();
    if(reply.isValid()){ //如果method有返回值的话可以在reply中看到
        qDebug()<<"candidate's name is "<<reply.value();
    }
}

void candidate::setCandidateAge(int age){
    company::interface m_company("company.recruitment","/company/path",
                                 QDBusConnection::sessionBus());
    QDBusPendingReply<int> reply = m_company.candidateAge(age);
    reply.waitForFinished();
    if(reply.isValid()){
        qDebug("candidate's age is %d",reply.value());
    }
}

void candidate::setCandidateExpectSalary(double salary){
    company::interface m_company("company.recruitment","/company/path",
                                 QDBusConnection::sessionBus());
    QDBusPendingReply<double> reply = m_company.candidateExpectSalary(salary);
    reply.waitForFinished();
    if(reply.isValid()){
        qDebug()<<"candidate's salary is "<<reply.value();
    }
}

void candidate::setCandidateProfession(QString profession){
    company::interface m_company("company.recruitment","/company/path",
                                 QDBusConnection::sessionBus());
    QDBusPendingReply<QString> reply = m_company.candidateProfession(profession);
    reply.waitForFinished();
    if(reply.isValid()){
        qDebug()<<"candidate's profession is" <<reply.value();
    }
}
