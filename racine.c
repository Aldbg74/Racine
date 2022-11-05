/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   racine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexisdrago <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:50:50 by alexisdrago       #+#    #+#             */
/*   Updated: 2022/11/04 17:53:38 by alexisdrago      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <math.h>
#define NFOIS 5

int main()
{       int i ;
        float x ;
        float racx ;

        printf ("bonjour\n");
        printf ("Je voudrais calculer des racines carres'\n");

        for (i=0 ; i<NFOIS ; i++)
                {printf (" Donnez un nombre ; ");
                scanf ("%f", &x) ;
                if (x <0.0)
                        printf("Le nombre %f ne possede pas de racine carree\n" , x);
                else
                { racx =sqrt (x);
                printf ("le nombre %f a pour racine carree : %f\n", x, racx);
                }
        }
}       
