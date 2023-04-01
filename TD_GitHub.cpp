//Fonctions réalisées par l'étudiant 1 :










//Fonctions réalisées par l'étudiant 2 :

bool estPaire(int nb) {

	if (nb%2==0)
	{
		return true;
	}
	else
	{
		return false;
	}
	//return (nb % 2 == 0);
}

int sommeNombre(int nb) {

	for (int i = 1;  i < nb; i++)
	{
		nb = nb + i;
	}
	return nb;

}

float salaireNet(int brut) {

	return brut * (1 - 23 / 100);
}

int plusPetit(int a,int b,int c) {

	if (a<b && a<c)
	{
		return a;
	}

	else if (b<a && b<c)
	{
		return b;
	}
	else 
	{
		return c;
	}

}



//Fonctions réalisées par l'étudiant 3 :














int main() {

}