#include "../include/passion.h"

int main(int argc, char **argv)
{        
        struct ps_context ctx = {
                .startup_args = {
                        .argc = argc, .argv = argv
                }
        };

        struct ps_passion *passion = NULL;

        ps_initialize(PS_VERSION_CURRENT, &ctx, &passion);

        ps_run(passion);

        ps_deinitialize(passion);

        return 0;
}