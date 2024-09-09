# receber 4 argumentos correspondentes as 2 notas da n1 e 2 notas da n2;

def nota_n1(a, b) -> float:
    return (a + b) / 2.0

def nota_n2(a, b) -> float:
    return (a + b) / 2.0

def media_parcial(a, b) -> float:
    return ((2.0*a) + (3.0*b)) / 5.0

def media_final(a, b) -> float:
    return (a + b) / 2.0

if __name__=="__main__":
    
    print("Este script calcula sua média da n1, n2, parcial, ou final (caso você não tire a média na nota parcial), e diz se você está aprovado ou reprovado")
    n1_1 = float(input("nota da n1.1: "))
    n1_2 = float(input("nota da n1.2: "))
    n2_1 = float(input("nota da n2.1: "))
    n2_2 = float(input("nota da n2.2: "))
    
    nota_n1_arm = nota_n1(n1_1, n1_2) 
    
    nota_n2_arm = nota_n2(n2_1, n2_2) 

    nota_mp = media_parcial(nota_n1_arm, nota_n2_arm)

    print(f"Nota da n1: {nota_n1_arm}")
    print(f"Nota da n2: {nota_n2_arm}")
    print(f"Nota da media parcial: {nota_mp}")

    if (nota_mp >= 6):
        print("aprovado")
    else:
        nota_final_arm = float(input("insira sua nota final: "))
        if media_final(nota_mp, nota_final_arm) >= 5:
            print("aprovado")
        else:
            print("reprovado")

