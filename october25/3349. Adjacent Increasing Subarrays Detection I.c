bool checkSequence ( int* nums, int index, int k , int numsSize ){
    int correct = 0;
    int correctTwo = 0;
    if ( k == 1 ) { return true; }
    for ( int j = index + 1; j < index + k; j++){
            //printf ( "%d\n", nums[j] );
            correct = 1;
            if ( nums[j] <= nums[j - 1] ){
                printf("Não1\n");
                return false;
            }
            correct = 1;
        }
    printf("\n");
    for ( int l = index + k + 1; l < index + 2*k; l++ ){
        printf ( "%d\n", nums[l] );
        if ( nums[l] <= nums[l - 1] ){
            printf ( "%d\n", nums[l-1] );
            printf("Não2\n");
            return false;
        }
        //printf("\n");
        correctTwo = 1;
    }
    printf("Este é o valor de correctTwo %d", correctTwo);
    printf("Este é o valor de correct %d", correct);
    // printf("Sim!");
    if ( correct && correctTwo ){
        return true;
    }
    else {
        return false;
    }
}

bool hasIncreasingSubarrays(int* nums, int numsSize, int k) {
    // printf ( "%d\n", numsSize );
    // printf ( "%d\n", sizeof ( *nums ) );
    for ( int i = 0; i < numsSize ; i++ ){
        //printf ( "%d\n", nums[i] );

        if ( i + 2*k > numsSize ){
            return false;
        }

        if ( checkSequence( nums, i, k , numsSize ) ){
            return true;
        }
    }
    return false;
}