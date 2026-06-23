#include <iostream>

int main()
{
    int da,db,tamU=0,tamI=0,i,r=1;
    int x=0;
    bool aux = true;
    while(r==1)
    {
        std::cout<<"Digite o tamanho dos vetores (a,b)"<<std::endl;
        std::cin>>da>>db;
        double *a = new double[da];
        double *b = new double[db];
        double *u = new double[da+db];
        double *it = new double[da+db];
        std::cout<<"Digite os valores dos vetores (a,b)"<<std::endl;;
        for(i=0; i<da; i++)
        {
            std::cout<<"a["<<i<<"] = ";
            std::cin>>a[i];
        }
        std::cout<<std::endl;
        for(i=0; i<db; i++)
        {
            std::cout<<"b["<<i<<"] = ";
            std::cin>>b[i];
        }
        //CALCULO UNIAO
        for(i=0;i<da;i++){
            u[i]=a[i];
        }
        tamU=da;
        for(i=0;i<tamU;i++)
        {
            for(int j=0;j<db;j++)
            {
                if(u[i]!=b[j]) // se elemento vetor união é diferente do elemento vetor b
                {
                    aux=true;
                    for(x=0;x<tamU && aux==true;x++) //VERIFICAR SE UNIAO JA TEM ESSE ELEMENTO
                    {
                        if(b[j]==u[x]){aux = false;} // SE ENCONTRAR O ELEMENTO PARA DE VERIFICAR
                    }
                    if(aux == true) // SE NÃO ENCONTRAR NO VETOR UNIAO
                    {
                        u[tamU]=b[j];
                        tamU++;
                    }
                }
            }
        }

        //CALCULO INTERSECÇÃO
        for(i=0; i<da; i++)
        {
            for(int j=0;j<db;j++)
            {
                if(a[i]==b[j]) // QUANDO ELEMENTO VETOR A = ELEMENTO VETOR B
                {
                    aux=true;
                    for(x=0;x<tamI && aux == true; x++)
                    {
                        if(it[x]==a[i]){aux=false;}
                    }
                    if(aux == true)
                    {
                        it[tamI]=b[j];
                        tamI++;
                    }
                }
            }
        }
        //  IMPRIMIR
        std::cout<<std::endl;
        std::cout<<"A = {"<<a[0];
        for(i=1;i<da;i++)
        {
            std::cout<<", "<<a[i];
        }
        std::cout<<"}"<<std::endl;

        std::cout<<"B = {"<<b[0];
        for(i=1;i<db;i++)
        {
            std::cout<<", "<<b[i];
        }
        std::cout<<"}"<<std::endl;
        std::cout<<"U = {"<<u[0];
        for(i=1;i<tamU;i++)
        {
            std::cout<<", "<<u[i];
        }
        std::cout<<"}"<<std::endl;
        std::cout<<"It = {"<<it[0];
        for(i=1;i<tamI;i++)
        {
            std::cout<<", "<<it[i];
        }
        std::cout<<"}"<<std::endl;
        delete []a; a=0;
        delete[]b; b=0;
        delete[]it; it=0;
        delete[]u; u=0;
        tamI=0;
        tamU=0;
        std::cout<<"Se deseja repetir o processo digite 1"<<std::endl;
        std::cin>>r;
    }
    return 0;
}
