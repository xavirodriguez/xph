#include "Actor/Character/ActorItemSeller.hpp"
#include "Actor/ActorShopItem.hpp"
#include "Unknown/UnkStruct_027e0dbc.hpp"

extern "C" bool HasFreebieCard();
extern "C" unk8 func_ov031_0217bd88();

ActorBeedle *ActorBeedle::Create() {}

bool ActorBeedle::Init() {}
void ActorBeedle::vfunc_c4() {}
unk32 ActorBeedle::vfunc_114(unk32 param1) {}
unk32 ActorBeedle::vfunc_d4() {}

static unk32 func_ov031_02180e44(unk32 param1, unk32 param2) {}

unk32 ActorBeedle::GetPromptMessage() {}
unk32 ActorBeedle::GetPurchaseMessage() {}
unk32 ActorBeedle::GetNotEnoughMoneyMessage() {}
unk32 ActorBeedle::GetGoodbyeMessage() {}
unk32 ActorBeedle::GetInventoryFullMessage() {}
ARM unk32 ActorBeedle::vfunc_d8(unk32 param1) {
    unk32 sellerType = func_ov031_021812e4(mUnk_484);
    unk32 selection = func_ov031_021812e4(data_027e0dbc.GetUnk_24()->mUnk_0b);

    switch (*(u16 *)(param1 + 2)) {
        case 0x0F:
            return (s8)HasFreebieCard();
        case 0x13:
            if (selection >= 4) {
                return 2;
            }
            UnkStruct_ov031_02183e80::GetInstance();
            return (s8)(func_ov031_0217bd88() == 0);
        case 0x27:
            switch (selection) {
                case 0:
                    return 0;
                case 1:
                    return sellerType != selection ? 1 : 2;
                case 2:
                    return sellerType != selection ? 3 : 4;
                case 3:
                    return sellerType != selection ? 5 : 6;
                case 4:
                    return 7;
            }
            break;
        case 0x2B:
            break;
        default:
            goto return_zero;
    }

    switch (data_027e0dbc.func_ov003_020f3d74(*(u16 *)(param1 + 2))) {
        case 0:
            return 8;
        case 1:
            return 0;
        case 2:
            return 1;
        case 3:
            return 2;
        case 4:
            return 3;
        case 5:
            return 4;
        case 6:
            return 5;
        case 7:
            return 6;
        case 8:
            return 7;
        default:
            return 0;
    }

return_zero:
    return 0;
}
unk32 ActorBeedle::vfunc_dc(unk32 param1) {}
unk32 ActorBeedle::vfunc_e0(unk32 param1) {}
bool ActorBeedle::vfunc_70() {}
bool ActorBeedle::vfunc_6c() {}
void ActorBeedle::vfunc_108() {}
void ActorBeedle::vfunc_10c(bool param1) {}
void ActorBeedle::vfunc_110() {}

unk32 ActorBeedle::func_ov031_021812e4(unk32 param1) {}
void ActorBeedle::func_ov031_0218132c(unk32 param1) {}

bool ActorBeedle::vfunc_11c() {}
bool ActorBeedle::vfunc_118() {}
ActorBeedle::~ActorBeedle() {}
