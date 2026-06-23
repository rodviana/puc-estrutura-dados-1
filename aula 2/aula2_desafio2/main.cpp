#include <iostream>

int main()
{
    int da,db,i,r=1;
    while(r==1)
    {
        std::cout<<"Digite o tamanho dos vetores (a,b)"<<std::endl;
        std::cin>>da>>db;
        float *a = new float[da];
        float *b = new float[db];
        float c[da];
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
        std::cout<<std::endl;
        if(da==db)
        {
            for(i=0;i<da;i++)
            {
                c[i]=a[i]+b[i];
            }
        }
        //  IMPRIMIR
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
        if(da==db)
        {
            std::cout<<"C = {"<<c[0];
            for(i=1;i<da;i++)
            {
                std::cout<<", "<<c[i];
            }
            std::cout<<"}"<<std::endl;
        }
        delete []a; a=0;
        delete[]b; b=0;
        std::cout<<"Se deseja repetir o processo digite 1"<<std::endl;
        std::cin>>r;
    }
    return 0;
}
