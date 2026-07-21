#include <stdio.h>

// Function to calculate (base^exp) % mod
long long modPower(long long base, long long exp, long long mod)
{
    long long result = 1;

    for (long long i = 1; i <= exp; i++)
    {
        result = (result * base) % mod;
    }

    return result;
}

int main()
{
    long long P, G;
    long long a, b;      // Private keys
    long long x, y;      // Public keys
    long long ka, kb;    // Shared secret keys

    // Publicly known values
    P = 23;
    G = 9;

    printf("Diffie-Hellman Key Exchange\n\n");

    printf("Public Prime Number (P) = %lld\n", P);
    printf("Public Primitive Root (G) = %lld\n\n", G);

    // Alice's private key
    a = 4;
    printf("Alice's Private Key (a) = %lld\n", a);

    // Bob's private key
    b = 3;
    printf("Bob's Private Key (b) = %lld\n\n", b);

    // Calculate public keys
    x = modPower(G, a, P);
    y = modPower(G, b, P);

    printf("Alice's Public Key (x = G^a mod P) = %lld\n", x);
    printf("Bob's Public Key (y = G^b mod P) = %lld\n\n", y);

    // Calculate shared secret keys
    ka = modPower(y, a, P);
    kb = modPower(x, b, P);

    printf("Shared Secret Key calculated by Alice = %lld\n", ka);
    printf("Shared Secret Key calculated by Bob   = %lld\n\n", kb);

    if (ka == kb)
        printf("Key Exchange Successful!\n");
    else
        printf("Key Exchange Failed!\n");

    return 0;
}
