#include <mod/amlmod.h>
#include <mod/logger.h>

MYMOD(com.tu.nombre.ragdoll, Ragdoll, 1.0, TuNombre)

uintptr_t pGTASA;

extern "C" void OnModLoad()
{
    logger->SetTag("Ragdoll");
    pGTASA = aml->GetLib("libGTASA.so");
    logger->Info("Mi Ragdoll v1 cargado!");
}
