## AES_512.h
AES_512_CTX ctx;

AES_512_Init(&ctx, key);

AES_512_ECB_encrypt(&ctx, input, output); // input (original data) output (ciphertext)

AES_512_ECB_decrypt(&ctx, input, output); input (ciphertext) output (original data)
