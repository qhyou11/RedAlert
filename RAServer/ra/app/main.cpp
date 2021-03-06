#include <iostream>
#include <ra/app/RaApp.h>
#include <ra/common/Log.h>
#include <glog/logging.h>

using namespace std;
RA_USE_NAMESPACE(app);

int main(int argc, char** argv) {
    google::InitGoogleLogging(argv[0]);
    RaApp *app = new RaApp;
    bool succ = app->init(argc, argv);
    if (!succ) {
        cerr << "app init failed" << endl;
        delete app;
        return -1;
    }

    succ = app->run();
    delete app;

    return succ ? 0 : -1;
}
