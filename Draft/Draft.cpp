// Draft.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h" // cái gì đây lạ hè :v
#include <iostream>
#pragma once

#include<iostream>
using namespace std;
namespace Truong
{
	void SapXepMangTang(int *a, int n);
	void SapXepMangGiam(int *a, int n);
	int KiemTraSoNguyenTo(int x);
	int KiemTraSoChinhPhuong(int x);
	int KiemTraSoHoanThien(int x);
}
#include <string>
// có lỗi rồi, phải add Lib.cpp vô project đang muốn dùng thư viện mới chuẩn
// không add Lib.cpp vô nó sẽ không nhận ra 
// khi #include Lib.h, nó sẽ tương đương với copy paste, như này
// bản chất #include là vậy. 
// mà như m thấy thì file .h chỉ có khai báo hàm, không có định nghĩa
// lỗi unresolved externals là có hàm nào đó khai báo mà k có định nghĩa
// đọc thì đó là hàm Truong::KiemTraSoNguyenTo(int)
// ủa có định nghĩa mà sao k có compiler ngu à?
// nhưng mà mình chưa add vô project nên nó k thấy á

// nên nếu dùng thư viện 2 file .h.cpp cho dễ quản lý thì khi dùng thư viện nhớ add.cpp không cần add .h vì đã #include rồi
// hết r
// ê mà sao nãy m ko test trên empty project mà lại vô conslole
// t nghĩ nó ghi sẵn hàm main include <iostream> sẵn thôi chứ cũng k có nhiều lợi ích lắm
// t nghĩ có gì đó chớ
// mà kĩ năng m search ghê thật đấy
// mấy cái này hồi kì 2 t gặp r nhớ lại thôi, cái nào quên search lại
// chứ hồi mấy cái bé xíu t search 1 ngày xàm lắm
// mà mỗi lần gặp lỗi, t search tiếng việt nó ko ra :((
// tập search tiếng anh thử đi :v 

// search tiếng anh nói chứ cũng k hẳn là ra luôn, mấy cái lúc nãy là do t search trước đây r chứ hồi lần đầu t search, cugnx bằng tiếng anh, cũng cả ngày k ra á ~.~`
// lam nhieu thi quen a
// chuẩn r, hồi đó k hiểu sao t đam mê nên thấy thích chứ k thấy cực
// giờ m hỏi t bắt đầu thích thích lại lập trình r đó :v
// :)) code lại đi, có gì t còn hỏi nữa
// mà nếu code lại t cũng code C# mà -,-
// sang kì 2 t theo web (Javascript) luôn :))
// mà sao m học C++ vậy? k học Java m theo mobile mà
// học cơ bản thôi hay sao?
// t tính kì này làm hết 500 bài tập c++
// lấy căn bản tí, mà giờ gặp nhiều vấn đề quá, mấy cái như rồi đấy, còn không biết cách giải quyết
// nên t nghĩ học chắc cái này đã, rồi học cái nn mới sau
// uk nếu không biết thì lên mấy group lập trình mà hỏi
// đầu tiên thì tự search tiếng anh đã, sau đó lên group hỏi
// m học tới 1 mức độ mà m nghĩ m thỏa mãn cảm giác như đã nắm được căn bản rồi thì học ngôn ngữ chính của m
// mỗi ngôn ngữ có một đặc điểm riêng mà 
//ờ, giờ t vừa làm bt, vừa đọc trên cái trang learn.cpp ấy, thấy cũng hay,
// mà chưa gặp phải vấn đề như hôm nay :((
// ờ mà mấy cái này cos thể chỉ là của C++, nếu sau này m k dùng C++ thì k cần phải stress quá
// ờ, thấy nhiều cái mình ko biết gì hết
//:((
// uk nay k thi Mác à?
// t học KTMT nữa :((
// thi xong phải học hành nghiêm túc lại các môn ở trường mới được,
// hôm bữa t đăng lên group lớp là t chán học LTTQ, có thằng bạn kêu vô nhóm nó,
// phải nghiêm túc học chứ k mất mặt được :))
// rồi sang kì 2 chuyển qua CNTT rồi t tự do học Javascript luôn
// với còn việc trong CLB nữa chứ ~~
// chieu t mới thi, tí nữa đọc lại giáo trình, rồi xem mấy cái ví dụ nữa
// cố hết kì này học ổn cơ bản, sang kì tới học java :))
// phải học hành cho nhiêm túc
// mà cũng nên có gì đó làm cho cuộc sống thêm hương vị
// chớ học không cũng hơi chán đó, 1 ngày dành ra nhiêu phút đó cho cái này cái kia mình hứng thú đam mê
// :))
//uk kế  hoạch chuẩn đó, kì này cày căn bản, kì sau học cái mình thích, giống t :))
// ờ, mà cảm ơn m nhiều nha, buổi hôm nay t nhận ra được nhiều điều mới mẻ lắm
// hôm nay ko có m chắc giờ t đang suy nghĩ mọi thứ theo hướng khác rồi
//:))
// kk thank you for your nice words (compliment)
// cũng nhờ cái này mà t cảm giác thích thích lại lập trình :))
// cái kiểu là động tới những cái thế mạnh của m á, là m chứng tỏ được khả năng của mình
// chứng minh được quá trình học tập của m 
//:))
// uk đúng v thấy yêu đơih hơn :v
// ok vậy nha, cảm ơn m lần nữa
// đi ôn bài thôi, chớ ko :((oke  bye bye bye

string TrueFalse(int number)
{
	return (number == 0) ? "False" : "True";
}
int main()
{
	using namespace Truong;
	cout << TrueFalse(KiemTraSoNguyenTo(2)) << endl;
	// Toan tu cout << "string" trong cai file <string> nen chua include khong cout duoc :3
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
