struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int *v = NULL;
    int *v1 = NULL;
    int *returnl1 = NULL;
    int *returnl2 = NULL;
    int i = 0;
    int j = 0;
    while ( l1 != NULL ){
        v = realloc(v, (i + 1) * sizeof(int));
        returnl1 = realloc(returnl1, (i + 1) * sizeof(int));
        v[i] = l1->val;
        l1 = l1->next;
        i++;
    }

    while ( l2 != NULL ){
        v1 = realloc(v1, (j + 1) * sizeof(int));
        returnl2 = realloc(returnl2, (j + 1) * sizeof(int));
        v1[j] = l2->val;
        l2 = l2->next;
        j++;
    }
    char *strl1 = malloc(i);
    char *strl2 = malloc(j);
    strl1[0] = '\0';
    strl2[0] = '\0';
    int a = 0;
    for ( int k = 0; k < i; k++ ) {
        char temp[12];
        sprintf(temp, "%d", v[k]);
        size_t len = strlen(strl1);
        strl1 = realloc(strl1, len + strlen(temp) + 1);
        strcat(strl1, temp);
        a++;
    }
    a = 0;
    for ( int k = 0; k < j; k++ ) {
        char temp[12];
        sprintf(temp, "%d", v1[k]);
        size_t len = strlen(strl2);
        strl2 = realloc(strl2, len + strlen(temp) + 1);
        strcat(strl2, temp);
        a++;
    }
    //printf(strl1);
    //print('\n');

    //printf(strl2);
    int num1 = atoi(strl1);
    int num2 = atoi(strl2);
    int numFinal = num1+num2;
    char strFinal[12];
    sprintf(strFinal, "%d", numFinal); 
    printf("%d\n", numFinal);
    printf("String: %s\n", strFinal);
    int len = strlen(strFinal);
    // for ( int k = 0; k < i; k++ ) {
    //     printf("%d ", returnl1[k]);
    // }
    for (int i = 0; i < len / 2; i++) {
        char temp = strFinal[i];
        strFinal[i] = strFinal[len - i - 1];
        strFinal[len - i - 1] = temp;
    }
    for (int i = 0; i < len / 2; i++) {
        char temp = strFinal[i];
        strFinal[i] = strFinal[len - i - 1];
        strFinal[len - i - 1] = temp;
    }
    int n = strlen(strFinal);    // Tamanho da string
    int numeros[n];
    printf("String: %s\n", strFinal);
    for (int i = 0; i < n; i++) {
        numeros[i] = strFinal[i] - '0'; // Converte o caractere em número
    }

    // Exibe o resultado
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return numeros;
}