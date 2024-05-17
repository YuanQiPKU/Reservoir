#ifndef PASSWORD_H
#define PASSWORD_H
#include<QString>
#endif // PASSWORD_H
// 密码应当在程序运行之初于文件中读取
class password{
private:
    QString _password;
    int _password_size;
public:
    static int password_count;
    password(QString set_password){
        ++password_count;
        _password = set_password;
        _password_size = _password.size();
    }
    bool password_validation(QString attempt_password){
        if(_password==attempt_password){
            return true;
        }return false;
    }
    int password_size(){
        return _password_size;
    }
    static int strength_calu(const QString& attempt_password){
        // 0-100

        return attempt_password.size()*10;
    }
};


