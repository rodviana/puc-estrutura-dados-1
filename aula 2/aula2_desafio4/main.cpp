#include <iostream>

int main()
{
    int num=0,a=1,b,aux;
    std::cout<<"Escolha a quantidade de mesas(min: 50mesas / max 200mesas)"<<std::endl;
    while(num<50 || num>200)
    {
        std::cin>>num;
        if(num<50 || num>200){std::cout<<"(Escolha uma quantidade entre 50 e 200)"<<std::endl;}
    }
    int *mesa = new int[num];
    for(int i=0; i<num; i++)
    {
        mesa[i]=6;
    }
    while(a!=0)
    {
        std::cout<<"Temos mesas de numero 1 até "<<num<<" escolha a que deseja sentar e informe quantas lugares deseja"<<std::endl;
        std::cin>>a;
        if(a==0)
        {
            return 0;
        }
        std::cin>>b;
        if((mesa[a-1]-b)>=0)
        {
            std::cout<<"reserva realizada com sucesso"<<std::endl;
            mesa[a-1]=mesa[a-1]-b;
        }
        else
        {
            std::cout<<"<não há lugares suficiente na mesa pretendida"<<std::endl;
        }
        for(int i=0;i<num;i++)
        {
            if(mesa[i]==0)
            {
               aux++;
            }
        }
        if(aux==num)
        {
            std::cout<<"restaurante lotado"<<std::endl;
            return 0;
        }
        aux=0;
        std::cout<<std::endl<<"CASO DESEJE ENCERRAR AS RESERVAS, SELECIONE A MESA NUMERO 0"<<std::endl<<std::endl;
    }
    return 0;
}
