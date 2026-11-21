//205. Isomorphic Strings
bool isIsomorphic(char* s, char* t) {
    int mapS[256] = {0}; 
    int mapT[256] = {0};  

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char a = s[i];
        unsigned char b = t[i];

        if (mapS[a] != mapT[b]) {
            return false;
        }

        mapS[a] = i + 1;
        mapT[b] = i + 1;
    }

    return true;
}
