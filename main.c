/* Copyright (c) 2021 Elisée Bangya .
 *
 * This program is the proprietary software of Toboso Networks and/or its 
 * licensors, and may only be used, duplicated, modified or distributed 
 * pursuant to the terms and conditions of a separate, written license 
 * agreement executed between you and Toboso Networks (an "Authorized 
 * License"). Except as set forth in an Authorized License, Toboso Networks 
 * grants no license (express or implied), right to use, or waiver of any 
 * kind with respect to the Software, and Toboso Networks expressly reserves 
 * all rights in and to the Software and all intellectual property rights 
 * therein. If you have no authorized license, then you have no right to use 
 * this software in any way, and should immediately notify Toboso Networks 
 * and discontinuate all use of the software.
 */
/**
 * @addtogroup Elisee C-Games
 * @{
 **/

/**
 * @file     main.c
 * @author   Elisée Bangya
 * @version  1.0
 * @date     03/03/2021
 * @brief    Gess game
 *
 * @details   L'ordinateur choisit aléatoirement un chiffre compris entre 1 et 100. L'utilisateur le dévine et l'ordinateur lui donne des tips en fonctions de sa réponse.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_VALUE 100
#define MIN_VALUE 1

 /**
 * @brief Run the game
 * @param[in] argc number of argument for the function
 * @param[in] argv agument values
 * @return end code of the function
 **/
int main ( int argc, char** argv )
{
    int nbRand, nbGuess;

    /* generate value randomly */ 
    srand(time(NULL));
    nbRand = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    do
    {
        /* Ask the user to guess the number */
        printf("Guess the number ? ");
        scanf("%d", &nbGuess);

        /*Compare the random number and the one guessed by the user */
        (nbRand > nbGuess) ? printf("it's more !\n\n") : ((nbRand==nbGuess) ? printf ("Congrats, Good guess!!!\n\n") : printf("it's less !\n\n")); 

    } while (nbGuess != nbRand);
}
