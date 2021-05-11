/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   FormSerial2.cpp
 * Author: Patron
 *
 * Created on 1 de mayo de 2021, 22:51
 */

#include "Gen_FormSerial.h"

FormSerial::FormSerial() {
    widget.setupUi(this);
    QObject::connect(widget.Mac_ComboBox, SIGNAL(currentIndexChanged(const QString)), this, SLOT(crearSerial(const QString))); 
}

FormSerial::~FormSerial() {
}

void FormSerial::Log(QString save){
    std::ofstream archivo; 
    std::time_t now = time(0);
    std::string timer = ctime(&now);
    
    archivo.open("Log.txt", std::ios::in | std::ios::app);
    if(!archivo.is_open()){
      QMessageBox::warning(this , "Error", "No se Pudo encontrar el archivo Logs.txt");
    }else{
      if (save.trimmed().isEmpty()){
           save = "empty";
        }
      archivo << "========================================" << timer << save.toStdString() << std::endl;
      archivo.close();
    }
}
   // forma en vector PopCB
/*void FormSerial::PopCB(std::vector<std::string> CB){
    
    std::stringstream elem;
    std::string str;
    for (int i = 0; i < (int)CB.size(); i++){
        elem << CB.at(i);
        elem >> str;
        widget.Mac_ComboBox->addItem(QString::fromStdString(str));
    }
}*/


void FormSerial::PopCB(const QStringList &CB){
    
    for (int i = 0; i < CB.size(); i +=2 ){
        Log("Antes del IF --->  " + CB.at(i));
        if(CB[i] != "0.0.0.0" && CB[i] != "0000:0000:0000:0000:0000:0000:0000:0000"){
           Log("verdadero ------> " + CB[i+1]);
           //widget.Mac_ComboBox->addItem("None");
           widget.Mac_ComboBox->addItem(CB[i+1]);
        }else{
            Log("Falso " + CB[i]);
        }
    }
    
    widget.Days_ComboBox->addItem("15");
    widget.Days_ComboBox->addItem("30");
    widget.Days_ComboBox->addItem("60");
    widget.Days_ComboBox->addItem("00");
}

//   forma en vector getMacAddress()
/*   
std::vector<std::string> FormSerial::getMacAddress(){   //https://stackoverflow.com/questions/13646621/how-to-get-mac-address-in-windows-with-c
    PIP_ADAPTER_INFO AdapterInfo;
    DWORD dwBufLen = sizeof(IP_ADAPTER_INFO);
    char *mac_addr = (char*)malloc(18);
    //QStringList listaMAC, listaIP;
    std::vector<std::string> salida;
    std::string elem;
    std::stringstream Selem;
    
    AdapterInfo = (IP_ADAPTER_INFO *) malloc(sizeof(IP_ADAPTER_INFO));
    if(AdapterInfo == NULL){
        Log("No se puede especificar la memoria necesaria para llamar GetAdaptersInfo");
        free(mac_addr);
        //return NULL;
    }
    
    if(GetAdaptersInfo(AdapterInfo, &dwBufLen) == ERROR_BUFFER_OVERFLOW ){
        free(AdapterInfo);
        AdapterInfo = (IP_ADAPTER_INFO *) malloc(dwBufLen);
        if (AdapterInfo == NULL){
            Log("No se puede especificar la memoria necesaria para llamar GetAdaptersInfo");
            free(mac_addr);
            //return NULL;
        }
    }
    
    if (GetAdaptersInfo(AdapterInfo, &dwBufLen) == NO_ERROR){
        // contains pointer to actual adapter mac address
        PIP_ADAPTER_INFO pAdapterInfo = AdapterInfo;
        do {
            sprintf(mac_addr, "%02X:%02X:%02X:%02X:%02X:%02X:",
                    pAdapterInfo->Address[0], pAdapterInfo->Address[1],
                    pAdapterInfo->Address[2], pAdapterInfo->Address[3],
                    pAdapterInfo->Address[4], pAdapterInfo->Address[5]);
            Log("Antes del vector \n" + QString::fromStdString(pAdapterInfo->IpAddressList.IpAddress.String) + " ... " + QString::fromLatin1(mac_addr)); // revisar cuantas MAC entrega
            
            //elem += pAdapterInfo->IpAddressList.IpAddress.String;
            //elem += "_";
            //elem += mac_addr;        
            Selem << pAdapterInfo->IpAddressList.IpAddress.String << "_" << mac_addr ;
            Selem >> elem;
            salida.push_back(elem);
            Log("Despues del vector \n" + QString::fromStdString(elem));
            pAdapterInfo = pAdapterInfo->Next;
        } while(pAdapterInfo);
    }
    free(AdapterInfo);
    return salida;
    //return mac_addr;  // caller must free
} */

QStringList FormSerial::getMacAddressQStringList(){   //https://stackoverflow.com/questions/13646621/how-to-get-mac-address-in-windows-with-c
    PIP_ADAPTER_INFO AdapterInfo;
    DWORD dwBufLen = sizeof(IP_ADAPTER_INFO);
    char *mac_addr = (char*)malloc(18);
    //QStringList listaMAC, listaIP;
    QStringList salida;
    
    AdapterInfo = (IP_ADAPTER_INFO *) malloc(sizeof(IP_ADAPTER_INFO));
    if(AdapterInfo == NULL){
        Log("No se puede especificar la memoria necesaria para llamar GetAdaptersInfo");
        free(mac_addr);
        //return NULL;
    }
    
    if(GetAdaptersInfo(AdapterInfo, &dwBufLen) == ERROR_BUFFER_OVERFLOW ){
        free(AdapterInfo);
        AdapterInfo = (IP_ADAPTER_INFO *) malloc(dwBufLen);
        if (AdapterInfo == NULL){
            Log("No se puede especificar la memoria necesaria para llamar GetAdaptersInfo");
            free(mac_addr);
            //return NULL;
        }
    }
    
    if (GetAdaptersInfo(AdapterInfo, &dwBufLen) == NO_ERROR){
        // contains pointer to actual adapter mac address
        PIP_ADAPTER_INFO pAdapterInfo = AdapterInfo;
        do {
            snprintf(mac_addr, 19, "%02X:%02X:%02X:%02X:%02X:%02X:",
                    pAdapterInfo->Address[0], pAdapterInfo->Address[1],
                    pAdapterInfo->Address[2], pAdapterInfo->Address[3],
                    pAdapterInfo->Address[4], pAdapterInfo->Address[5]);
            //Log("Antes del vector \n" + QString::fromStdString(pAdapterInfo->IpAddressList.IpAddress.String) + " ... " + QString::fromLatin1(mac_addr)); // revisar cuantas MAC entrega
            
            salida << QString::fromStdString(pAdapterInfo->IpAddressList.IpAddress.String) << QString::fromLatin1(mac_addr);
           //salida << (QString::fromStdString(pAdapterInfo->IpAddressList.IpAddress.String) + "_" + QString::fromLatin1(mac_addr));
           
            pAdapterInfo = pAdapterInfo->Next;
        } while(pAdapterInfo);
    }
    free(AdapterInfo);
    return salida;
    //return mac_addr;  // caller must free
}

void FormSerial::crearSerial(QString CB ){ // convierte de Hexa a Deci
    // se necesita de ahuevo para actualizar el combobox de dias, estoy haciendo overload
    QObject::connect(widget.Days_ComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), [=](){

    QString serial, CB2, dias;
    CB2 = CB;
    CB2.remove(':');
    QByteArray dat = CB2.toLocal8Bit();
    const char *CBchar = dat.data();
    int len =strlen(CBchar);
    std::uint64_t base = 1;
    std::uint64_t deci = 0;
    for (int i = len-1; i>=0; i-- ){
        if (CB2[i] >= '0' && CB2[i] <= '9' ){
            deci += (CBchar[i] - 48) * base;
            base = base * 16;
        }else if (CB2[i] >= 'A' && CB2[i] <= 'F') {
            deci += (CBchar[i] - 55) * base;
            base = base * 16;
        }
    }
    dias = widget.Days_ComboBox->currentText();
    //Log("Valor de temp --> " + QString::number(deci) + "\nValor de dias" + dias);
    serial = (QString::number(deci) + "-" + dias);
    widget.Serial_edit->setText(serial);
    
    });
}