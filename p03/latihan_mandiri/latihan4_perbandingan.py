# Latihan 4: Perbandingan ekspresi C++ dan Python
# Pada C++, pembagian int / int akan membuang pecahan (truncation ke arah nol).
# Pada Python, operator / selalu menghasilkan float, sedangkan // membuang pecahan ke bawah (floor division).

print("=== Hasil Ekspresi di Python ===")
print("7 / 2   =", 7 / 2)     # Output: 3.5 (Float)
print("7 // 2  =", 7 // 2)    # Output: 3 (Floor Division)
print("-7 / 2  =", -7 / 2)    # Output: -3.5 (Float)
print("-7 // 2 =", -7 // 2)   # Output: -4 (Perbedaan signifikan dengan C++ yang bernilai -3)