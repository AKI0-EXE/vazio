#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	/*
	0=a
	1=b
	2=c
	3=d
	4=e
	5=f
	6=g
	7=h
	8=i
	9=j
	10=k
	11=l
	12=m
	13=n
	14=o
	15=p
	16=q
	17=r
	18=s
	19=t
	20=u
	21=v
	22=w
	23=x
	24=y
	25=z
	26=1
	27=2
	28=3
	29=4
	30=5
	31=6
	32=7
	33=8
	34=9
	35=0
	36=.
	37=,
	38=?
	39=!
	40='
	41="
	42=(
	43=)
	44=&
	45=:
	46=;
	47=/
	48=_
	49='='
	50=+
	51=-
	52=$
	53=@
	*/
    int j,j2, i, i2 , i3;
	char textmorse[1000][1000];
	char text[1000][80];
	char codmorse[54][7];
	char alfabeto[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0','.',',','?','!','`','"','(',')','&',':',';','/','_','=','+','-','$','@'};
	scanf("%s", &text[1]);
	strcpy(codmorse[0],".-");
	strcpy(codmorse [1],"-...");
	strcpy(codmorse [2],"-.-.");
	strcpy(codmorse [3],"-..");
	strcpy(codmorse [4],".");
	strcpy(codmorse [5],"..-.");
	strcpy(codmorse [6],"--.");
	strcpy(codmorse [7],"....");
	strcpy(codmorse [8],"..");
	strcpy(codmorse [9],".---");
	strcpy(codmorse [10],"-.-");
	strcpy(codmorse [11],".-..");
	strcpy(codmorse [12],"--");
	strcpy(codmorse [13],"-.");
	strcpy(codmorse [14],"---");
	strcpy(codmorse [15],".--.");
	strcpy(codmorse [16],"--.-");
	strcpy(codmorse [17],".-.");
	strcpy(codmorse [18],"...");
	strcpy(codmorse [19],"-");
	strcpy(codmorse [20],"..-");
	strcpy(codmorse [21],"...-");
	strcpy(codmorse [22],".--");
	strcpy(codmorse [23],"-..-");
	strcpy(codmorse [24],"-.--");
	strcpy(codmorse [25],"--..");
	strcpy(codmorse [26],".----");
	strcpy(codmorse [27],"..---");
	strcpy(codmorse [28],"...--");
	strcpy(codmorse [29],"....-");
	strcpy(codmorse [30],".....");
	strcpy(codmorse [31],"-....");
	strcpy(codmorse [32],"--...");
	strcpy(codmorse [33],"---..");
	strcpy(codmorse [34],"----.");
	strcpy(codmorse [35],"-----");
	strcpy(codmorse [36],".-.-.-");
	strcpy(codmorse [37],"--..--");
	strcpy(codmorse [38],"..--..");
	strcpy(codmorse [39],"-.-.--");
	strcpy(codmorse [40],".----.");
	strcpy(codmorse [41],".-..-.");
	strcpy(codmorse [42],"-.--.");
	strcpy(codmorse [43],"-.--.-");
	strcpy(codmorse [44],".-...");
	strcpy(codmorse [45],"---...");
	strcpy(codmorse [46],"-.-.-.");
	strcpy(codmorse [47],"-..-.");
	strcpy(codmorse [48],"..--.-");
	strcpy(codmorse [49],"-...-");
	strcpy(codmorse [50],".-.-.");
	strcpy(codmorse [51],"-....-");
	strcpy(codmorse [52],"...-..-");
	strcpy(codmorse [53],".--.-.");

	i2=0;
	do
	{
		j=0;
		do
		{
			i=0;
			j2=0;
			if ((text[j][j2])==(alfabeto[i]))
			{
				i3=0;
				do
				{
					textmorse[i2]=codmorse[i][i3];
					i2++;
					i3++;
				} while (codmorse[i][i3]=='/0');
				textmorse[i2]=(' ');
				j2++;
			}
			i++;
		}while(text[j][i]=='/0');
		j++;
		i=0;
	}while(text[j][i]==' ');
	return(0);
}

void menu()
{

}

char formatartex (text[])
{
	int i;
	do
	{
		for(i=0;i<=80;i++)
	}while()
}

void main()
{
    char text[]="William Henry Gates III KBE GCIH (Seattle, 28 de outubro de 1955) mais conhecido como Bill Gates,\
 e um magnata, empresario, diretor executivo, investidor, filantropo e autor americano, que ficou conhecido por \
 fundar junto com Paul Allen a Microsoft a maior e mais conhecida empresa de software do mundo em termos de valor \
 de mercado. Gates ocupa atualmente o cargo de presidente nao-executivo da Microsoft alem de ser classificado \
 regularmente como a pessoa mais rica do mundo, posicao ocupada por ele de 1995 a 2007, 2009, e de 2014 a 2017. E \
 um dos pioneiros na revolucao do computador pessoal. Gates nasceu em uma familia de classe media de Seattle. Seu \
 pai, William H. Gates, era advogado de grandes empresas, e sua mae, Mary Maxwell Gates, foi professora da \
 Universidade de Washington e diretora de bancos. Bill Gates e as suas duas irmas, Kristanne e Libby, \
 frequentaram as melhores escolas particulares de sua cidade natal, e Bill tambem participou do \
 Movimento Escoteiro ainda quando jovem. Bill Gates, foi admitido na prestigiosa Universidade \
 Harvard, (conseguindo 1590 SATs dos 1600 possiveis) mas abandonou os cursos de Matematica e \
 Direito no terceiro ano para dedicar-se a Microsoft. Trabalhou na Taito com o desenvolvimento de \
 software basico para maquinas de jogos eletronicos (fliperamas) ate seus 16 anos. Tambem \
 trabalhou como pesquisador visitante na University of Massachusetts at Amherst, UMASS, Estados Unidos, quando \
 com 17 anos, desenvolveu junto com Paul Allen um software para leitura de fitas magneticas, com informacoes \
 de trafego de veiculos, em um chip Intel 8008. Com esse produto, Gates e Allen criaram uma empresa, \
 a Traf-o-Data, porem os clientes desistiram do negocio quando descobriram a idade dos donos. Enquanto \
 estudavam em Harvard, os jovens desenvolveram um interpretador da linguagem BASIC para um dos primeiros \
 computadores pessoais a serem lancado nos Estados Unidos - o Altair 8800. Apos um modesto sucesso na \
 comercialização deste produto, Gates e Allen fundaram a Microsoft, uma das primeiras empresas no mundo \
 focadas exclusivamente no mercado de programas para computadores pessoais ou PCs. Gates adquiriu ao \
 longo dos anos uma fama de visionario (apostou no mercado de software na epoca em que o hardware era \
 considerado muito mais valioso) e de negociador agressivo, chegando muitas vezes a ser acusado por \
 concorrentes da Microsoft de utilizar praticas comerciais desleais. Nos anos 1980, a IBM, lider \
 no mercado de grandes computadores, resolveu entrar no mercado da microinformatica com o PC, \
 porem faltava o Sistema Operacional. Para isso, fechou contrato com a recem-criada Microsoft. Todavia, \
 a Microsoft nao possuia o software ainda. O jovem Bill Gates foi a uma pequena empresa que havia \
 desenvolvido o sistema para o processador da Intel e decidiu compra-lo, pagou cerca de US$ 50 mil, personalizou \
 o programa e vendeu-o por US$ 8 milhoes, mantendo a licenca do produto. Este viria a ser o MS-DOS. \
 Fonte: https://pt.wikipedia.org/wiki/Bill_Gates";

    printf("\n\n%s",text);
    return 0;
}


