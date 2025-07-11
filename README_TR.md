# Guess The Number Game / Sayıyı Tahmin Etme Oyunu

---

## Türkçe Açıklama

Bu program, kullanıcının 1 ile 100 arasında bir sayı seçip, bilgisayarın rastgele seçtiği sayıyla karşılaştırdığı basit bir "Sayıyı Tahmin Etme" oyunudur.

### Nasıl çalışır?

- Kullanıcıdan 1 ile 100 arasında bir sayı girmesi istenir.
- Girilen sayı geçerli değilse (1-100 aralığında değilse), kullanıcıdan tekrar doğru bir sayı girmesi istenir.
- Program, bilgisayarın 1 ile 100 arasında rastgele bir sayı seçmesini sağlar.
- Kullanıcının girdiği sayı ile rastgele sayı karşılaştırılır.
- Eğer sayılar eşitse, kullanıcı tebrik edilir.
- Eşit değilse, kullanıcı yanlış tahminde bulunmuş olur.

### Gereksinimler

- C++ derleyicisi (g++ veya başka bir derleyici)

### Programı çalıştırmak için

```bash
g++ sayitahminoyunu.cpp -o sayitahminoyunu
./sayitahminoyunu
