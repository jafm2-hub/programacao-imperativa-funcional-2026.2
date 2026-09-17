#include <stdio.h>

int main()
{

    int hInicio, mInicio, sInicio, duracaoTotalSeg, tempoInicioSeg, tempoFinalSeg, hFinal, mFinal, sFinal;

    printf("Digite o horário de início (hh:mm:ss): ");
    scanf("%d:%d:%d", &hInicio, &mInicio, &sInicio);
    printf("Digite a duração do experimento em segundos: ");
    scanf("%d", &duracaoTotalSeg);

    tempoInicioSeg = ((hInicio * 3600) + (mInicio * 60) + sInicio); 
    tempoFinalSeg = tempoInicioSeg + duracaoTotalSeg;
    hFinal = (tempoFinalSeg / 3600) % 24;
    mFinal = (tempoFinalSeg % 3600) / 60;
    sFinal = tempoFinalSeg % 60;

    printf("\nHorário de término: %02d:%02d:%02d\n", hFinal, mFinal, sFinal);

    return 0;
}