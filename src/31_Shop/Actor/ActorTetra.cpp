#include "Actor/Character/ActorTetra.hpp"

ActorTetra *ActorTetra::Create() {}
void ActorTetra::vfunc_f4() {}
ARM void ActorTetra::vfunc_c4() {
    if (*((u16 *) ((u8 *) this + 0x20)) == 0 && *((u16 *) ((u8 *) this + 0x24)) == 1) {
        *((u32 *) *((u32 *) ((u8 *) this + 0x1e8)) + 4) = 0;
    }
    ActorGenericCharacter::vfunc_c4();
}
ARM void ActorTetra::vfunc_20(bool param1) {
    if ((param1 ? *((u8 *) this + 0xa5) : *((u8 *) this + 0xa4)) == 0) {
        return;
    }
    ActorCharacter::vfunc_20(param1);
    mUnk_4b0.func_ov031_02181798();
}

void ActorTetra_4b0::func_ov031_02181610(unk32 param1, unk32 param2, unk32 param3, unk32 param4, u16 param5) {}
void ActorTetra_4b0::func_ov031_02181798() {}

ActorTetra::~ActorTetra() {}
void ActorTetra::vfunc_f8() {}
