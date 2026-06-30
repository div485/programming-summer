#include <stdio.h>
#include <string.h>

// Function to compress the input string
void compressString(const char *src, char *dest) {
    int i = 0;
        int j = 0; // Index for the destination string
            int len = strlen(src);

                while (i < len) {
                        // Store the current character
                                dest[j++] = src[i];
                                        
                                                // Count consecutive occurrences of the current character
                                                        int count = 1;
                                                                while (i + 1 < len && src[i] == src[i + 1]) {
                                                                            count++;
                                                                                        i++;
                                                                                                }
                                                                                                        
                                                                                                                // Convert the integer count to characters and append to dest
                                                                                                                        // This logic perfectly handles multi-digit numbers like 12 or 100
                                                                                                                                char countStr[20];
                                                                                                                                        sprintf(countStr, "%d", count);
                                                                                                                                                for (int k = 0; countStr[k] != '\0'; k++) {
                                                                                                                                                            dest[j++] = countStr[k];
                                                                                                                                                                    }
                                                                                                                                                                            
                                                                                                                                                                                    i++;
                                                                                                                                                                                        }
                                                                                                                                                                                            
                                                                                                                                                                                                // Add the null terminator to finish the compressed string
                                                                                                                                                                                                    dest[j] = '\0';
                                                                                                                                                                                                    }

                                                                                                                                                                                                    int main() {
                                                                                                                                                                                                        char original[] = "AAAAABBBBBBBBBBBCCDDDD";
                                                                                                                                                                                                            
                                                                                                                                                                                                                // The compressed string can at most be 2x the size of the original string
                                                                                                                                                                                                                    // (e.g., "ABCD" becomes "A1B1C1D1")
                                                                                                                                                                                                                        char compressed[sizeof(original) * 2]; 
                                                                                                                                                                                                                            
                                                                                                                                                                                                                                compressString(original, compressed);
                                                                                                                                                                                                                                    
                                                                                                                                                                                                                                        printf("Original String:   %s\n", original);
                                                                                                                                                                                                                                            printf("Compressed String: %s\n", compressed);
                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                    