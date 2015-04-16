#ifndef RNG_GPU_H
#define RNG_GPU_H

#include <mpi.h>

extern "C" {
    void setDevice(int commRank, int commSize);
    void gpu_cache_alloc(int n_urandom_numbers, int n_grandom_numbers);
    void gpu_cache_init(double *urandom_numbers, int n_urandom_numbers,
                        double *grandom_numbers, int n_grandom_numbers);
    void gpu_cache_free();
}
#endif