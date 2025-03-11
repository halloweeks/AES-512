#include <stdio.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

#include "AES_512.h"

int main() {
	// AES 512bit key
	uint8_t key[64] = {
		0x48, 0x60, 0x29, 0xa6, 0x7a, 0xfe, 0x73, 0x68, 0x46, 0xd8, 0xd4, 0x3d, 0x89, 0x96, 0x47, 0x9a,
		0xff, 0xd4, 0x39, 0x4f, 0x2a, 0xbf, 0x10, 0xbe, 0x0b, 0x09, 0x47, 0xba, 0x3c, 0x69, 0x26, 0x9a,
		0x4d, 0x9a, 0xf0, 0x1a, 0xe2, 0x03, 0xce, 0x66, 0xbf, 0xd8, 0x58, 0x34, 0xec, 0x70, 0x46, 0x0d,
		0x3b, 0x7a, 0x7d, 0x81, 0xd1, 0xec, 0x48, 0xcc, 0xec, 0xb5, 0x4f, 0x93, 0x7b, 0x67, 0x81, 0x64
	};
	
	// print key
	printf("key: ");
	for (int i = 0; i < sizeof(key); i++) {
		printf("%02x ", key[i]);
	}
	printf("\n");
	
	// hold data 
	uint8_t data[16] = {0};
	uint8_t enc[16];
	uint8_t dec[16];
	
	// an data
	memcpy(data, "halloweeks", 10);
	
	// AES Context
	AES_512_CTX ctx;
	
	// 
	AES_512_Init(&ctx, key);
	
	// perform encryption 
	AES_512_ECB_encrypt(&ctx, data, enc);
	
	// perform decryption 
	AES_512_ECB_decrypt(&ctx, enc, dec);
	
	// print original data
	printf("original: ");
	for (uint8_t i = 0; i < 16; i++) {
		printf("%02x ", data[i]);
	}
	printf("\n");
	
	// print encrypted data
	printf("encrypted: ");
	for (uint8_t i = 0; i < 16; i++) {
		printf("%02x ", enc[i]);
	}
	printf("\n");
	
	// print decrypted data 
	printf("decrypted: ");
	for (uint8_t i = 0; i < 16; i++) {
		printf("%02x ", dec[i]);
	}
	printf("\n");
	return 0;
}