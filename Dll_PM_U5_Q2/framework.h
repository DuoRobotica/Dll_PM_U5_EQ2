#pragma once

#define WIN32_LEAN_AND_MEAN             // Excluir material rara vez utilizado de encabezados de Windows
// Archivos de encabezado de Windows
#include <windows.h>



extern "C" __declspec(dllexport) int __stdcall suma(int a, int b);

extern "C" __declspec(dllexport) int __stdcall resta(int a, int b);

extern "C" __declspec(dllexport) int __stdcall multiplicacion(int a, int b);

extern "C" __declspec(dllexport) int __stdcall division(int a, int b);

extern "C" __declspec(dllexport) int __stdcall largo_cadena(const char* str);

extern "C" __declspec(dllexport) int __stdcall escribir_cadena(char* str , int len_buffer);

//Programas unidad 2 - 2022-1

extern "C" __declspec(dllexport) int __stdcall promedioDeUsuario(char* nombre , int cal1 , int cal2, int cal3);


