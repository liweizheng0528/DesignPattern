#include "Client.h"
#include "Service.h"
#include "Proxy.h"


int main(){
    ThirdPartyTVClass* aTVService = new ThirdPartyTVClass();
    CachedTVClass* aTVProxy = new CachedTVClass(aTVService);
    TVManager* manager = new TVManager(aTVProxy);

    manager->renderListPanel();
    manager->renderVideoPage(1);

    delete aTVProxy;
    delete aTVService;
    delete manager;
    return 0;
}