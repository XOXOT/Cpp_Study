# π» C++ νμ΅ λ¦¬νΌμ§ν λ¦¬ π»
##### π μ΄ν C++ νλ‘κ·Έλλ° π
___ 
#### 1μ₯ - [Cμμ C++λ‘μ μ ν](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter1(%EC%9B%8C%EB%B0%8D%EC%97%85))
#### 2μ₯ - [CμΈμ΄ κΈ°λ°μ C++](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter2(%EC%9B%8C%EB%B0%8D%EC%97%852))
#### 3μ₯ - [κ°μ²΄μ§ν₯μ λμ(ν΄λμ€)](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter3(%ED%81%B4%EB%9E%98%EC%8A%A4))
#### 4μ₯ - [ν΄λμ€μ νμ₯](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter4(%ED%81%B4%EB%9E%98%EC%8A%A4%20%ED%99%95%EC%9E%A5))
#### 5μ₯ - [λ³΅μ¬ μμ±μ](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter5(%EB%B3%B5%EC%82%AC%EC%83%9D%EC%84%B1%EC%9E%90))
#### 6μ₯ - [friend, static, const](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter6(friend%2C%20static%2C%20const))
#### 7μ₯ - [μμμ μ΄ν΄](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter7(%EC%83%81%EC%86%8D))
#### 8μ₯ - [μμκ³Ό λ€νμ±](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter8(%EC%83%81%EC%86%8D%EA%B3%BC%20%EB%8B%A4%EC%96%91%EC%84%B1))
#### 9μ₯ - [κ°μμ μλ¦¬μ λ€μ€μμ](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter9(%EA%B0%80%EC%83%81%EC%9D%98%20%EC%9B%90%EB%A6%AC%EC%99%80%20%EB%8B%A4%EC%A4%91%EC%83%81%EC%86%8D))
#### 10μ₯ - [μ°μ°μ§ μ€λ²λ‘λ©1](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter10(%EC%97%B0%EC%82%B0%EC%A7%80%20%EC%98%A4%EB%B2%84%EB%A1%9C%EB%94%A9)) 
#### 11μ₯ - [μ°μ°μ§ μ€λ²λ‘λ©2](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter11(%EC%97%B0%EC%82%B0%EC%9E%90%20%EC%98%A4%EB%B2%84%EB%A1%9C%EB%94%A92)) 
#### 12μ₯ - [String ν΄λμ€μ λμμΈ](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter12(String%20%ED%81%B4%EB%9E%98%EC%8A%A4%EC%9D%98%20%EB%94%94%EC%9E%90%EC%9D%B8))
#### 13μ₯ - [ννλ¦Ώ1](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter13%20(%ED%85%9C%ED%94%8C%EB%A6%BF)) 
#### 14μ₯ - [ννλ¦Ώ2](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter14(%ED%85%9C%ED%94%8C%EB%A6%BF-2))
#### 15μ₯ - [μμΈμ²λ¦¬](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter15(%EC%98%88%EC%99%B8%EC%B2%98%EB%A6%AC))
#### 16μ₯ - [νλ³ν μ°μ°μ](https://github.com/XOXOT/Cpp_Study/tree/main/Cpp_Study/Chapter16(%ED%98%95%EB%B3%80%ED%99%98%20%EC%97%B0%EC%82%B0%EC%9E%90))
___ 
## βπ» Test βπ»
#### [πTest μ½λνμΌ](https://github.com/XOXOT/Cpp_Study/blob/main/Cpp_Study/Chapter16(%ED%98%95%EB%B3%80%ED%99%98%20%EC%97%B0%EC%82%B0%EC%9E%90)/%ED%8F%89%EA%B0%80.cpp)

```
step1.Base class : class Product

step2.Derived class : class Book, class CD, class Cellphone

step3.Base class λ©€λ²λ³μ : int price, string description(μΆκ° κ°λ₯)

step4.Derived class λ©€λ²λ³μ 
	- class Book : string title, string writer, string publisher
	- class CD : string title, strint singer(μΆκ° κ°λ₯)

step5.getProduct() λ©€λ²ν¨μ μ€λ²λΌμ΄λ©.

step6.  1. μνμΆκ°  2. μνμ‘°ν  3. μ’λ£ λ₯Ό κΈ°λ³Έ POS λ©μΈμ°½μ λμ μ νμ λ°λΌ λμ κ΅¬ν (μνμ­μ  λ©λ΄ μΆκ° κ°λ₯)

step7.κ°μ²΄ν¬μΈν° λ°°μ΄  Product * pobj [[100]μ¬μ©νμ¬ λμ ν λΉ static λ©€λ²λ³μ idx, vector μ»¨νμ΄λ μ¬μ©
```

### <λ©μΈνλ©΄>
![Test](https://github.com/XOXOT/Cpp_Study/blob/main/img/%EB%A9%94%EC%9D%B8%20%ED%99%94%EB%A9%B4.png)

### <μνμΆκ°>
![Test](https://github.com/XOXOT/Cpp_Study/blob/main/img/%EC%83%81%ED%92%88%EC%B6%94%EA%B0%80.png)

### <μνμ‘°ν>
![Test](https://github.com/XOXOT/Cpp_Study/blob/main/img/%EC%83%81%ED%92%88%20%EC%A1%B0%ED%9A%8C.png)


## [πBACK](https://github.com/XOXOT?tab=repositories)
