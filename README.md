# AES-512 Implementation in C  
This project implements **AES-512** encryption, decryption, and key expansion in C. It supports **22 rounds** with a **64-byte key** (512 bits).  

---

## ⚠️ **Disclaimer**  
This project was created for learning and experimentation purposes. I am not a cryptographer or mathematician, so I can't guarantee the security or correctness of the implementation for real-world encryption. Use it at your own risk!  

---

## 🚀 **Features**  
✅ AES-512 key expansion for 22 rounds  
✅ 512-bit key input (64 bytes)  
✅ Encryption and decryption with 22 rounds  
✅ Outputs 23 round keys (16 bytes each)  

---

## 📂 **File Overview**  
- `AES_512.h` – Header file with key expansion, encryption, and decryption constants and macros  
- `main.c` – Main implementation of AES-512 key expansion, encryption, and decryption  

---

## 🔧 **Build and Run**  
```bash
gcc -o aes512 main.c
./aes512
```

---

## 🚨 **Limitations**  
- This implementation is experimental and not guaranteed to be secure for real-world use.  
- AES-512 is not a standardized algorithm — this is an extension of the AES concept for learning purposes.  

---

## 🛠️ **To-Do**  
- Optimize key expansion and encryption performance  
- Add additional test cases for validation  

---

## ✅ **Example Output**  
**Key:**  
`48 60 29 a6 7a fe 73 68 46 d8 d4 3d 89 96 47 9a ff d4 39 4f 2a bf 10 be 0b 09 47 ba 3c 69 26 9a 4d 9a f0 1a e2 03 ce 66 bf d8 58 34 ec 70 46 0d 3b 7a 7d 81 d1 ec 48 cc ec b5 4f 93 7b 67 81 64`  

**Original:**  
`68 61 6c 6c 6f 77 65 65 6b 73 00 00 00 00 00 00`  

**Encrypted:**  
`a7 73 5d a1 fb f1 ac e2 b6 d9 ca e8 2c ce 00 c7`  

**Decrypted:**  
`68 61 6c 6c 6f 77 65 65 6b 73 00 00 00 00 00 00`  

---

## 🤝 **Contributing**  
Contributions are welcome! If you’d like to improve this project, feel free to fork the repository and create a pull request.  
- Fork the repo  
- Create a new branch (`git checkout -b feature-branch`)  
- Commit your changes (`git commit -m "Add feature"`)  
- Push to your branch (`git push origin feature-branch`)  
- Open a pull request  

---

## 📜 **License**  
This project is licensed under the **MIT License** — you are free to use, modify, and distribute it with proper attribution. See the `LICENSE` file for details.  

---

## ⭐ **Acknowledgments**  
Special thanks to the creators of the original AES standard and the open-source community for inspiration and guidance.  
