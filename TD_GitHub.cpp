//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age) {
    if (age >= 18) {
        return true;
    } else {
        return false;
    }
}

int exp(int  nbre, int exp) {
    int  resultat = 1;
    int i;
    if (exp>= 0) {
        for (i = 1; i <= exp; i++) {
            resultat *= nombre;
        }
    } else {
        for (i = 1; i <= -exp; i++) {
            resultat /= nbre;
        }
    }
    return resultat;
}
float TVA(int prix) {
    const float tauxTVA = 0.196;
    float prixTVA = prix * tauxTVA;
    float prixTotal = prix + prixTVA;
    return prixTotal;
}


int plusGrand(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}





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