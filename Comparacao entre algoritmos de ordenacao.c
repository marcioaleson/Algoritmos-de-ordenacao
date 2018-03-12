    #include<stdio.h>
    #include<stdlib.h>
    #include<conio.h>
    #include<time.h>

    #define TAM1 1000
    #define TAM2 7500
    #define TAM3 25000
    #define TAM4 50000
    #define TAM5 75000
    #define TAM6 100000

    void crescente(int*,int);
    void decrescente(int*,int);
    void aleatorio(int*,int);
    void imprime(int*,int);
    void insertionSort(int*,int);
    void selectionSort(int*,int);
    void bubbleSort(int*,int);
    void insertionSort(int*,int);
    void merge(int*,int);
    void mergeSort(int*,int,int);
    void heapRefaz(int*,int,int);
    void heapConstroi(int*,int);
    void heapSort(int*,int);
    void quickSort(int*,int,int);

    long long int totalComp1=0,totalComp2=0,totalComp3=0,totalTroca1=0,totalTroca2=0,totalTroca3=0,Comp=0,Troc=0;

    int main(){
    int vetor1000[TAM1],vetor7500[TAM2],vetor25000[TAM3],vetor50000[TAM4],vetor75000[TAM5],vetor100000[TAM6];
    float timeOut1,timeOut2,timeOut3;
    clock_t timef,time;
    int op;

    for(;;){
    printf("\tMENU\n");
    printf("\t1-INSERTIONSORT\n");
    printf("\t2-SELECTIONSORT\n");
    printf("\t3-BUBLESORT\n");
    printf("\t4-MERGESORT\n");
    printf("\t5-HEAPSORT\n");
    printf("\t6-QUICKSORT\n");
    printf("\t7-SAIR\n");
    printf("\tDIGITE UMA OPCAO:");
    scanf("%d",&op);
    switch(op){
    case 1:
        //Ordenação vetor de 1000 unidades crescentes.
        crescente(vetor1000,TAM1);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        insertionSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        insertionSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        insertionSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 1000 unidades decrescentes.
        decrescente(vetor1000,TAM1);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        insertionSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        insertionSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        insertionSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");


        //Ordenação vetor de 1000 unidades aleatório.
        aleatorio(vetor1000,TAM1);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        insertionSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%d.\nTotal de comparacoes:%d .\n",totalTroca1,totalComp1);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        insertionSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        insertionSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades crescentes.
        crescente(vetor7500,TAM2);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        insertionSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor7500,TAM2);
        time = clock();
        insertionSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor7500,TAM2);
        time = clock();
        insertionSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades decrescentes.
        decrescente(vetor7500,TAM2);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        insertionSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        insertionSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        insertionSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades aleatorias.
        aleatorio(vetor7500,TAM2);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        insertionSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        insertionSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        insertionSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades crescentes.
        crescente(vetor25000,TAM3);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        insertionSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        insertionSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        insertionSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades decrescentes.
        decrescente(vetor25000,TAM3);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        insertionSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        insertionSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        insertionSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades aleatorias.
        aleatorio(vetor25000,TAM3);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        insertionSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        insertionSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        insertionSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades crescentes.
        crescente(vetor50000,TAM4);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        insertionSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor50000,TAM4);
        time = clock();
        insertionSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor50000,TAM4);
        time = clock();
        insertionSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades decrescentes.
        decrescente(vetor50000,TAM4);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        insertionSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        insertionSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        insertionSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades aleatorias.
        aleatorio(vetor50000,TAM4);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        insertionSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        insertionSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        insertionSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades crescentes.
        crescente(vetor75000,TAM5);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        insertionSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor75000,TAM5);
        time = clock();
        insertionSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor75000,TAM5);
        time = clock();
        insertionSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades decrescentes.
        decrescente(vetor75000,TAM5);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        insertionSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor75000,TAM5);
        time = clock();
        insertionSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor75000,TAM5);
        time = clock();
        insertionSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades aleatorias.
        aleatorio(vetor75000,TAM5);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        insertionSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        insertionSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        insertionSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades crescentes.
        crescente(vetor100000,TAM6);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        insertionSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        insertionSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        insertionSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades decrescentes.
        decrescente(vetor100000,TAM6);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        insertionSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        insertionSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        insertionSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades aleatorias.
        aleatorio(vetor100000,TAM6);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        insertionSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de insertionsort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        insertionSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de insertionsort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        insertionSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de insertionsort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

    break;
    case 2:

        //Ordenação vetor de 1000 unidades crescentes.
        crescente(vetor1000,TAM1);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        selectionSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        selectionSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        selectionSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 1000 unidades decrescentes.
        decrescente(vetor1000,TAM1);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        selectionSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        selectionSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        selectionSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");


        //Ordenação vetor de 1000 unidades aleatório.
        aleatorio(vetor1000,TAM1);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        selectionSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        selectionSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        selectionSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades crescentes.
        crescente(vetor7500,TAM2);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        selectionSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor7500,TAM2);
        time = clock();
        selectionSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor7500,TAM2);
        time = clock();
        selectionSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades decrescentes.
        decrescente(vetor7500,TAM2);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        selectionSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        selectionSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        selectionSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades aleatorias.
        aleatorio(vetor7500,TAM2);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        selectionSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        selectionSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        selectionSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades crescentes.
        crescente(vetor25000,TAM3);
        printf("Vetor crescente a ser ordenadselectionSorto:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        selectionSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        selectionSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        selectionSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades decrescentes.
        decrescente(vetor25000,TAM3);
        printf("Vetor decrescente a ser ordenselectionSortado:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        selectionSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        selectionSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        selectionSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades aleatorias.
        aleatorio(vetor25000,TAM3);
        printf("Vetor aleatorio a ser ordenadselectionSorto:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        selectionSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        selectionSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        selectionSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades crescentes.
        crescente(vetor50000,TAM4);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        selectionSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor50000,TAM4);
        time = clock();
        selectionSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor50000,TAM4);
        time = clock();
        selectionSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades decrescentes.
        decrescente(vetor50000,TAM4);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        selectionSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        selectionSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        selectionSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades aleatorias.
        aleatorio(vetor50000,TAM4);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        selectionSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        selectionSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        selectionSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades crescentes.
        crescente(vetor75000,TAM5);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        selectionSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor75000,TAM5);
        time = clock();
        selectionSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor75000,TAM5);
        time = clock();
        selectionSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades decrescentes.
        decrescente(vetor75000,TAM5);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        selectionSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor75000,TAM5);
        time = clock();
        selectionSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor75000,TAM5);
        time = clock();
        selectionSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades aleatorias.
        aleatorio(vetor75000,TAM5);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        selectionSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        selectionSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        selectionSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades crescentes.
        crescente(vetor100000,TAM6);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        selectionSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        selectionSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        selectionSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades decrescentes.
        decrescente(vetor100000,TAM6);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        selectionSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        selectionSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        selectionSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades aleatorias.
        aleatorio(vetor100000,TAM6);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        selectionSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de selectionSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        selectionSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de selectionSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        selectionSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de selectionSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

    break;
    case 3:

        //Ordenação vetor de 1000 unidades crescentes.
        crescente(vetor1000,TAM1);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        bubbleSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        bubbleSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        bubbleSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 1000 unidades decrescentes.
        decrescente(vetor1000,TAM1);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        bubbleSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        bubbleSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        bubbleSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");


        //Ordenação vetor de 1000 unidades aleatório.
        aleatorio(vetor1000,TAM1);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        bubbleSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%d.\nTotal de comparacoes:%d .\n",totalTroca1,totalComp1);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        bubbleSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        bubbleSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades crescentes.
        crescente(vetor7500,TAM2);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        bubbleSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor7500,TAM2);
        time = clock();
        bubbleSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor7500,TAM2);
        time = clock();
        bubbleSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades decrescentes.
        decrescente(vetor7500,TAM2);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        bubbleSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        bubbleSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        bubbleSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades aleatorias.
        aleatorio(vetor7500,TAM2);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        bubbleSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        bubbleSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        bubbleSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades crescentes.
        crescente(vetor25000,TAM3);
        printf("Vetor crescente a ser ordenadbubbleSorto:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        bubbleSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        bubbleSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        bubbleSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades decrescentes.
        decrescente(vetor25000,TAM3);
        printf("Vetor decrescente a ser ordenbubbleSortado:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        bubbleSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        bubbleSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        bubbleSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades aleatorias.
        aleatorio(vetor25000,TAM3);
        printf("Vetor aleatorio a ser ordenadbubbleSorto:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        bubbleSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        bubbleSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        bubbleSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades crescentes.
        crescente(vetor50000,TAM4);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        bubbleSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor50000,TAM4);
        time = clock();
        bubbleSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor50000,TAM4);
        time = clock();
        bubbleSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades decrescentes.
        decrescente(vetor50000,TAM4);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        bubbleSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        bubbleSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        bubbleSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades aleatorias.
        aleatorio(vetor50000,TAM4);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        bubbleSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        bubbleSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        bubbleSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades crescentes.
        crescente(vetor75000,TAM5);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        bubbleSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor75000,TAM5);
        time = clock();
        bubbleSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor75000,TAM5);
        time = clock();
        bubbleSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades decrescentes.
        decrescente(vetor75000,TAM5);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        bubbleSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor75000,TAM5);
        time = clock();
        bubbleSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor75000,TAM5);
        time = clock();
        bubbleSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades aleatorias.
        aleatorio(vetor75000,TAM5);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        bubbleSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        bubbleSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        bubbleSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades crescentes.
        crescente(vetor100000,TAM6);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        bubbleSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        bubbleSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        bubbleSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades decrescentes.
        decrescente(vetor100000,TAM6);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        bubbleSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        bubbleSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        bubbleSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades aleatorias.
        aleatorio(vetor100000,TAM6);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        bubbleSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de bubbleSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        bubbleSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de bubbleSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        bubbleSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de bubbleSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

    break;
    case 4:

        //Ordenação vetor de 1000 unidades crescentes.
        crescente(vetor1000,TAM1);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        mergeSort(vetor1000,1,TAM1);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        mergeSort(vetor1000,1,TAM1);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        mergeSort(vetor1000,1,TAM1);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 1000 unidades decrescentes.
        decrescente(vetor1000,TAM1);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        mergeSort(vetor1000,1,TAM1);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        mergeSort(vetor1000,1,TAM1);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        mergeSort(vetor1000,1,TAM1);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");


        //Ordenação vetor de 1000 unidades aleatório.
        aleatorio(vetor1000,TAM1);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        mergeSort(vetor1000,1,TAM1);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%d.\nTotal de comparacoes:%d .\n",totalTroca1,totalComp1);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        mergeSort(vetor1000,1,TAM1);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        mergeSort(vetor1000,1,TAM1);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades crescentes.
        crescente(vetor7500,TAM2);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        mergeSort(vetor7500,1,TAM2);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor7500,TAM2);
        time = clock();
        mergeSort(vetor7500,1,TAM2);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor7500,TAM2);
        time = clock();
        mergeSort(vetor7500,1,TAM2);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades decrescentes.
        decrescente(vetor7500,TAM2);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        mergeSort(vetor7500,1,TAM2);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        mergeSort(vetor7500,1,TAM2);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        mergeSort(vetor7500,1,TAM2);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades aleatorias.
        aleatorio(vetor7500,TAM2);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        mergeSort(vetor7500,1,TAM2);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        mergeSort(vetor7500,1,TAM2);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        mergeSort(vetor7500,1,TAM2);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades crescentes.
        crescente(vetor25000,TAM3);
        printf("Vetor crescente a ser ordenadmergeSorto:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        mergeSort(vetor25000,1,TAM3);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        mergeSort(vetor25000,1,TAM3);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        mergeSort(vetor25000,1,TAM3);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades decrescentes.
        decrescente(vetor25000,TAM3);
        printf("Vetor decrescente a ser ordenmergeSortado:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        mergeSort(vetor25000,1,TAM3);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        mergeSort(vetor25000,1,TAM3);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        mergeSort(vetor25000,1,TAM3);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades aleatorias.
        aleatorio(vetor25000,TAM3);
        printf("Vetor aleatorio a ser ordenadmergeSorto:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        mergeSort(vetor25000,1,TAM3);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        mergeSort(vetor25000,1,TAM3);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        mergeSort(vetor25000,1,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades crescentes.
        crescente(vetor50000,TAM4);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        mergeSort(vetor50000,1,TAM4);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor50000,TAM4);
        time = clock();
        mergeSort(vetor50000,1,TAM4);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor50000,TAM4);
        time = clock();
        mergeSort(vetor50000,1,TAM4);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades decrescentes.
        decrescente(vetor50000,TAM4);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        mergeSort(vetor50000,1,TAM4);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        mergeSort(vetor50000,1,TAM4);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        mergeSort(vetor50000,1,TAM4);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades aleatorias.
        aleatorio(vetor50000,TAM4);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        mergeSort(vetor50000,1,TAM4);;
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        mergeSort(vetor50000,1,TAM4);;
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        mergeSort(vetor50000,1,TAM4);;
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades crescentes.
        crescente(vetor75000,TAM5);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        mergeSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor75000,TAM5);
        time = clock();
        mergeSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor75000,TAM5);
        time = clock();
        mergeSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades decrescentes.
        decrescente(vetor75000,TAM5);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        mergeSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor75000,TAM5);
        time = clock();
        mergeSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor75000,TAM5);
        time = clock();
        mergeSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades aleatorias.
        aleatorio(vetor75000,TAM5);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        mergeSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        mergeSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        mergeSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades crescentes.
        crescente(vetor100000,TAM6);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        mergeSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        mergeSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        mergeSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades decrescentes.
        decrescente(vetor100000,TAM6);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        mergeSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        mergeSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        mergeSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades aleatorias.
        aleatorio(vetor100000,TAM6);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        mergeSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de mergeSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        mergeSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de mergeSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        mergeSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de mergeSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");


    break;
    case 5:

        //Ordenação vetor de 1000 unidades crescentes.
        crescente(vetor1000,TAM1);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        heapSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        heapSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        heapSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 1000 unidades decrescentes.
        decrescente(vetor1000,TAM1);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        heapSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        heapSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        heapSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");


        //Ordenação vetor de 1000 unidades aleatório.
        aleatorio(vetor1000,TAM1);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        heapSort(vetor1000,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste deheapSort heapSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%d.\nTotal de comparacoes:%d .\n",totalTroca1,totalComp1);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        heapSort(vetor1000,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        heapSort(vetor1000,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades crescentes.
        crescente(vetor7500,TAM2);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        heapSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor7500,TAM2);
        time = clock();
        heapSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor7500,TAM2);
        time = clock();
        heapSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades decrescentes.
        decrescente(vetor7500,TAM2);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        heapSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        heapSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        heapSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades aleatorias.
        aleatorio(vetor7500,TAM2);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        heapSort(vetor7500,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        heapSort(vetor7500,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        heapSort(vetor7500,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades crescentes.
        crescente(vetor25000,TAM3);
        printf("Vetor crescente a ser ordenadheapSorto:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        heapSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        heapSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        heapSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades decrescentes.
        decrescente(vetor25000,TAM3);
        printf("Vetor decrescente a ser ordenheapSortado:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        heapSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        heapSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        heapSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades aleatorias.
        aleatorio(vetor25000,TAM3);
        printf("Vetor aleatorio a ser ordenadheapSorto:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        heapSort(vetor25000,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        heapSort(vetor25000,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        heapSort(vetor25000,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades crescentes.
        crescente(vetor50000,TAM4);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        heapSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor50000,TAM4);
        time = clock();
        heapSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor50000,TAM4);
        time = clock();
        heapSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades decrescentes.
        decrescente(vetor50000,TAM4);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        heapSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        heapSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSortheapSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        heapSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades aleatorias.
        aleatorio(vetor50000,TAM4);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        heapSort(vetor50000,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        heapSort(vetor50000,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        heapSort(vetor50000,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades crescentes.
        crescente(vetor75000,TAM5);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        heapSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor75000,TAM5);
        time = clock();
        heapSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor75000,TAM5);
        time = clock();
        heapSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades decrescentes.
        decrescente(vetor75000,TAM5);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        heapSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor75000,TAM5);
        time = clock();
        heapSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor75000,TAM5);
        time = clock();
        heapSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades aleatorias.
        aleatorio(vetor75000,TAM5);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        heapSort(vetor75000,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste deheapSort heapSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        heapSort(vetor75000,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        heapSort(vetor75000,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades crescentes.
        crescente(vetor100000,TAM6);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        heapSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        heapSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        heapSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades decrescentes.
        decrescente(vetor100000,TAM6);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        heapSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        heapSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        heapSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades aleatorias.
        aleatorio(vetor100000,TAM6);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        heapSort(vetor100000,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de heapSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        heapSort(vetor100000,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de heapSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        heapSort(vetor100000,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de heapSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

    break;
    case 6:

        //Ordenação vetor de 1000 unidades crescentes.
        crescente(vetor1000,TAM1);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        quickSort(vetor1000,1,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        quickSort(vetor1000,1,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor1000,TAM1);
        time = clock();
        quickSort(vetor1000,1,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 1000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 1000 unidades decrescentes.
        decrescente(vetor1000,TAM1);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        quickSort(vetor1000,1,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        quickSort(vetor1000,1,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor1000,TAM1);
        time = clock();
        quickSort(vetor1000,1,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 1000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");


        //Ordenação vetor de 1000 unidades aleatório.
        aleatorio(vetor1000,TAM1);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor1000,TAM1);
        time = clock();
        quickSort(vetor1000,1,TAM1);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor1000,TAM1);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%d.\nTotal de comparacoes:%d .\n",totalTroca1,totalComp1);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        quickSort(vetor1000,1,TAM1);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor1000,TAM1);
        time = clock();
        quickSort(vetor1000,1,TAM1);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 1000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 1000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades crescentes.
        crescente(vetor7500,TAM2);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        quickSort(vetor7500,1,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor7500,TAM2);
        time = clock();
        quickSort(vetor7500,1,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor7500,TAM2);
        time = clock();
        quickSort(vetor7500,1,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 7500 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades decrescentes.
        decrescente(vetor7500,TAM2);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        quickSort(vetor7500,1,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        quickSort(vetor7500,1,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor7500,TAM2);
        time = clock();
        quickSort(vetor7500,1,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 7500 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 7500 unidades aleatorias.
        aleatorio(vetor7500,TAM2);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor7500,TAM2);
        time = clock();
        quickSort(vetor7500,1,TAM2);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor7500,TAM2);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        quickSort(vetor7500,1,TAM2);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor7500,TAM2);
        time = clock();
        quickSort(vetor7500,1,TAM2);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 7500 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 7500 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades crescentes.
        crescente(vetor25000,TAM3);
        printf("Vetor crescente a ser ordenadselectionSorto:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        quickSort(vetor25000,1,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        quickSort(vetor25000,1,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor25000,TAM3);
        time = clock();
        quickSort(vetor25000,1,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 25000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades decrescentes.
        decrescente(vetor25000,TAM3);
        printf("Vetor decrescente a ser ordenselectionSortado:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        quickSort(vetor25000,1,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        quickSort(vetor25000,1,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor25000,TAM3);
        time = clock();
        quickSort(vetor25000,1,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 25000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 25000 unidades aleatorias.
        aleatorio(vetor25000,TAM3);
        printf("Vetor aleatorio a ser ordenadselectionSorto:\n");
        imprime(vetor25000,TAM3);
        time = clock();
        quickSort(vetor25000,1,TAM3);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor25000,TAM3);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        quickSort(vetor25000,1,TAM3);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor25000,TAM3);
        time = clock();
        quickSort(vetor25000,1,TAM3);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 25000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 25000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades crescentes.
        crescente(vetor50000,TAM4);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        quickSort(vetor50000,1,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor50000,TAM4);
        time = clock();
        quickSort(vetor50000,1,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor50000,TAM4);
        time = clock();
        quickSort(vetor50000,1,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 50000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades decrescentes.
        decrescente(vetor50000,TAM4);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        quickSort(vetor50000,1,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        quickSort(vetor50000,1,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor50000,TAM4);
        time = clock();
        quickSort(vetor50000,1,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 50000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 50000 unidades aleatorias.
        aleatorio(vetor50000,TAM4);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor50000,TAM4);
        time = clock();
        quickSort(vetor50000,1,TAM4);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor50000,TAM4);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        quickSort(vetor50000,1,TAM4);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor50000,TAM4);
        time = clock();
        quickSort(vetor50000,1,TAM4);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 50000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 50000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades crescentes.
        crescente(vetor75000,TAM5);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        quickSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        crescente(vetor75000,TAM5);
        time = clock();
        quickSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor75000,TAM5);
        time = clock();
        quickSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 75000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades decrescentes.
        decrescente(vetor75000,TAM5);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        quickSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        decrescente(vetor75000,TAM5);
        time = clock();
        quickSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor75000,TAM5);
        time = clock();
        quickSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 75000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 75000 unidades aleatorias.
        aleatorio(vetor75000,TAM5);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor75000,TAM5);
        time = clock();
        quickSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor75000,TAM5);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        quickSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        aleatorio(vetor75000,TAM5);
        time = clock();
        quickSort(vetor75000,1,TAM5);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 75000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 75000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades crescentes.
        crescente(vetor100000,TAM6);
        printf("Vetor crescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        quickSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        quickSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;

        crescente(vetor100000,TAM6);
        time = clock();
        quickSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 100000 unidades crescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades decrescentes.
        decrescente(vetor100000,TAM6);
        printf("Vetor decrescente a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        quickSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        quickSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        decrescente(vetor100000,TAM6);
        time = clock();
        quickSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 100000 unidades decrescentes: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

        //Ordenação vetor de 100000 unidades aleatorias.
        aleatorio(vetor100000,TAM6);
        printf("Vetor aleatorio a ser ordenado:\n");
        imprime(vetor100000,TAM6);
        time = clock();
        quickSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut1 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\nResulatado da ordenacao:\n");
        imprime(vetor100000,TAM6);
        printf("\n\nTempo do primeiro teste de quickSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut1);
        totalComp1=Comp;
        totalTroca1=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        quickSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut2 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do segundo teste de quickSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut2);
        totalComp2=Comp;
        totalTroca2=Troc;
        printf("\nTotal de trocas:%lld Total de comparacoes:%lld .\n",Troc,Comp);
        Troc=0;
        Comp=0;


        aleatorio(vetor100000,TAM6);
        time = clock();
        quickSort(vetor100000,1,TAM6);
        timef = clock();
        timeOut3 = ((float)(timef - time)) / CLOCKS_PER_SEC;
        printf("\n\nTempo do terceiro teste de quickSort\n para um vetor de 100000 unidades aleatorias: %f.\n\n", timeOut3);
        printf("Media dos 3 tempos do insertsort para um vetor de 100000 unidades inteiras: %f.",(timeOut1+timeOut2+timeOut3)/3);
        totalComp3=Comp;
        totalTroca3=Troc;
        printf("\nMedia de trocas:%lld.\nMedia de comparacoes:%lld .\n",(totalTroca1+totalTroca2+totalTroca3)/3,(totalComp1+totalComp2+totalComp3)/3);
        Troc=0;
        Comp=0;
        system("pause");

    break;
    case 7:

     return 0;

    break;

    default:

     printf("\n\tOpcao invalida!\n");

    break;
    }

    }

    }

    //CRIA UM VETOR CRESCENTE.
    void crescente(int *vetor, int TAM){
        int i,num=1;

        for(i=1; i<=TAM; i++){
         vetor[i]=num;
         num++;
         }
    }

    //CRIA UM VETOR DECESCENTE.
    void decrescente (int *vetor, int TAM){
        int i,num=TAM;

        for (i = 1;i<=TAM; i++){
         vetor[i]=num;
         num--;
         }
    }

    //CRIA UM VETOR ALEATÓRIO.
    void aleatorio(int * vetor,int TAM){
        int i;
        srand(time(0));
        for(i=1; i<=TAM; i++){
         vetor[i] = (rand()%TAM);
         }
    }

    //IMPRIMW OS VETORES.
    void imprime(int *vetor,int TAM){
        int i;
        for(i=1; i<=TAM; i++){
         printf("%d ", vetor[i]);
         }
    }

    //INICIO ALGORITMO DO INSERTIONSORT.
    void insertionSort(int* vetor,int TAM){
        int i,j,x;
        for(i=1; i<=TAM; i++){
            x = vetor[i];
            j = i-1;
            while(j>=1 && x < vetor[j]){
                Comp++;
                vetor[j+1] = vetor[j];
                j = j-1;
                Troc++;
            }
            vetor[j+1] = x;
            Comp++;
        }
    }
    //FIM ALGORITMO DO INSERTIONSORT.

    //INICIO ALGORITMO DO SELECTIONSORT.
    void selectionSort (int* vetor,int TAM){
        int i, j, aux;
        int menor, menorCont = 0;
        for (i = 1; i <=TAM; i++){
            menor = vetor[i];
            for (j = i+1; j <=TAM; j++){
                Comp++;
                if (vetor[j] < menor){
                    menor = vetor[j];
                    menorCont = j;
                    Troc++;
                }
            }
            aux = vetor[i];
            vetor[i] = menor;
            vetor[menorCont] = aux;
        }
    }
    //FIM ALGORITMO DO SELECTIONSORT.

    //INICIO  ALGORITMO DO BUBBLESORT.
    void bubbleSort (int* vetor,int TAM){
        int i, aux;
        int flag = 0;
        while (flag == 0){
            flag = 1;
            for (i = 1; i <=TAM; i++){
                 Comp++;
                if (vetor[i] > vetor[i+1]){
                    flag = 0;
                    aux = vetor[i];
                    vetor[i] = vetor[i+1];
                    vetor[i+1] = aux;
                    Troc++;
                }
            }
        }
    }
    //FIM ALGORITMO DO BUBBLESORT.

    // INICIO ALGORITIMO DO MERGESORT
    void mergeSort(int *vetor,int inicio,int TAM) {
        int i,j,k,m,*t,fim;
        fim=TAM;
        if (inicio==fim) return;
        m = (inicio+fim)/2;
        mergeSort(vetor,inicio,m);
        mergeSort(vetor,m+1,fim);
        i = inicio;
        j = m+1;
        k = 0;
        t = (int *) malloc(sizeof(int) * (fim-inicio+1));
        while(i<m+1 || j<fim+1) {
            Comp++;
            if (i==m+1) {
                t[k] = vetor[j];
                j++; k++;
                Troc++;
            } else if (j==fim+1) {
                t[k] = vetor[i];
                i++; k++;
                Troc++;
            } else if (vetor[i] < vetor[j]) {
                t[k] = vetor[i];
                i++; k++;
                Troc++;
            } else {
                t[k] = vetor[j];
                j++; k++;
                Troc++;
            }
        }
        Comp++;
        for(i=inicio;i<=fim;i++)
        vetor[i] = t[i-inicio];
        free(t);
    }
    // FIM ALGORITIMO DO MERGESORT

    // INICIO ALGORITIMO DO HEAPSORT
    void troca(int *x,int *y) {
        float temp;
        temp=*x;
        *x=*y;
        *y=temp;
        Troc++;
    }

    int filhoEsq(int i) {
     return 2*i;
    }

    int filhoDir(int i) {
     return 2*i+1;
    }


    void pushDown(int i,int heap[],int TAM) {
        int haEsq=0,haDir=0;
        if (filhoEsq(i)<=TAM) haEsq=1;
        if (filhoDir(i)<=TAM) haDir=1;
        if (haEsq&&!haDir) {
            Comp++;
            if (heap[i]<heap[filhoEsq(i)]) {
                troca(&heap[filhoEsq(i)],&heap[i]);
                pushDown(filhoEsq(i),heap,TAM);
            }
        }
        else
        if (haEsq&&haDir) {
                Comp++;
                if ((heap[i]<heap[filhoEsq(i)])||(heap[i]<heap[filhoDir(i)])) {
                Comp++;
                if (heap[filhoEsq(i)]>heap[filhoDir(i)]) {
                    troca(&heap[filhoEsq(i)],&heap[i]);
                    i = filhoEsq(i);
                }
                else {
                    troca(&heap[filhoDir(i)],&heap[i]);
                    i = filhoDir(i);
                }
                pushDown(i,heap,TAM);
            }
        }
    }

    void montaHeap(int heap[],int TAM) {
        int i;
        for (i=TAM/2;i>=1;i--) {
         pushDown(i,heap,TAM);
        }
    }

    void desmontaHeap(int heap[],int TAM) {
        int i;
        int n=TAM;
        for (i=1;i<=n;i++) {
            troca(&heap[1],&heap[TAM]);
            TAM--;
            pushDown(1,heap,TAM);
        }
    }

    void heapSort(int *vetor,int TAM) {
     montaHeap(vetor,TAM);
     desmontaHeap(vetor,TAM);
    }
    // FIM ALGORITIMO DO HEAPSORT

    // INICIO ALGORITIMO DO QUICKSORT
    void quickSort(int *vetor,int inicio,int TAM) {
        int i, j, x, y,esquerda=inicio,direita=TAM;
        i = esquerda;
        j = direita;
        x = vetor[(esquerda + direita) / 2];
        while(i <= j)
        {

            while(vetor[i] < x && i < direita)
            {
             i++;
             Comp++;
            }
            Comp++;
            while(vetor[j] > x && j > esquerda)
            {
             j--;
             Comp++;
            }
            Comp++;
            if(i <= j)
            {
                y = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = y;
                i++;
                j--;
                Troc++;
            }
        }
        if(j > esquerda)
        {
         quickSort(vetor, esquerda, j);
        }
        if(i < direita)
        {
         quickSort(vetor,  i, direita);
        }
    }
    // FIM ALGORITIMO DO QUICKSORT*/

