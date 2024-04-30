// dll loader
// created by: Unrully

// imports
#include <windows.h>
#include <stdio.h>  // Corrected the include directive for "stdio.h"
#include <string>

int main(int argc, char* argv[]) {

  // Exception
  if (argc < 2) {  // Removed the extra semicolon and corrected the syntax
    printf("[!] Run: dll loader.exe <file.dll>\n"); // Corrected the print statement
    return EXIT_FAILURE; // Corrected the return value
  }

  // Get parsed file
  LPCSTR dll_file = argv[1];
  std::string file_name = argv[1];
  printf("[*] Loading: %s...\n", file_name.c_str()); // Corrected the print statement

  // Load dll
  HINSTANCE hDll = LoadLibrary(TEXT(dll_file));

  if (hDll == NULL) {
    printf("[!] Failed to load the DLL.\n");
    return EXIT_FAILURE;
  }

  printf("[*] DLL loaded successfully.\n");

  // You can call functions from the loaded DLL here if needed

  // Unload the DLL when you are done with it
  FreeLibrary(hDll);

  return EXIT_SUCCESS;
}




   

