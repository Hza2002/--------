#ifndef _DOCTOR_H
#define _DOCTOR_H

#define DOCTORMAX 5000

// 医生信息
typedef struct {
  long long id;       // 医生唯一ID编号
  char name[20];      // 姓名
  char hospital[80];  // 所属医院
} Doctor;
Doctor doctors[DOCTORMAX];

// 读取 DoctorPath 中的数据到结构体，成功返回0，失败-1
int ReadDoctor();

// 将结构体写入文件，成功返回0，失败-1
int WriteDoctor();

// 增加医生信息，成功返回0，失败-1
int AddDoctor();

// 删除医生信息，成功返回0，失败-1
int DeleteDoctor();

// 查找医生信息
void SearchDoctor(long long id);

// 修改医生信息
void EditDoctor(long long id);

#endif
