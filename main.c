/**
* \copyright
* MIT License
*
* Copyright (c) 2019 Infineon Technologies AG
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE
*
* \endcopyright
*
* \author Infineon Technologies AG
*
* \file main.c
*
* @{
*/

#include "optiga_manifest_parser.h"
#include "stdio.h"

unsigned char manifest_data_es_256_ecc_256[] = 
{
0x84, 0x43, 0xA1, 0x01, 0x26, 0xA1, 0x04, 0x42, 0xE0, 0xE3, 0x58, 0x3D, 0x86, 0x01, 0xF6, 0xF6, 
0x84, 0x20, 0x19, 0x03, 0x2E, 0x03, 0x82, 0x00, 0x01, 0x82, 0x82, 0x20, 0x58, 0x25, 0x82, 0x18, 
0x29, 0x58, 0x20, 0xD8, 0x6C, 0x98, 0x4A, 0x54, 0x28, 0x31, 0x58, 0x92, 0x4F, 0x4C, 0xDD, 0x1A, 
0xD5, 0x19, 0xEC, 0x57, 0x20, 0x20, 0x29, 0x59, 0xBB, 0xD6, 0x5B, 0x2D, 0x0B, 0x17, 0x8E, 0xDB, 
0x62, 0x3F, 0xAA, 0xF6, 0x82, 0x40, 0x42, 0xE0, 0xE1, 0x58, 0x40, 0x01, 0xAE, 0xF3, 0x26, 0xF5, 
0xFB, 0x0F, 0x8E, 0x30, 0xBB, 0x7C, 0x81, 0xEE, 0xE9, 0x51, 0xB9, 0x44, 0x8D, 0x90, 0xC5, 0x0F, 
0x85, 0x51, 0xF2, 0x86, 0xA9, 0x49, 0x54, 0x00, 0x91, 0xD0, 0xEE, 0x09, 0x23, 0x13, 0xE9, 0x52, 
0x68, 0xD2, 0xE0, 0xD1, 0x1C, 0xAA, 0x7A, 0xD8, 0xC5, 0x90, 0xB8, 0x67, 0xCB, 0xAE, 0xB4, 0x5F, 
0x9B, 0xF7, 0x12, 0x12, 0x0A, 0x05, 0x2D, 0xC3, 0x19, 0xAF, 0xD6, 
};

unsigned char manifest_data_es_256_ecc_384[] = 
{
0x84, 0x43, 0xA1, 0x01, 0x26, 0xA1, 0x04, 0x42, 0xE0, 0xE3, 0x58, 0x3D, 0x86, 0x01, 0xF6, 0xF6, 
0x84, 0x20, 0x19, 0x03, 0x2E, 0x03, 0x82, 0x00, 0x01, 0x82, 0x82, 0x20, 0x58, 0x25, 0x82, 0x18, 
0x29, 0x58, 0x20, 0xD8, 0x6C, 0x98, 0x4A, 0x54, 0x28, 0x31, 0x58, 0x92, 0x4F, 0x4C, 0xDD, 0x1A, 
0xD5, 0x19, 0xEC, 0x57, 0x20, 0x20, 0x29, 0x59, 0xBB, 0xD6, 0x5B, 0x2D, 0x0B, 0x17, 0x8E, 0xDB, 
0x62, 0x3F, 0xAA, 0xF6, 0x82, 0x40, 0x42, 0xE0, 0xE1, 0x58, 0x60, 0xFD, 0xE2, 0x8D, 0xEB, 0xE5, 
0x21, 0x96, 0xED, 0xDB, 0xA5, 0xFD, 0xA5, 0xFC, 0x42, 0x15, 0x32, 0x53, 0xDA, 0x6C, 0x36, 0x9D, 
0x23, 0x74, 0x5F, 0x9B, 0x09, 0x88, 0x0D, 0xF8, 0x96, 0x81, 0xEC, 0x3D, 0x00, 0x13, 0xE9, 0x71, 
0x84, 0x9F, 0x6F, 0xE7, 0xB6, 0xE6, 0xE3, 0x02, 0x46, 0xAA, 0x0B, 0xF3, 0xDA, 0xA7, 0x56, 0xDD, 
0x72, 0xB2, 0x8B, 0xA3, 0x1C, 0x4A, 0x14, 0xC4, 0x7B, 0xB6, 0xD0, 0xEB, 0x5D, 0xBB, 0x3F, 0xD8, 
0xBF, 0xC8, 0x1E, 0xEE, 0x26, 0xA2, 0x53, 0xEB, 0x4A, 0xD9, 0x8C, 0x2E, 0x74, 0x87, 0xA7, 0x5B, 
0x64, 0xFE, 0x8A, 0xD7, 0xF7, 0x08, 0x2E, 0xC5, 0xC9, 0x53, 0x20, 
};

unsigned char manifest_data_rsa_ssa_rsa1024[] = 
{
0x84, 0x47, 0xA1, 0x01, 0x3A, 0x00, 0x01, 0x00, 0xA3, 0xA1, 0x04, 0x42, 0xE0, 0xE3, 0x58, 0x3D, 
0x86, 0x01, 0xF6, 0xF6, 0x84, 0x20, 0x19, 0x03, 0x2E, 0x03, 0x82, 0x00, 0x01, 0x82, 0x82, 0x20, 
0x58, 0x25, 0x82, 0x18, 0x29, 0x58, 0x20, 0xD8, 0x6C, 0x98, 0x4A, 0x54, 0x28, 0x31, 0x58, 0x92, 
0x4F, 0x4C, 0xDD, 0x1A, 0xD5, 0x19, 0xEC, 0x57, 0x20, 0x20, 0x29, 0x59, 0xBB, 0xD6, 0x5B, 0x2D, 
0x0B, 0x17, 0x8E, 0xDB, 0x62, 0x3F, 0xAA, 0xF6, 0x82, 0x40, 0x42, 0xE0, 0xE1, 0x58, 0x80, 0x9A, 
0xCF, 0x68, 0xE6, 0x2E, 0x3B, 0x76, 0xE6, 0xD1, 0xF0, 0x30, 0x28, 0x0E, 0x31, 0x29, 0xEA, 0x27, 
0x9E, 0x2E, 0x7B, 0x68, 0x8C, 0x91, 0x8F, 0xAD, 0x54, 0xDF, 0x58, 0x32, 0x6F, 0x2C, 0x80, 0xED, 
0xC2, 0x26, 0x4D, 0x81, 0xE5, 0xAF, 0xFB, 0x3C, 0xD3, 0x6E, 0x63, 0xFC, 0x9A, 0x7A, 0x85, 0x74, 
0x78, 0x6D, 0x27, 0x7E, 0xD7, 0x51, 0x76, 0x80, 0x21, 0x39, 0xD3, 0xA0, 0x0D, 0xE7, 0x44, 0x21, 
0x5A, 0x07, 0x98, 0xD3, 0x68, 0x84, 0xC9, 0xEF, 0x0F, 0x3C, 0xB2, 0x94, 0xE7, 0x27, 0xC7, 0xE0, 
0x12, 0x1C, 0x7A, 0x6C, 0x70, 0x95, 0x9A, 0x5E, 0x9A, 0x9F, 0xE4, 0xBD, 0xC9, 0x70, 0x2A, 0xE9, 
0x35, 0xB6, 0x57, 0x9D, 0x64, 0xFB, 0x99, 0xC0, 0xE3, 0xA8, 0xD5, 0x1A, 0x08, 0x7D, 0x05, 0x5C, 
0x1B, 0x30, 0x60, 0xE2, 0x82, 0x50, 0x5D, 0xD3, 0xB2, 0xEA, 0xC3, 0x2C, 0xB6, 0xFC, 0xA7, 
};

unsigned char manifest_data_rsa_ssa_rsa_2048[] = 
{
0x84, 0x47, 0xA1, 0x01, 0x3A, 0x00, 0x01, 0x00, 0xA3, 0xA1, 0x04, 0x42, 0xE0, 0xE3, 0x58, 0x3D, 
0x86, 0x01, 0xF6, 0xF6, 0x84, 0x20, 0x19, 0x03, 0x2E, 0x03, 0x82, 0x00, 0x01, 0x82, 0x82, 0x20, 
0x58, 0x25, 0x82, 0x18, 0x29, 0x58, 0x20, 0xD8, 0x6C, 0x98, 0x4A, 0x54, 0x28, 0x31, 0x58, 0x92, 
0x4F, 0x4C, 0xDD, 0x1A, 0xD5, 0x19, 0xEC, 0x57, 0x20, 0x20, 0x29, 0x59, 0xBB, 0xD6, 0x5B, 0x2D, 
0x0B, 0x17, 0x8E, 0xDB, 0x62, 0x3F, 0xAA, 0xF6, 0x82, 0x40, 0x42, 0xE0, 0xE1, 0x59, 0x01, 0x00, 
0x82, 0xDF, 0x44, 0xEC, 0x26, 0xB3, 0x0B, 0x6C, 0xA9, 0xC0, 0xFF, 0xCF, 0x71, 0x14, 0x00, 0x9C, 
0xF7, 0xB7, 0x22, 0x8E, 0x17, 0xE0, 0xE3, 0x22, 0x19, 0x46, 0xBD, 0x64, 0x36, 0x14, 0xC3, 0x7E, 
0xDF, 0x65, 0x95, 0xD2, 0x6D, 0x27, 0xFF, 0x15, 0xB0, 0x40, 0x97, 0x8F, 0xB4, 0x79, 0xFF, 0xA9, 
0x03, 0xE3, 0x91, 0x1B, 0xFB, 0xEC, 0x45, 0xE2, 0xB7, 0x09, 0x07, 0xC8, 0xEA, 0x32, 0x31, 0x2B, 
0x96, 0x82, 0xB0, 0x10, 0xD0, 0x31, 0x5E, 0x90, 0x77, 0x3C, 0xEB, 0x92, 0x5E, 0x90, 0xC6, 0x4F, 
0x88, 0x29, 0xF2, 0xBB, 0x7F, 0x88, 0x5E, 0xF6, 0x6A, 0xB1, 0x14, 0x97, 0x68, 0x95, 0xD4, 0xDB, 
0xC5, 0xC9, 0x6C, 0x18, 0x1F, 0x27, 0x58, 0x40, 0x06, 0x00, 0x4D, 0xE0, 0x3A, 0x75, 0x82, 0x77, 
0x5E, 0x4C, 0x68, 0x40, 0x86, 0x54, 0x73, 0x3A, 0x13, 0x0D, 0xC2, 0xFA, 0xEF, 0x0F, 0xD8, 0x26, 
0x72, 0xB8, 0x6D, 0x11, 0xC8, 0x20, 0x74, 0x74, 0x92, 0x46, 0xC6, 0xF5, 0xF3, 0xF1, 0xD3, 0x25, 
0xAD, 0xB5, 0xEA, 0xB5, 0x08, 0x6C, 0xF2, 0x03, 0x09, 0x00, 0x30, 0x32, 0x15, 0x8D, 0x32, 0x88, 
0xDB, 0x5C, 0x63, 0x9B, 0xAD, 0x63, 0x00, 0x17, 0xBF, 0xC7, 0x8F, 0x72, 0x31, 0x3F, 0x94, 0x2E, 
0x54, 0x90, 0x50, 0x0C, 0xB4, 0x4D, 0x93, 0x70, 0xEE, 0x82, 0x21, 0x2F, 0x57, 0xE7, 0x75, 0x20, 
0xAF, 0xB9, 0x6A, 0xA8, 0x12, 0xB1, 0x07, 0xAA, 0x31, 0xBB, 0x3D, 0xBE, 0x4C, 0xED, 0x17, 0x47, 
0x90, 0x9B, 0xFF, 0xBC, 0x17, 0x52, 0xDD, 0x06, 0xEC, 0xDA, 0x56, 0x29, 0x81, 0x8B, 0x71, 0xF2, 
0x61, 0x9B, 0x33, 0x52, 0xBF, 0x87, 0xAA, 0xED, 0x8E, 0xE7, 0xCF, 0xD1, 0x2C, 0xD1, 0x4E, 0x47, 
0xB4, 0xEF, 0x88, 0x63, 0xD4, 0xD7, 0xFF, 0x39, 0xE5, 0xED, 0x7C, 0xFC, 0x62, 0xD8, 0x03, 0x69, 

};

int main(void)
{
    optiga_manifest_t optiga_manifest;
   	optiga_manifest_parse_raw(manifest_data_es_256_ecc_256, sizeof(manifest_data_es_256_ecc_256), &optiga_manifest);
   	printf("Test ES_256 OPTIGA Manifest with NIST P256 key  ++++++\n\r");
   	printf("Version:\t\t\t 0x%02X\n\r", optiga_manifest.version);
   	printf("Payload version:\t\t 0x%02X\n\r", optiga_manifest.payload_version);
   	printf("Payload length:\t\t\t 0x%02X\n\r", optiga_manifest.payload_length);
   	printf("Trust Anchor OID:\t\t 0x%02X\n\r", optiga_manifest.trust_anchor_oid);
   	printf("Target OID:\t\t\t 0x%02X\n\r", optiga_manifest.target_oid);
   	printf("Signature Algorithm:\t\t %s\n\r",
   			optiga_manifest_get_name_by_signature(optiga_manifest.signature_algo));
   	printf("Signature Length:\t\t 0x%02X\n\r", optiga_manifest.signature_length);
   	printf("Fragment Digest Algorithm:\t %s\n\r",
   			optiga_manifest_get_name_by_digest(optiga_manifest.digest_algo));
   	printf("Digest Length in a fragment:\t 0x%02X\n\r", optiga_manifest.digest_length);
   	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n\r");
	
   	optiga_manifest_parse_raw(manifest_data_es_256_ecc_384, sizeof(manifest_data_es_256_ecc_384), &optiga_manifest);
   	printf("Test ES_256 OPTIGA Manifest with NIST P384 key ++++++\n\r");
   	printf("Version:\t\t\t 0x%02X\n\r", optiga_manifest.version);
   	printf("Payload version:\t\t 0x%02X\n\r", optiga_manifest.payload_version);
   	printf("Payload length:\t\t\t 0x%02X\n\r", optiga_manifest.payload_length);
   	printf("Trust Anchor OID:\t\t 0x%02X\n\r", optiga_manifest.trust_anchor_oid);
   	printf("Target OID:\t\t\t 0x%02X\n\r", optiga_manifest.target_oid);
   	printf("Signature Algorithm:\t\t %s\n\r",
   			optiga_manifest_get_name_by_signature(optiga_manifest.signature_algo));
   	printf("Signature Length:\t\t 0x%02X\n\r", optiga_manifest.signature_length);
   	printf("Fragment Digest Algorithm:\t %s\n\r",
   			optiga_manifest_get_name_by_digest(optiga_manifest.digest_algo));
   	printf("Digest Length in a fragment:\t 0x%02X\n\r", optiga_manifest.digest_length);
	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n\r");

   	optiga_manifest_parse_raw(manifest_data_rsa_ssa_rsa1024, sizeof(manifest_data_rsa_ssa_rsa1024), &optiga_manifest);
   	printf("Test RSA_SSA OPTIGA Manifest with RSA1024 key +++++++\n\r");
   	printf("Version:\t\t\t 0x%02X\n\r", optiga_manifest.version);
   	printf("Payload version:\t\t 0x%02X\n\r", optiga_manifest.payload_version);
   	printf("Payload length:\t\t\t 0x%02X\n\r", optiga_manifest.payload_length);
   	printf("Trust Anchor OID:\t\t 0x%02X\n\r", optiga_manifest.trust_anchor_oid);
   	printf("Target OID:\t\t\t 0x%02X\n\r", optiga_manifest.target_oid);
   	printf("Signature Algorithm:\t\t %s\n\r",
   			optiga_manifest_get_name_by_signature(optiga_manifest.signature_algo));
   	printf("Signature Length:\t\t 0x%02X\n\r", optiga_manifest.signature_length);
   	printf("Fragment Digest Algorithm:\t %s\n\r",
   			optiga_manifest_get_name_by_digest(optiga_manifest.digest_algo));
   	printf("Digest Length in a fragment:\t 0x%02X\n\r", optiga_manifest.digest_length);
   	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n\r");
	
	optiga_manifest_parse_raw(manifest_data_rsa_ssa_rsa_2048, sizeof(manifest_data_rsa_ssa_rsa_2048), &optiga_manifest);
   	printf("Test RSA_SSA OPTIGA Manifest with RSA2048 key +++++++\n\r");
   	printf("Version:\t\t\t 0x%02X\n\r", optiga_manifest.version);
   	printf("Payload version:\t\t 0x%02X\n\r", optiga_manifest.payload_version);
   	printf("Payload length:\t\t\t 0x%02X\n\r", optiga_manifest.payload_length);
   	printf("Trust Anchor OID:\t\t 0x%02X\n\r", optiga_manifest.trust_anchor_oid);
   	printf("Target OID:\t\t\t 0x%02X\n\r", optiga_manifest.target_oid);
   	printf("Signature Algorithm:\t\t %s\n\r",
   			optiga_manifest_get_name_by_signature(optiga_manifest.signature_algo));
   	printf("Signature Length:\t\t 0x%02X\n\r", optiga_manifest.signature_length);
   	printf("Fragment Digest Algorithm:\t %s\n\r",
   			optiga_manifest_get_name_by_digest(optiga_manifest.digest_algo));
   	printf("Digest Length in a fragment:\t 0x%02X\n\r", optiga_manifest.digest_length);
   	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n\r");

    return 0;
}

/**
* @}
*/
