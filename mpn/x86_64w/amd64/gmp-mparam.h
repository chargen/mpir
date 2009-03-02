/* Generated by tuneup.c, 2009-03-01, system compiler */

#define MUL_KARATSUBA_THRESHOLD          28
#define MUL_TOOM3_THRESHOLD             161

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          34
#define SQR_TOOM3_THRESHOLD             228

#define MULLOW_BASECASE_THRESHOLD         0  /* always */
#define MULLOW_DC_THRESHOLD             112
#define MULLOW_MUL_N_THRESHOLD          210

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 92
#define POWM_THRESHOLD                  190

#define GCD_ACCEL_THRESHOLD              16
#define GCDEXT_THRESHOLD                195
#define JACOBI_BASE_METHOD                2

#define DIVREM_1_NORM_THRESHOLD           0  /* always */
#define DIVREM_1_UNNORM_THRESHOLD         0  /* always */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD             21
#define GET_STR_PRECOMPUTE_THRESHOLD     26
#define SET_STR_THRESHOLD              8540

#define MUL_FFT_TABLE  { 688, 1632, 3392, 6400, 15360, 45056, 0 }
#define MUL_FFT_MODF_THRESHOLD          848
#define MUL_FFT_THRESHOLD              6016

#define SQR_FFT_TABLE  { 816, 1760, 3776, 7424, 15360, 36864, 0 }
#define SQR_FFT_MODF_THRESHOLD          976
#define SQR_FFT_THRESHOLD              6016

/* Tuneup completed successfully, took 14 seconds */