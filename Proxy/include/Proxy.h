#ifndef PROXY_H_
#define PROXY_H_






#include <string.h>
#include "ServiceInterface.h"


class CachedTVClass:public ThirdPartyTVLib{
    public:
    CachedTVClass(ThirdPartyTVLib* service):service_(service),need_reset_(false),list_cache_(""),video_cache_(""){}
    void reset(){
        need_reset_=true;
    }
    std::string listVideos()override{
        if(list_cache_==""|need_reset_){
            list_cache_ = service_->listVideos();
        }
        return list_cache_;
    }
    std::string getVideoInfo(int id)override{
        if(video_cache_==""|need_reset_){
            video_cache_ = service_->getVideoInfo(id);
        }
        return video_cache_;
    }
    private:
    ThirdPartyTVLib* service_;
    std::string list_cache_;
    std::string video_cache_;
    bool need_reset_;
};





#endif //PROXY_H_