#include <iostream>
using namespace std;

int Operasi(){
    cout<<"Pilih Operasi :"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    return 0;
}

int KonversDesBin(int jumlah){
  int i, konversbiner[100];
    for(i=0; jumlah>0; i++){
        konversbiner[i] = jumlah%2;
        jumlah = jumlah/2;
    }
          
    cout<<"Konversi ke Biner: ";
    for(i=i-1 ;i>=0 ;i--) {
        cout << konversbiner[i];
    }
    cout<<endl;
    return 0;
}

int KonversDesOktal(int jumlah){
    int tetap = 0,i = 1, nil;
    while(jumlah>0){
        nil = jumlah % 8;
        jumlah /= 8;
        tetap += nil * i;
        i *= 10;
    }
    cout<<"Konversi ke Oktal: "<<tetap<<endl;
    return 0;
}

int KonversBinDes(int jumlah){
    int i = 0, tetap = 1, p;
    while(jumlah>0){       
        p = jumlah % 10;
        i = i + p * tetap;
        tetap *=2;
        jumlah /= 10;
    }
    cout<<"Konversi ke Desimal: "<<i<<endl;
    return 0;
}
int KonversBinOktal(int jumlah){
  int i = 0, tetap = 1, p;
  while(jumlah>0){       
      p = jumlah % 10;
      i = i + p * tetap;
      tetap *=2;
      jumlah /= 10;
    }
  int tetap1 = 0, a = 1, nil;
    while(i>0){
        nil = i % 8;
        i /= 8;
        tetap1 += nil * a;
        a *= 10;
    }
    cout<<"Konversi ke Oktal: "<<tetap1<<endl;
    return 0;
}
int KonversOktDes(int jumlah){
  int i = 0, tetap = 1, p;
  while(jumlah>0){       
      p = jumlah % 10;
      i = i + p * tetap;
      tetap *=8;
      jumlah /= 10;
  }
  cout<<"Konversi ke Desimal: "<<i<<endl;
  return 0;
}
int KonversOktBiner(int jumlah){
  int i = 0, tetap = 1, p;
  while(jumlah>0){       
      p = jumlah % 10;
      i = i + p * tetap;
      tetap *=8;
      jumlah /= 10;
  }
  int a, konversbiner[100];
    for(a=0; i>0; a++){
        konversbiner[a] = i%2;
        i = i/2;
    }
          
    cout<<"Konversi ke Biner: ";
    for(a=a-1 ;a>=0 ;a--) {
        cout << konversbiner[a];
    }
    cout<<endl;
    return 0;
}

int main(){
  int pilhome;
  int pil1,  pil2, pil3, pil4, pil5,pildefault;
  int jum, i, bilangan[100], jumlah=0, ulang, kurang, kal, ul1, desi[100], tetap, p, konversbiner[100], konversbiner2[100], pem, desimal, bilbagi, dibagi, sisa, jml, nil, des[100], tetap1, bin[100],oktal[100];
  float hasilbagi,bagi,pembagi;

  Home:
  system("clear");
  cout<<"========================================"<<endl;
  cout<<"               KALKULATOR               "<<endl;
  cout<<"========================================"<<endl;
  cout<<"  1. Desimal"<<endl;
  cout<<"  2. Biner"<<endl;
  cout<<"  3. Oktal"<<endl;
  cout<<"  4. Konversi"<<endl;
  cout<<"  5. KELUAR"<<endl;
  cout<<endl;
  cout<<"Pilih: ";
  cin>>pilhome;
  system("clear");

  switch(pilhome){

    case 1 :
    Operasi();      
    cout<<"Pilih: ";
    cin>>pil1;
    //penjumlahan desimal//
        if(pil1==1){
            Ulangjum1:
            system("clear");
            jumlah = 0;
            cout<<"Banyak bilangan yang dijumlah: ";
            cin>>jum;

            for (i=0; i<jum; i++){
              cout<<"Input bilangan "<<i+1<<" : ";
              cin>>bilangan[i];
            }
            
            for (i=0; i<jum; i++){
              jumlah += bilangan[i];
            }

            cout<<endl;
            cout<<"Hasil Penjumlahan: "<<jumlah<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    goto Ulangjum1;
                 }else if(ulang == 3){
                    goto Home;
                }else{
                    system("clear");
                    break;
                }
        }
        
    //pengurangan desimal//
        else if(pil1==2){
            Ulangkurang1:
            system("clear");
            cout<<"Banyak bilangan yang dikurangkan: ";
            cin>>kurang;

            for(i=0; i<kurang; i++){
              cout<<"Input Bilangan "<<i+1<<" : ";
              cin>>bilangan[i];
            }

            jumlah = bilangan[0];
            for(i=1; i<kurang; i++){
              jumlah -= bilangan[i];
            }
            
            cout<<endl;
            cout<<"Hasil Pengurangan : "<<jumlah<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    goto Ulangkurang1;
                }else if(ulang == 3){
                    goto Home;
                }else{
                    system("clear");
                    break;
                }
        }
        
    //perkalian desimal//
        else if(pil1==3){
            Ulangkali1:
            jumlah = 1;
            system("clear");
            cout<<"Banyak bilangan yang dikalikan: ";
            cin>>kal;

            for(i=0; i<kal; i++){
              cout<<"Input Bilangan "<<i+1<<" : ";
              cin>>bilangan[i];
            }
            
            for(i=0; i<kal; i++){
              jumlah *= bilangan[i];
            }
            
            cout<<endl;
            cout<<"Hasil Kali : "<<jumlah<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    goto Ulangkali1;
                }else if(ulang == 3){
                    goto Home;
                }else{
                    system("clear");
                    break;
                }
        }
        
    //pembagian desimal//
        else if(pil1==4){
            Ulangbagi1:
            system("clear");
            cout<<"Bilangan yang dibagi: ";
            cin>>bagi;
            cout<<"Bilangan pembagi: ";
            cin>>pembagi;
            
            hasilbagi = bagi/pembagi;
            
            cout<<endl;
            cout<<"Hasil Pembagian : "<<hasilbagi<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    goto Ulangbagi1;
                }else if(ulang == 3){
                    goto Home;
                }else if(ulang == 2){
                    system("clear");
                    break;
                }
                else{
                    cout<<"Inputan anda invalid"<<endl;
                    cout<<"Ulang?, 1.Ya/2.Tidak"<<endl;
                    cin>>ul1;
                        if(ul1==1){
                            goto Home;
                        }
                        else{
                            break;
                        }
                }
        }
        break;

    case 2:
    Operasi();
    cout<<"Pilih: ";
    cin>>pil2;
    //penjumlahan biner//
        if(pil2==1){
            Ulangjum2:
            system("clear");
            cout<<"Banyak bilangan yang dijumlah: ";
            cin>>jum;

            for (i=0; i<jum; i++){
                cout<<"Input biner "<<i+1<<" : ";
                cin>>bilangan[i];
              
                desi[i] = 0;
                tetap = 1;
                while(bilangan[i]>0){       
                p = bilangan[i] % 10;
                desi[i] = desi[i] + p * tetap;
                tetap *=2;
                bilangan[i] /= 10;
                }
            }
            
            for (i=0; i<jum; i++){
                jumlah += desi[i];
            }
            
            for(i=0; jumlah>0; i++){
                konversbiner[i] = jumlah%2;
                jumlah = jumlah/2;
            }
          
            cout<<"Hasil penjumlahan: ";
            for(i=i-1 ;i>=0 ;i--) {
                cout << konversbiner[i];
            }

            cout<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    jumlah = 0;
                    goto Ulangjum2;
                }else if(ulang == 3){
                    jumlah = 0;
                    goto Home;
                }else if(ulang == 2){
                    system("clear");
                    break;
                }
                else{
                    system("clear");
                    cout<<"Inputan anda invalid"<<endl;
                    cout<<"Ulang?, 1.Ya/2.Tidak"<<endl;
                    cin>>ul1;
                        if(ul1==1){
                            goto Home;
                        }
                        else{
                            break;
                        }
                }
        }

    //pengurangan biner//
        else if(pil2==2){
            Ulangkur2:
            system("clear");
            cout<<"Banyak bilangan yang dikurang: ";
            cin>>jum;

            for (i=0; i<jum; i++){
                cout<<"Input biner "<<i+1<<" : ";
                cin>>bilangan[i];
              
                desi[i] = 0;
                tetap = 1;
                while(bilangan[i]>0){       
                    p = bilangan[i] % 10;
                    desi[i] = desi[i] + p * tetap;
                    tetap *=2;
                    bilangan[i] /= 10;}
            }
            
            jumlah = desi[0];
            for(i=1; i<jum; i++){
                jumlah -= desi[i];
            }
        
            for(i=0; jumlah>0; i++){
                konversbiner[i] = jumlah%2;
                jumlah = jumlah/2;
            }

            cout<<"Hasil pengurangan: ";
            for(i=i-1 ;i>=0 ;i--) {
                cout << konversbiner[i];
            }

            cout<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
            if(ulang == 1){
                system("clear");
                jumlah = 0;
                goto Ulangkur2;
            }else if(ulang == 3){
                jumlah = 0;
                goto Home;
            }else if(ulang == 2){
                system("clear");
                break;
            }
            else{
                system("clear");
                cout<<"Inputan anda invalid"<<endl;
                cout<<"Ulang?, 1.Ya/2.Tidak"<<endl;
                cin>>ul1;
                    if(ul1==1){
                        goto Home;
                    }
                    else{
                        break;
                    }
            }

        }

    //perkalinan biner//
        else if(pil2==3){
            Ulangkal2:
            system("clear");
            cout<<"Banyak bilangan yang dikali: ";
            cin>>jum;

            for (i=0; i<jum; i++){
                cout<<"Input biner "<<i+1<<" : ";
                cin>>bilangan[i];

                desi[i] = 0;
                tetap = 1;
                while(bilangan[i]>0){       
                    p = bilangan[i] % 10;
                    desi[i] = desi[i] + p * tetap;
                    tetap *=2;
                    bilangan[i] /= 10;
                }
            }

            jumlah = 1;
            for(i=0; i<jum; i++){
                jumlah *= desi[i];
            }

            for(i=0; jumlah>0; i++){
                konversbiner[i] = jumlah%2;
                jumlah = jumlah/2;
            }

            cout<<"Hasil perkalian: ";
            for(i=i-1 ;i>=0 ;i--) {
                cout << konversbiner[i];
            }

            cout<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    jumlah = 0;
                    goto Ulangkal2;
                }else if(ulang == 3){
                    jumlah = 0;
                    goto Home;
                }else if(ulang == 2){
                    system("clear");
                    break;
                }
                else{
                    system("clear");
                    cout<<"Inputan anda invalid"<<endl;
                    cout<<"Ulang?, 1.Ya/2.Tidak"<<endl;
                    cin>>ul1;
                        if(ul1==1){
                            goto Home;
                        }
                        else{
                            break;
                        }
                }   
        }
        
    //pembagian biner//    
        else if(pil2==4){
            Ulangbagi2:
            system("clear");
            cout<<"Bilangan yang dibagi: ";
            cin>>jum;
            cout<<"Bilangan pembagi: ";
            cin>>pem;

            dibagi = 0;
            tetap = 1;
            while(jum>0){       
                p = jum % 10;
                dibagi = dibagi + p * tetap;
                tetap *=2;
                jum /= 10;
            }

            bilbagi = 0;
            tetap = 1;
            while(pem>0){       
                p = pem % 10;
                bilbagi = bilbagi + p * tetap;
                tetap *=2;
                pem /= 10;
            }
              
            jml = dibagi/bilbagi;
            for(i=0; jml>0; i++){
                konversbiner[i] = jml%2;
                jml = jml/2;
            }
            
            cout<<"Hasil pembagian: ";
            for(i=i-1 ;i>=0 ;i--) {
                cout << konversbiner[i];
            }

            sisa = dibagi % bilbagi;
            for(i=0; sisa>0; i++){
                konversbiner2[i] = sisa%2;
                sisa = sisa/2;
            }
            
            cout<<" dengan sisa: ";
            for(i=i-1 ;i>=0 ;i--) {
                cout << konversbiner2[i];
            }
            
            cout<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    jumlah = 0;
                    goto Ulangbagi2;
                }else if(ulang == 3){
                    jumlah = 0;
                    goto Home;
                }else if(ulang == 2){
                    system("clear");
                    break;
                }
                else{
                    system("clear");
                    cout<<"Inputan anda invalid"<<endl;
                    cout<<"Ulang?, 1.Ya/2.Tidak"<<endl;
                    cin>>ul1;
                        if(ul1==1){
                            goto Home;
                        }
                        else{
                            break;
                        }
                }
        }
        break;
        
    case 3:
    Operasi();
    cout<<"Pilih: ";
    cin>>pil3;
    //penjumlahan oktal//
        if(pil3==1){
            Ulangjum3:
            system("clear");
            cout<<"Banyak bilangan yang dijumlah: ";
            cin>>jum;

            for (i=0; i<jum; i++){
                cout<<"Input oktal "<<i+1<<" : ";
                cin>>bilangan[i];
              
                desi[i] = 0;
                tetap = 1;
                while(bilangan[i]>0){       
                    p = bilangan[i] % 10;
                    desi[i] = desi[i] + p * tetap;
                    tetap *=8;
                    bilangan[i] /= 10;
                }
            }
            
            for (i=0; i<jum; i++){
                jumlah += desi[i];
            }

            tetap = 0;
            i = 1;
            while(jumlah>0){
                nil = jumlah % 8;
                jumlah /= 8;
                tetap += nil * i;
                i *= 10;
            }
            
            cout<<"Hasil penjumlahan : ";
            cout<<tetap<<endl;
            cout<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    jumlah = 0;
                    goto Ulangjum3;
                }else if(ulang == 3){
                    jumlah = 0;
                    goto Home;
                }else if(ulang == 2){
                    system("clear");
                    break;
                }
                else{
                    system("clear");
                    cout<<"Inputan anda invalid"<<endl;
                    cout<<"Ulang?, 1.Ya/2.Tidak"<<endl;
                    cin>>ul1;
                        if(ul1==1){
                            goto Home;
                        }
                        else{
                            break;
                        }
                }
        }
    //Pengurangan oktal//
        if(pil3==2){
        Ulangkur3:
        system("clear");
        cout<<"Banyak bilangan yang dikurang: ";
        cin>>jum;

        for (i=0; i<jum; i++){
            cout<<"Input oktal "<<i+1<<" : ";
            cin>>bilangan[i];
              
            desi[i] = 0;
            tetap = 1;
            while(bilangan[i]>0){       
                p = bilangan[i] % 10;
                desi[i] = desi[i] + p * tetap;
                tetap *=8;
                bilangan[i] /= 10;}
            }
            jumlah = desi[0];
            for (i=1; i<jum; i++){
                jumlah -= desi[i];
            }

            tetap = 0;
            i = 1;
            while(jumlah>0){
                nil = jumlah % 8;
                jumlah /= 8;
                tetap += nil * i;
                i *= 10;
            }
            
            cout<<"Hasil pengurangan : ";
            cout<<tetap<<endl;
            cout<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    jumlah = 0;
                    goto Ulangkur3;
                }else if(ulang == 3){
                    jumlah = 0;
                    goto Home;
                }else if(ulang == 2){
                    system("clear");
                    break;
                }
                else{
                    system("clear");
                    cout<<"Inputan anda invalid"<<endl;
                    cout<<"Ulang?, 1.Ya/2.Tidak"<<endl;
                    cin>>ul1;
                        if(ul1==1){
                            goto Home;
                        }
                        else{
                            break;
                        }
                }
        }

    //Perkalian oktal//
        if(pil3==3){
        Ulangkal3:
        system("clear");
        cout<<"Banyak bilangan yang dikali: ";
        cin>>jum;

        for (i=0; i<jum; i++){
            cout<<"Input oktal "<<i+1<<" : ";
            cin>>bilangan[i];
              
            desi[i] = 0;
            tetap = 1;
            while(bilangan[i]>0){       
                p = bilangan[i] % 10;
                desi[i] = desi[i] + p * tetap;
                tetap *=8;
                bilangan[i] /= 10;}
            }
            
            jumlah = 1;
            for (i=0; i<jum; i++){
                jumlah *= desi[i];
            }

            tetap = 0;
            i = 1;
            while(jumlah>0){
                nil = jumlah % 8;
                jumlah /= 8;
                tetap += nil * i;
                i *= 10;
            }
            
            cout<<"Hasil perkalian : ";
            cout<<tetap<<endl;
            cout<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    jumlah = 0;
                    goto Ulangkal3;
                }else if(ulang == 3){
                    jumlah = 0;
                    goto Home;
                }else if(ulang == 2){
                    system("clear");
                    break;
                }
                else{
                    system("clear");
                    cout<<"Inputan anda invalid"<<endl;
                    cout<<"Ulang?, 1.Ya/2.Tidak"<<endl;
                    cin>>ul1;
                        if(ul1==1){
                            goto Home;
                        }
                        else{
                            break;
                        }
                }
        }

    //Pembagian oktal//
        if(pil3==4){
        Ulangbagi3:
        system("clear");
        cout<<"Bilangan yang dibagi: ";
        cin>>jum;
        cout<<"Bilangan pembagi: ";
        cin>>pem;

        dibagi = 0;
        tetap = 1;
        while(jum>0){       
            p = jum % 10;
            dibagi = dibagi + p * tetap;
            tetap *=8;
            jum /= 10;
        }

            bilbagi = 0;
            tetap = 1;
            while(pem>0){       
                p = pem % 10;
                bilbagi = bilbagi + p * tetap;
                tetap *=8;
                pem /= 10;
            }
        
            jml = dibagi/bilbagi;
            
            tetap = 0;
            i = 1;
            while(jml>0){
                nil = jml % 8;
                jml /= 8;
                tetap += nil * i;
                i *= 10;
            }
            
            cout<<"Hasil pembagian: "<<tetap;

            sisa = dibagi % bilbagi;
            tetap1 = 0;
            i = 1;
            while(sisa>0){
                nil = sisa % 8;
                sisa /= 8;
                tetap1 += nil * i;
                i *= 10;
            }
            
            cout<<" dengan sisa: "<<tetap1;
            
            cout<<endl<<endl;
            cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
            cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    jumlah = 0;
                    goto Ulangbagi3;
                }else if(ulang == 3){
                    jumlah = 0;
                    goto Home;
                }else if(ulang == 2){
                    system("clear");
                    break;
                }
                else{
                    system("clear");
                    cout<<"Inputan anda invalid"<<endl;
                    cout<<"Ulang?, 1.Ya/2.Tidak"<<endl;
                    cin>>ul1;
                    if(ul1==1){
                        goto Home;
                    }
                    else{
                        break;
                    }
                }
        }
        break;
    
    case 4:
    cout<<"Pilih operasi konversi:"<<endl;
    cout<<"1. Desimal"<<endl;
    cout<<"2. Biner"<<endl;
    cout<<"3. Oktal"<<endl;
    cout<<"Pilih: ";
    cin>>pil4;

    system("clear");
        if(pil4==1){
          UlangDesimal:
          cout<<"Jumlah bilangan Desimal yang dikonversi: ";
          cin>>jum;
          cout<<endl;
          for(i = 0; i < jum; i++ ){
              cout<<"Input bilangan desimal "<<i+1<<": ";
              cin>>des[i];
              jumlah = des[i];
              KonversDesBin(jumlah);
              KonversDesOktal(jumlah);
              cout<<endl;
          }
          cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
          cin>>ulang;
              if(ulang == 1){
                  system("clear");
                  goto UlangDesimal;
              }else if(ulang == 3){
                  goto Home;
              }else{
                  system("clear");
                  break;
              }
        }
        else if(pil4==2){
          UlangBiner:
          cout<<"Jumlah bilangan Biner yang dikonversi: ";
          cin>>jum;
          cout<<endl;
          for(i = 0; i < jum; i++){
              cout<<"Input bilangan biner: "<<i+1<<": ";
              cin>>bin[i];
              jumlah = bin[i];
              KonversBinDes(jumlah);
              KonversBinOktal(jumlah);
              cout<<endl;
          }
          cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
          cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    goto UlangBiner;
                }else if(ulang == 3){
                    goto Home;
                }else{
                    system("clear");
                    break;
                }
        }
        else if(pil4==3){
          Ulangoktal:
          system("clear");
          cout<<"Jumlah bilangan Oktal yang dikonversi: ";
          cin>>jum;
          cout<<endl;
          for(i = 0; i < jum; i++){
              cout<<"Input bilangan oktal: "<<i+1<<": ";
              cin>>oktal[i];
              jumlah = oktal[i];
              KonversOktDes(jumlah);
              KonversOktBiner(jumlah);
              cout<<endl;
          }
          cout<<"Ulang? 1.Ya/2.Tidak/3.Home"<<endl;
          cin>>ulang;
                if(ulang == 1){
                    system("clear");
                    goto Ulangoktal;
                }else if(ulang == 3){
                    goto Home;
                }else{
                    system("clear");
                    break;
                }
        }
        break;
    
    case 5:
    system("clear");
    break;
    
    default:
    cout<<"Inputan anda invalid"<<endl;
    cout<<"1.Home/2.Keluar"<<endl;
    cin>>pildefault;
        if(pildefault==1){
            system("clear");
            goto Home;
        }
        else{
            system("clear");
            break;
        }
  }
}
