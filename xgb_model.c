#include <string.h>
#include <math.h>

void softmax(float *x, int size, float *result) {
    float max = x[0];
    for (int i = 1; i < size; ++i) {
        if (x[i] > max)
            max = x[i];
    }
    float sum = 0.0f;
    for (int i = 0; i < size; ++i) {
        result[i] = expf(x[i] - max);
        sum += result[i];
    }
    for (int i = 0; i < size; ++i)
        result[i] /= sum;
}
void score(float * input, float * output) {
    float var0[6];
    float var1;
    if (input[1] >= 49.725426f) {
        var1 = -0.029957905f;
    } else {
        if (input[0] >= 30.332096f) {
            var1 = -0.022058824f;
        } else {
            var1 = 0.1410891f;
        }
    }
    float var2;
    if (input[1] >= 49.725426f) {
        var2 = -0.029786376f;
    } else {
        if (input[0] >= 30.332096f) {
            var2 = -0.021988818f;
        } else {
            var2 = 0.1247054f;
        }
    }
    float var3;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 27.752666f) {
            if (input[0] >= 30.006443f) {
                var3 = -0.02979145f;
            } else {
                var3 = -0.018479198f;
            }
        } else {
            if (input[0] >= 27.269932f) {
                var3 = 0.029974032f;
            } else {
                var3 = -0.020007871f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var3 = 0.029089928f;
            } else {
                var3 = -0.0015739093f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var3 = 0.0033967618f;
            } else {
                var3 = 0.025989776f;
            }
        }
    }
    float var4;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 27.752666f) {
            if (input[0] >= 30.006443f) {
                var4 = -0.029559908f;
            } else {
                var4 = -0.018252918f;
            }
        } else {
            if (input[0] >= 27.269932f) {
                var4 = 0.028447857f;
            } else {
                var4 = -0.019757269f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var4 = 0.02744834f;
            } else {
                var4 = -0.0016458195f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var4 = 0.0031843246f;
            } else {
                var4 = 0.024496587f;
            }
        }
    }
    float var5;
    if (input[1] >= 49.725426f) {
        var5 = -0.029534463f;
    } else {
        if (input[2] >= 31.4f) {
            var5 = 0.0074230493f;
        } else {
            var5 = 0.099551186f;
        }
    }
    float var6;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 27.752666f) {
            if (input[0] >= 30.006443f) {
                var6 = -0.0294475f;
            } else {
                var6 = -0.017704505f;
            }
        } else {
            if (input[0] >= 27.269932f) {
                var6 = 0.028112922f;
            } else {
                var6 = -0.019260867f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var6 = 0.02743574f;
            } else {
                var6 = -0.0009140488f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var6 = 0.0036581014f;
            } else {
                var6 = 0.024732543f;
            }
        }
    }
    float var7;
    if (input[1] >= 49.725426f) {
        var7 = -0.02939195f;
    } else {
        if (input[2] >= 31.4f) {
            var7 = 0.0072910204f;
        } else {
            var7 = 0.09487306f;
        }
    }
    float var8;
    if (input[1] >= 49.725426f) {
        var8 = -0.029307771f;
    } else {
        if (input[2] >= 31.4f) {
            var8 = 0.0070938687f;
        } else {
            var8 = 0.08990067f;
        }
    }
    float var9;
    if (input[1] >= 49.725426f) {
        var9 = -0.029186768f;
    } else {
        if (input[3] >= 60.0f) {
            var9 = 0.08877563f;
        } else {
            var9 = 0.0067235823f;
        }
    }
    float var10;
    if (input[1] >= 49.725426f) {
        var10 = -0.029456535f;
    } else {
        if (input[3] >= 60.0f) {
            var10 = 0.10096635f;
        } else {
            var10 = 0.0072539174f;
        }
    }
    float var11;
    if (input[1] >= 49.725426f) {
        var11 = -0.029214326f;
    } else {
        if (input[2] >= 31.4f) {
            var11 = 0.0073855417f;
        } else {
            var11 = 0.08832919f;
        }
    }
    float var12;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 27.752666f) {
            if (input[0] >= 30.006443f) {
                var12 = -0.029131878f;
            } else {
                var12 = -0.017434733f;
            }
        } else {
            if (input[0] >= 27.420212f) {
                var12 = 0.033458974f;
            } else {
                var12 = -0.019324228f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var12 = 0.025536655f;
            } else {
                var12 = -0.0010935958f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var12 = 0.0033460308f;
            } else {
                var12 = 0.022862863f;
            }
        }
    }
    float var13;
    if (input[1] >= 49.725426f) {
        var13 = -0.029061167f;
    } else {
        if (input[0] >= 30.332096f) {
            var13 = -0.0227232f;
        } else {
            var13 = 0.09535571f;
        }
    }
    float var14;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 27.752666f) {
            if (input[0] >= 30.006443f) {
                var14 = -0.02913341f;
            } else {
                var14 = -0.017477212f;
            }
        } else {
            if (input[0] >= 27.420212f) {
                var14 = 0.033418275f;
            } else {
                var14 = -0.019343143f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var14 = 0.025668893f;
            } else {
                var14 = -0.001116222f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var14 = 0.0033222877f;
            } else {
                var14 = 0.023028947f;
            }
        }
    }
    float var15;
    if (input[1] >= 49.725426f) {
        var15 = -0.029089082f;
    } else {
        if (input[2] >= 31.4f) {
            var15 = 0.0067040953f;
        } else {
            var15 = 0.08318424f;
        }
    }
    float var16;
    if (input[1] >= 49.725426f) {
        var16 = -0.029039612f;
    } else {
        if (input[0] >= 30.332096f) {
            var16 = -0.022762196f;
        } else {
            var16 = 0.09469535f;
        }
    }
    float var17;
    if (input[1] >= 49.725426f) {
        var17 = -0.029056687f;
    } else {
        if (input[3] >= 60.0f) {
            var17 = 0.08408668f;
        } else {
            var17 = 0.0066280807f;
        }
    }
    float var18;
    if (input[1] >= 49.725426f) {
        var18 = -0.029082267f;
    } else {
        if (input[0] >= 30.332096f) {
            var18 = -0.022930523f;
        } else {
            var18 = 0.0913726f;
        }
    }
    float var19;
    if (input[1] >= 49.725426f) {
        var19 = -0.029057337f;
    } else {
        if (input[0] >= 30.332096f) {
            var19 = -0.022908766f;
        } else {
            var19 = 0.09296157f;
        }
    }
    float var20;
    if (input[2] >= 23.05f) {
        var20 = -0.024868524f;
    } else {
        var20 = -0.0019071937f;
    }
    float var21;
    if (input[1] >= 49.725426f) {
        var21 = -0.029118448f;
    } else {
        if (input[0] >= 30.332096f) {
            var21 = -0.022975098f;
        } else {
            var21 = 0.09796926f;
        }
    }
    float var22;
    if (input[1] >= 49.725426f) {
        var22 = -0.029036045f;
    } else {
        if (input[0] >= 30.332096f) {
            var22 = -0.022735981f;
        } else {
            var22 = 0.089967184f;
        }
    }
    float var23;
    if (input[2] >= 23.05f) {
        var23 = -0.024636973f;
    } else {
        var23 = -0.0015724872f;
    }
    float var24;
    if (input[2] >= 23.05f) {
        var24 = -0.024704624f;
    } else {
        var24 = -0.0016513508f;
    }
    float var25;
    if (input[2] >= 23.05f) {
        var25 = -0.024668617f;
    } else {
        var25 = -0.0016226111f;
    }
    float var26;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var26 = -0.028875029f;
        } else {
            if (input[3] >= 82.0f) {
                var26 = 0.010214663f;
            } else {
                var26 = -0.018263074f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var26 = 0.025024114f;
            } else {
                var26 = -0.00035869732f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var26 = 0.0036938959f;
            } else {
                var26 = 0.022652784f;
            }
        }
    }
    float var27;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var27 = -0.028879618f;
        } else {
            if (input[3] >= 82.0f) {
                var27 = 0.009930768f;
            } else {
                var27 = -0.018424526f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var27 = 0.024633456f;
            } else {
                var27 = -0.00067826355f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var27 = 0.0034798903f;
            } else {
                var27 = 0.022198783f;
            }
        }
    }
    float var28;
    if (input[1] >= 49.725426f) {
        var28 = -0.028994888f;
    } else {
        if (input[3] >= 60.0f) {
            var28 = 0.08221079f;
        } else {
            var28 = 0.006706281f;
        }
    }
    float var29;
    if (input[1] >= 49.725426f) {
        var29 = -0.028923914f;
    } else {
        if (input[0] >= 30.332096f) {
            var29 = -0.022830678f;
        } else {
            var29 = 0.08927413f;
        }
    }
    float var30;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 27.752666f) {
            if (input[0] >= 30.006443f) {
                var30 = -0.0289457f;
            } else {
                var30 = -0.017165028f;
            }
        } else {
            if (input[0] >= 27.420212f) {
                var30 = 0.03200266f;
            } else {
                var30 = -0.019068405f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var30 = 0.024333661f;
            } else {
                var30 = -0.0010755f;
            }
        } else {
            if (input[2] >= 24.45f) {
                var30 = 0.023012804f;
            } else {
                var30 = -0.014738751f;
            }
        }
    }
    float var31;
    if (input[1] >= 49.725426f) {
        var31 = -0.028897678f;
    } else {
        if (input[3] >= 60.0f) {
            var31 = 0.07754201f;
        } else {
            var31 = 0.0059879967f;
        }
    }
    float var32;
    if (input[1] >= 49.725426f) {
        var32 = -0.028963033f;
    } else {
        if (input[0] >= 30.332096f) {
            var32 = -0.022967825f;
        } else {
            var32 = 0.09509259f;
        }
    }
    float var33;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 27.752666f) {
            if (input[0] >= 30.006443f) {
                var33 = -0.028908148f;
            } else {
                var33 = -0.017174732f;
            }
        } else {
            if (input[0] >= 27.420212f) {
                var33 = 0.031696726f;
            } else {
                var33 = -0.019057648f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var33 = 0.0240269f;
            } else {
                var33 = -0.0011633709f;
            }
        } else {
            if (input[2] >= 24.45f) {
                var33 = 0.02268072f;
            } else {
                var33 = -0.014730843f;
            }
        }
    }
    float var34;
    if (input[1] >= 49.725426f) {
        var34 = -0.028854713f;
    } else {
        if (input[3] >= 60.0f) {
            var34 = 0.07644942f;
        } else {
            var34 = 0.0061725075f;
        }
    }
    float var35;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 27.752666f) {
            if (input[0] >= 30.006443f) {
                var35 = -0.028897777f;
            } else {
                var35 = -0.017112514f;
            }
        } else {
            if (input[0] >= 27.420212f) {
                var35 = 0.03168677f;
            } else {
                var35 = -0.018994413f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var35 = 0.024305357f;
            } else {
                var35 = -0.001035434f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var35 = 0.0032125586f;
            } else {
                var35 = 0.021741595f;
            }
        }
    }
    float var36;
    if (input[1] >= 49.725426f) {
        var36 = -0.02879681f;
    } else {
        if (input[2] >= 31.4f) {
            var36 = 0.006828893f;
        } else {
            var36 = 0.07798369f;
        }
    }
    float var37;
    if (input[2] >= 23.05f) {
        var37 = -0.024738297f;
    } else {
        var37 = -0.0017004892f;
    }
    float var38;
    if (input[1] >= 49.725426f) {
        var38 = -0.028869046f;
    } else {
        if (input[0] >= 30.332096f) {
            var38 = -0.022555096f;
        } else {
            var38 = 0.08927989f;
        }
    }
    float var39;
    if (input[1] >= 49.725426f) {
        var39 = -0.02899057f;
    } else {
        if (input[0] >= 30.332096f) {
            var39 = -0.022247044f;
        } else {
            var39 = 0.0924716f;
        }
    }
    float var40;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 27.752666f) {
            if (input[0] >= 30.006443f) {
                var40 = -0.028889736f;
            } else {
                var40 = -0.017124759f;
            }
        } else {
            if (input[0] >= 27.420212f) {
                var40 = 0.03178582f;
            } else {
                var40 = -0.019002896f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var40 = 0.024318218f;
            } else {
                var40 = -0.0010426639f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var40 = 0.0032294586f;
            } else {
                var40 = 0.0217232f;
            }
        }
    }
    float var41;
    if (input[2] >= 23.05f) {
        var41 = -0.024519509f;
    } else {
        var41 = -0.0015134393f;
    }
    float var42;
    if (input[1] >= 49.725426f) {
        var42 = -0.028812319f;
    } else {
        if (input[2] >= 31.4f) {
            var42 = 0.0065577305f;
        } else {
            var42 = 0.075546056f;
        }
    }
    float var43;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var43 = -0.029028907f;
        } else {
            if (input[2] >= 26.5f) {
                var43 = -0.005699123f;
            } else {
                var43 = -0.023490448f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var43 = 0.026875285f;
            } else {
                var43 = 0.00021247198f;
            }
        } else {
            if (input[2] >= 25.849998f) {
                var43 = 0.02749986f;
            } else {
                var43 = 0.0069737486f;
            }
        }
    }
    float var44;
    if (input[1] >= 49.725426f) {
        var44 = -0.028846163f;
    } else {
        if (input[0] >= 30.332096f) {
            var44 = -0.022484275f;
        } else {
            var44 = 0.08917773f;
        }
    }
    float var45;
    if (input[1] >= 49.725426f) {
        var45 = -0.02875985f;
    } else {
        if (input[0] >= 30.332096f) {
            var45 = -0.022779392f;
        } else {
            var45 = 0.086747855f;
        }
    }
    float var46;
    if (input[1] >= 49.725426f) {
        var46 = -0.028847704f;
    } else {
        if (input[2] >= 31.4f) {
            var46 = 0.0063772723f;
        } else {
            var46 = 0.07739692f;
        }
    }
    float var47;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 27.752666f) {
            if (input[0] >= 30.006443f) {
                var47 = -0.028805172f;
            } else {
                var47 = -0.017027967f;
            }
        } else {
            if (input[0] >= 27.420212f) {
                var47 = 0.031355318f;
            } else {
                var47 = -0.01889682f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var47 = 0.024212172f;
            } else {
                var47 = -0.00097010325f;
            }
        } else {
            if (input[2] >= 25.849998f) {
                var47 = 0.024481703f;
            } else {
                var47 = 0.0055464776f;
            }
        }
    }
    float var48;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var48 = -0.028873077f;
        } else {
            if (input[3] >= 82.0f) {
                var48 = 0.009675344f;
            } else {
                var48 = -0.018420508f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var48 = 0.024350502f;
            } else {
                var48 = -0.00077061023f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var48 = 0.0034125932f;
            } else {
                var48 = 0.021972928f;
            }
        }
    }
    float var49;
    if (input[2] >= 23.05f) {
        var49 = -0.024695372f;
    } else {
        var49 = -0.0014997431f;
    }
    float var50;
    if (input[1] >= 49.725426f) {
        var50 = -0.028785616f;
    } else {
        if (input[2] >= 31.4f) {
            var50 = 0.0063283364f;
        } else {
            var50 = 0.075491846f;
        }
    }
    float var51;
    if (input[1] >= 49.725426f) {
        var51 = -0.028740779f;
    } else {
        if (input[2] >= 31.4f) {
            var51 = 0.006510865f;
        } else {
            var51 = 0.074979976f;
        }
    }
    float var52;
    if (input[1] >= 49.725426f) {
        var52 = -0.028758526f;
    } else {
        if (input[2] >= 31.4f) {
            var52 = 0.0066780895f;
        } else {
            var52 = 0.07609435f;
        }
    }
    float var53;
    if (input[2] >= 23.05f) {
        var53 = -0.024619464f;
    } else {
        var53 = -0.0014421333f;
    }
    float var54;
    if (input[2] >= 23.05f) {
        var54 = -0.024670335f;
    } else {
        var54 = -0.0014830753f;
    }
    float var55;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var55 = -0.028827308f;
        } else {
            if (input[3] >= 82.0f) {
                var55 = 0.010240367f;
            } else {
                var55 = -0.018162107f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var55 = 0.025272405f;
            } else {
                var55 = -0.00020433348f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var55 = 0.0037901034f;
            } else {
                var55 = 0.022913516f;
            }
        }
    }
    float var56;
    if (input[2] >= 23.05f) {
        var56 = -0.024465136f;
    } else {
        var56 = -0.0015265046f;
    }
    float var57;
    if (input[1] >= 49.725426f) {
        var57 = -0.028824328f;
    } else {
        if (input[0] >= 30.332096f) {
            var57 = -0.022562008f;
        } else {
            var57 = 0.08799614f;
        }
    }
    float var58;
    if (input[1] >= 49.725426f) {
        var58 = -0.028919313f;
    } else {
        if (input[2] >= 31.4f) {
            var58 = 0.006315544f;
        } else {
            var58 = 0.07997175f;
        }
    }
    float var59;
    if (input[1] >= 49.725426f) {
        var59 = -0.028723512f;
    } else {
        if (input[0] >= 30.332096f) {
            var59 = -0.022870412f;
        } else {
            var59 = 0.08537112f;
        }
    }
    float var60;
    if (input[1] >= 49.725426f) {
        var60 = -0.028931642f;
    } else {
        if (input[2] >= 31.4f) {
            var60 = 0.006865002f;
        } else {
            var60 = 0.08185036f;
        }
    }
    float var61;
    if (input[1] >= 49.725426f) {
        var61 = -0.028733617f;
    } else {
        if (input[3] >= 60.0f) {
            var61 = 0.07422345f;
        } else {
            var61 = 0.006136119f;
        }
    }
    float var62;
    if (input[1] >= 49.725426f) {
        var62 = -0.028758494f;
    } else {
        if (input[2] >= 31.4f) {
            var62 = 0.007123962f;
        } else {
            var62 = 0.07859013f;
        }
    }
    float var63;
    if (input[2] >= 23.05f) {
        var63 = -0.02445726f;
    } else {
        var63 = -0.0014657907f;
    }
    float var64;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var64 = -0.028683094f;
        } else {
            if (input[2] >= 26.5f) {
                var64 = -0.00645015f;
            } else {
                var64 = -0.023462305f;
            }
        }
    } else {
        if (input[0] >= 18.81142f) {
            if (input[0] >= 24.144146f) {
                var64 = 0.023037186f;
            } else {
                var64 = -0.021905338f;
            }
        } else {
            if (input[2] >= 29.650002f) {
                var64 = 0.0010714151f;
            } else {
                var64 = 0.018369583f;
            }
        }
    }
    float var65;
    if (input[2] >= 23.05f) {
        var65 = -0.024417639f;
    } else {
        var65 = -0.0013473523f;
    }
    float var66;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var66 = -0.02874429f;
        } else {
            if (input[2] >= 26.5f) {
                var66 = -0.0057761963f;
            } else {
                var66 = -0.023295766f;
            }
        }
    } else {
        if (input[0] >= 18.81142f) {
            if (input[0] >= 24.144146f) {
                var66 = 0.024595333f;
            } else {
                var66 = -0.021641178f;
            }
        } else {
            if (input[2] >= 29.650002f) {
                var66 = 0.0020388993f;
            } else {
                var66 = 0.02001737f;
            }
        }
    }
    float var67;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var67 = -0.02882485f;
        } else {
            if (input[3] >= 82.0f) {
                var67 = 0.010072298f;
            } else {
                var67 = -0.018150909f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var67 = 0.025375476f;
            } else {
                var67 = -0.00020330053f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var67 = 0.0037708182f;
            } else {
                var67 = 0.023080507f;
            }
        }
    }
    float var68;
    if (input[2] >= 23.05f) {
        var68 = -0.024457315f;
    } else {
        var68 = -0.0011685899f;
    }
    float var69;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var69 = -0.028712476f;
        } else {
            if (input[3] >= 82.0f) {
                var69 = 0.010300808f;
            } else {
                var69 = -0.01802185f;
            }
        }
    } else {
        if (input[0] >= 18.81142f) {
            if (input[0] >= 24.144146f) {
                var69 = 0.024526745f;
            } else {
                var69 = -0.021608692f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var69 = 0.016651586f;
            } else {
                var69 = -0.015900156f;
            }
        }
    }
    float var70;
    if (input[2] >= 23.05f) {
        var70 = -0.024387266f;
    } else {
        var70 = -0.0014526087f;
    }
    float var71;
    if (input[2] >= 23.05f) {
        var71 = -0.024239166f;
    } else {
        var71 = -0.0012525094f;
    }
    float var72;
    if (input[1] >= 49.725426f) {
        var72 = -0.0287403f;
    } else {
        if (input[2] >= 31.4f) {
            var72 = 0.006670809f;
        } else {
            var72 = 0.07729187f;
        }
    }
    float var73;
    if (input[1] >= 49.725426f) {
        var73 = -0.02877601f;
    } else {
        if (input[0] >= 30.332096f) {
            var73 = -0.022740182f;
        } else {
            var73 = 0.08608369f;
        }
    }
    float var74;
    if (input[1] >= 49.725426f) {
        var74 = -0.02877876f;
    } else {
        if (input[2] >= 31.4f) {
            var74 = 0.0064872513f;
        } else {
            var74 = 0.07710293f;
        }
    }
    float var75;
    if (input[2] >= 23.05f) {
        var75 = -0.024334924f;
    } else {
        var75 = -0.0014004527f;
    }
    float var76;
    if (input[1] >= 49.725426f) {
        var76 = -0.0286419f;
    } else {
        if (input[2] >= 31.4f) {
            var76 = 0.0064595714f;
        } else {
            var76 = 0.07298899f;
        }
    }
    float var77;
    if (input[1] >= 49.725426f) {
        var77 = -0.028748212f;
    } else {
        if (input[3] >= 60.0f) {
            var77 = 0.076781385f;
        } else {
            var77 = 0.0063957246f;
        }
    }
    float var78;
    if (input[1] >= 49.725426f) {
        var78 = -0.028673038f;
    } else {
        if (input[0] >= 30.332096f) {
            var78 = -0.02298539f;
        } else {
            var78 = 0.08558079f;
        }
    }
    float var79;
    if (input[1] >= 49.725426f) {
        var79 = -0.028745538f;
    } else {
        if (input[3] >= 60.0f) {
            var79 = 0.07419229f;
        } else {
            var79 = 0.0059494795f;
        }
    }
    float var80;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var80 = -0.02879869f;
        } else {
            if (input[2] >= 26.5f) {
                var80 = -0.0060926243f;
            } else {
                var80 = -0.023495099f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var80 = 0.02469783f;
            } else {
                var80 = -0.00057048385f;
            }
        } else {
            if (input[2] >= 25.849998f) {
                var80 = 0.025094112f;
            } else {
                var80 = 0.005832469f;
            }
        }
    }
    float var81;
    if (input[1] >= 49.725426f) {
        var81 = -0.028781801f;
    } else {
        if (input[3] >= 60.0f) {
            var81 = 0.07574182f;
        } else {
            var81 = 0.006410476f;
        }
    }
    float var82;
    if (input[1] >= 49.725426f) {
        var82 = -0.028662277f;
    } else {
        if (input[2] >= 31.4f) {
            var82 = 0.0067159804f;
        } else {
            var82 = 0.073618166f;
        }
    }
    float var83;
    if (input[1] >= 49.725426f) {
        var83 = -0.028766066f;
    } else {
        if (input[2] >= 31.4f) {
            var83 = 0.0071116583f;
        } else {
            var83 = 0.077101134f;
        }
    }
    float var84;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var84 = -0.028709067f;
        } else {
            if (input[2] >= 26.5f) {
                var84 = -0.005683109f;
            } else {
                var84 = -0.023202801f;
            }
        }
    } else {
        if (input[0] >= 18.81142f) {
            if (input[0] >= 24.144146f) {
                var84 = 0.02448343f;
            } else {
                var84 = -0.021531602f;
            }
        } else {
            if (input[2] >= 29.650002f) {
                var84 = 0.0021227514f;
            } else {
                var84 = 0.01985248f;
            }
        }
    }
    float var85;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var85 = -0.028679553f;
        } else {
            if (input[3] >= 82.0f) {
                var85 = 0.010183084f;
            } else {
                var85 = -0.017858742f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var85 = 0.024641022f;
            } else {
                var85 = 0.0000021096657f;
            }
        } else {
            if (input[3] >= 86.0f) {
                var85 = 0.003812898f;
            } else {
                var85 = 0.02247168f;
            }
        }
    }
    float var86;
    if (input[2] >= 23.05f) {
        var86 = -0.024280598f;
    } else {
        var86 = -0.001198023f;
    }
    float var87;
    if (input[2] >= 23.05f) {
        var87 = -0.024340214f;
    } else {
        var87 = -0.0013234532f;
    }
    float var88;
    if (input[1] >= 49.725426f) {
        var88 = -0.028788233f;
    } else {
        if (input[3] >= 60.0f) {
            var88 = 0.079350896f;
        } else {
            var88 = 0.006318281f;
        }
    }
    float var89;
    if (input[1] >= 49.725426f) {
        var89 = -0.028674765f;
    } else {
        if (input[2] >= 31.4f) {
            var89 = 0.0067307996f;
        } else {
            var89 = 0.073922515f;
        }
    }
    float var90;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var90 = -0.028637398f;
        } else {
            if (input[2] >= 26.5f) {
                var90 = -0.006242953f;
            } else {
                var90 = -0.023398098f;
            }
        }
    } else {
        if (input[0] >= 18.81142f) {
            if (input[0] >= 24.144146f) {
                var90 = 0.023212433f;
            } else {
                var90 = -0.021812143f;
            }
        } else {
            if (input[2] >= 29.650002f) {
                var90 = 0.0012303012f;
            } else {
                var90 = 0.018571071f;
            }
        }
    }
    float var91;
    if (input[1] >= 49.725426f) {
        var91 = -0.02885507f;
    } else {
        if (input[2] >= 31.4f) {
            var91 = 0.0069265687f;
        } else {
            var91 = 0.08432125f;
        }
    }
    float var92;
    if (input[2] >= 23.05f) {
        var92 = -0.02442485f;
    } else {
        var92 = -0.0014781958f;
    }
    float var93;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var93 = -0.028655648f;
        } else {
            if (input[2] >= 26.5f) {
                var93 = -0.0058028554f;
            } else {
                var93 = -0.023158995f;
            }
        }
    } else {
        if (input[0] >= 18.81142f) {
            if (input[0] >= 24.144146f) {
                var93 = 0.02380963f;
            } else {
                var93 = -0.021545773f;
            }
        } else {
            if (input[2] >= 29.650002f) {
                var93 = 0.0018977629f;
            } else {
                var93 = 0.019296099f;
            }
        }
    }
    float var94;
    if (input[2] >= 23.05f) {
        var94 = -0.02428025f;
    } else {
        var94 = -0.0013710937f;
    }
    float var95;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var95 = -0.028658072f;
        } else {
            if (input[2] >= 26.5f) {
                var95 = -0.005595799f;
            } else {
                var95 = -0.023179987f;
            }
        }
    } else {
        if (input[0] >= 18.81142f) {
            if (input[0] >= 24.144146f) {
                var95 = 0.024551203f;
            } else {
                var95 = -0.021505391f;
            }
        } else {
            if (input[2] >= 29.650002f) {
                var95 = 0.0021644332f;
            } else {
                var95 = 0.019946516f;
            }
        }
    }
    float var96;
    if (input[2] >= 23.05f) {
        var96 = -0.024437463f;
    } else {
        var96 = -0.001443537f;
    }
    float var97;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var97 = -0.028691703f;
        } else {
            if (input[2] >= 26.5f) {
                var97 = -0.0057908194f;
            } else {
                var97 = -0.023160433f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var97 = 0.02428845f;
            } else {
                var97 = -0.00023920856f;
            }
        } else {
            if (input[2] >= 25.849998f) {
                var97 = 0.024775054f;
            } else {
                var97 = 0.0061629945f;
            }
        }
    }
    float var98;
    if (input[1] >= 49.725426f) {
        var98 = -0.028788853f;
    } else {
        if (input[3] >= 60.0f) {
            var98 = 0.079981744f;
        } else {
            var98 = 0.0066440827f;
        }
    }
    float var99;
    if (input[1] >= 49.725426f) {
        var99 = -0.028804377f;
    } else {
        if (input[0] >= 30.332096f) {
            var99 = -0.02237898f;
        } else {
            var99 = 0.08935671f;
        }
    }
    float var100;
    if (input[0] >= 25.295773f) {
        if (input[0] >= 30.006443f) {
            var100 = -0.028608589f;
        } else {
            if (input[2] >= 26.5f) {
                var100 = -0.0055664163f;
            } else {
                var100 = -0.023074156f;
            }
        }
    } else {
        if (input[0] >= 5.055971f) {
            if (input[0] >= 24.144146f) {
                var100 = 0.024351465f;
            } else {
                var100 = -0.000033990156f;
            }
        } else {
            if (input[2] >= 25.849998f) {
                var100 = 0.024865804f;
            } else {
                var100 = 0.006284042f;
            }
        }
    }
    float var101;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var101 = -0.029210094f;
            } else {
                var101 = -0.01676876f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var101 = 0.017785937f;
            } else {
                var101 = -0.00085960014f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var101 = 0.04806007f;
            } else {
                var101 = 0.11667483f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var101 = 0.01849315f;
            } else {
                var101 = -0.021889402f;
            }
        }
    }
    float var102;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var102 = -0.029013542f;
            } else {
                var102 = -0.016694957f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var102 = 0.0012606409f;
            } else {
                var102 = 0.030090312f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var102 = 0.04437829f;
            } else {
                var102 = 0.1033692f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var102 = 0.017864265f;
            } else {
                var102 = -0.021533307f;
            }
        }
    }
    float var103;
    if (input[0] >= 90.0077f) {
        var103 = -0.029945185f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[0] >= 30.987782f) {
                var103 = 0.1338121f;
            } else {
                var103 = 0.05605043f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var103 = 0.13015844f;
            } else {
                var103 = -0.029779026f;
            }
        }
    }
    float var104;
    if (input[0] >= 90.0077f) {
        var104 = -0.030046776f;
    } else {
        if (input[0] >= 61.0265f) {
            var104 = 0.12324758f;
        } else {
            if (input[0] >= 36.59091f) {
                var104 = 0.046378493f;
            } else {
                var104 = -0.019689018f;
            }
        }
    }
    float var105;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var105 = 0.034353297f;
            } else {
                var105 = 0.024997061f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var105 = 0.016711373f;
            } else {
                var105 = 0.08775121f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var105 = -0.018736225f;
        } else {
            var105 = 0.013074058f;
        }
    }
    float var106;
    if (input[0] >= 90.0077f) {
        var106 = -0.029979214f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[0] >= 30.987782f) {
                var106 = 0.11868667f;
            } else {
                var106 = 0.053656783f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var106 = 0.11702738f;
            } else {
                var106 = -0.029762933f;
            }
        }
    }
    float var107;
    if (input[0] >= 90.0077f) {
        var107 = -0.03000006f;
    } else {
        if (input[0] >= 61.0265f) {
            var107 = 0.10824674f;
        } else {
            if (input[0] >= 36.59091f) {
                var107 = 0.04290026f;
            } else {
                var107 = -0.019411435f;
            }
        }
    }
    float var108;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var108 = -0.028653521f;
            } else {
                var108 = -0.01636869f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var108 = 0.0011253621f;
            } else {
                var108 = 0.026608674f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var108 = 0.03934241f;
            } else {
                var108 = 0.087597124f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var108 = 0.013743281f;
            } else {
                var108 = -0.021782598f;
            }
        }
    }
    float var109;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var109 = -0.028504957f;
            } else {
                var109 = -0.016133644f;
            }
        } else {
            if (input[2] >= 24.95f) {
                var109 = 0.0106959045f;
            } else {
                var109 = -0.014043513f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var109 = 0.044895213f;
            } else {
                var109 = 0.081501156f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var109 = 0.0137432115f;
            } else {
                var109 = -0.021105655f;
            }
        }
    }
    float var110;
    if (input[0] >= 90.0077f) {
        var110 = -0.030007899f;
    } else {
        if (input[0] >= 61.0265f) {
            var110 = 0.10339905f;
        } else {
            if (input[0] >= 36.59091f) {
                var110 = 0.04138043f;
            } else {
                var110 = -0.01923459f;
            }
        }
    }
    float var111;
    if (input[0] >= 90.0077f) {
        var111 = -0.029908044f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[0] >= 30.987782f) {
                var111 = 0.104624785f;
            } else {
                var111 = 0.050162684f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var111 = 0.10604987f;
            } else {
                var111 = -0.029682731f;
            }
        }
    }
    float var112;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var112 = 0.028812343f;
            } else {
                var112 = 0.021141479f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var112 = 0.013843797f;
            } else {
                var112 = 0.072476566f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var112 = -0.018402686f;
        } else {
            var112 = 0.011425537f;
        }
    }
    float var113;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var113 = -0.02844677f;
            } else {
                var113 = -0.017822972f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var113 = 0.012773517f;
            } else {
                var113 = -0.0033678093f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var113 = 0.033128496f;
            } else {
                var113 = 0.07257703f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var113 = 0.012960819f;
            } else {
                var113 = -0.02095751f;
            }
        }
    }
    float var114;
    if (input[0] >= 90.0077f) {
        var114 = -0.029965764f;
    } else {
        if (input[0] >= 61.0265f) {
            var114 = 0.099773094f;
        } else {
            if (input[0] >= 36.59091f) {
                var114 = 0.039478384f;
            } else {
                var114 = -0.019470673f;
            }
        }
    }
    float var115;
    if (input[0] >= 90.0077f) {
        var115 = -0.02989245f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[0] >= 30.987782f) {
                var115 = 0.09255653f;
            } else {
                var115 = 0.043377258f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var115 = 0.099122666f;
            } else {
                var115 = -0.029742822f;
            }
        }
    }
    float var116;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var116 = -0.028346768f;
            } else {
                var116 = -0.016026167f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var116 = 0.0006304413f;
            } else {
                var116 = 0.024691697f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var116 = 0.042813502f;
            } else {
                var116 = 0.07746526f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var116 = 0.012566104f;
            } else {
                var116 = -0.021107871f;
            }
        }
    }
    float var117;
    if (input[0] >= 90.0077f) {
        var117 = -0.029961957f;
    } else {
        if (input[0] >= 61.0265f) {
            var117 = 0.096513554f;
        } else {
            if (input[0] >= 36.59091f) {
                var117 = 0.038969304f;
            } else {
                var117 = -0.019098246f;
            }
        }
    }
    float var118;
    if (input[0] >= 90.0077f) {
        var118 = -0.02972342f;
    } else {
        if (input[0] >= 61.0265f) {
            var118 = 0.09830692f;
        } else {
            if (input[0] >= 36.59091f) {
                var118 = 0.040981714f;
            } else {
                var118 = -0.0190639f;
            }
        }
    }
    float var119;
    if (input[0] >= 90.0077f) {
        var119 = -0.02987951f;
    } else {
        if (input[0] >= 61.0265f) {
            var119 = 0.09093733f;
        } else {
            if (input[0] >= 36.59091f) {
                var119 = 0.037141524f;
            } else {
                var119 = -0.019064276f;
            }
        }
    }
    float var120;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var120 = -0.028751016f;
            } else {
                var120 = -0.01795772f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var120 = 0.0127585335f;
            } else {
                var120 = -0.003356897f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var120 = 0.03356533f;
            } else {
                var120 = 0.07321748f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var120 = 0.013144882f;
            } else {
                var120 = -0.020955585f;
            }
        }
    }
    float var121;
    if (input[0] >= 90.0077f) {
        var121 = -0.029704759f;
    } else {
        if (input[0] >= 61.0265f) {
            var121 = 0.09484563f;
        } else {
            if (input[0] >= 36.59091f) {
                var121 = 0.039307166f;
            } else {
                var121 = -0.01915501f;
            }
        }
    }
    float var122;
    if (input[0] >= 90.0077f) {
        var122 = -0.029795473f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[0] >= 30.987782f) {
                var122 = 0.09679919f;
            } else {
                var122 = 0.048337754f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var122 = 0.09736497f;
            } else {
                var122 = -0.029677615f;
            }
        }
    }
    float var123;
    if (input[0] >= 90.0077f) {
        var123 = -0.029839931f;
    } else {
        if (input[0] >= 61.0265f) {
            var123 = 0.08747067f;
        } else {
            if (input[0] >= 36.59091f) {
                var123 = 0.036140062f;
            } else {
                var123 = -0.018936569f;
            }
        }
    }
    float var124;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var124 = -0.028228233f;
            } else {
                var124 = -0.017613223f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var124 = 0.012411748f;
            } else {
                var124 = -0.0033397903f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var124 = 0.03180542f;
            } else {
                var124 = 0.06912964f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var124 = 0.011228167f;
            } else {
                var124 = -0.021248436f;
            }
        }
    }
    float var125;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var125 = -0.02828545f;
            } else {
                var125 = -0.017576179f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var125 = 0.012554201f;
            } else {
                var125 = -0.0031584334f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var125 = 0.04102045f;
            } else {
                var125 = 0.07330677f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var125 = 0.011487856f;
            } else {
                var125 = -0.02108085f;
            }
        }
    }
    float var126;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var126 = 0.026570529f;
            } else {
                var126 = 0.019500395f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var126 = 0.012345462f;
            } else {
                var126 = 0.06717287f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var126 = -0.018305097f;
        } else {
            var126 = 0.010796473f;
        }
    }
    float var127;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var127 = 0.026637733f;
            } else {
                var127 = 0.019581793f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var127 = 0.012638608f;
            } else {
                var127 = 0.06736882f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var127 = -0.018336408f;
        } else {
            var127 = 0.010878172f;
        }
    }
    float var128;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var128 = -0.028456945f;
            } else {
                var128 = -0.01601159f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var128 = 0.013796292f;
            } else {
                var128 = -0.0017734114f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var128 = 0.034012925f;
            } else {
                var128 = 0.07306634f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var128 = 0.012060932f;
            } else {
                var128 = -0.02101146f;
            }
        }
    }
    float var129;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var129 = 0.027081922f;
            } else {
                var129 = 0.019861972f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var129 = 0.012618999f;
            } else {
                var129 = 0.06850968f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var129 = -0.01833273f;
        } else {
            var129 = 0.010953295f;
        }
    }
    float var130;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var130 = -0.028170282f;
            } else {
                var130 = -0.017310072f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var130 = 0.013290896f;
            } else {
                var130 = -0.0028140508f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var130 = 0.03285536f;
            } else {
                var130 = 0.07053843f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var130 = 0.0119709885f;
            } else {
                var130 = -0.02102674f;
            }
        }
    }
    float var131;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var131 = 0.026043877f;
            } else {
                var131 = 0.01912776f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var131 = 0.012433268f;
            } else {
                var131 = 0.06543082f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var131 = -0.01827429f;
        } else {
            var131 = 0.01065925f;
        }
    }
    float var132;
    if (input[0] >= 90.0077f) {
        var132 = -0.029778952f;
    } else {
        if (input[0] >= 61.0265f) {
            var132 = 0.090907566f;
        } else {
            if (input[0] >= 36.59091f) {
                var132 = 0.03701451f;
            } else {
                var132 = -0.019053578f;
            }
        }
    }
    float var133;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var133 = -0.028294066f;
            } else {
                var133 = -0.016101649f;
            }
        } else {
            if (input[2] >= 24.95f) {
                var133 = 0.009565904f;
            } else {
                var133 = -0.014091769f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var133 = 0.031423233f;
            } else {
                var133 = 0.06906631f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var133 = 0.011118783f;
            } else {
                var133 = -0.021336874f;
            }
        }
    }
    float var134;
    if (input[0] >= 90.0077f) {
        var134 = -0.029925216f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[0] >= 30.987782f) {
                var134 = 0.088768534f;
            } else {
                var134 = 0.041927382f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var134 = 0.09570866f;
            } else {
                var134 = -0.029699117f;
            }
        }
    }
    float var135;
    if (input[0] >= 90.0077f) {
        var135 = -0.029732032f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[0] >= 30.987782f) {
                var135 = 0.090769626f;
            } else {
                var135 = 0.04579934f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var135 = 0.09122785f;
            } else {
                var135 = -0.029843211f;
            }
        }
    }
    float var136;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var136 = 0.025877818f;
            } else {
                var136 = 0.019070908f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var136 = 0.01217432f;
            } else {
                var136 = 0.06468853f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var136 = -0.018152738f;
        } else {
            var136 = 0.010619817f;
        }
    }
    float var137;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var137 = -0.028268406f;
            } else {
                var137 = -0.015831709f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var137 = 0.014095339f;
            } else {
                var137 = -0.0014704006f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var137 = 0.034347203f;
            } else {
                var137 = 0.07323105f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var137 = 0.010621829f;
            } else {
                var137 = -0.02177253f;
            }
        }
    }
    float var138;
    if (input[0] >= 90.0077f) {
        var138 = -0.02983897f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[0] >= 30.987782f) {
                var138 = 0.083546676f;
            } else {
                var138 = 0.041305926f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var138 = 0.08869943f;
            } else {
                var138 = -0.029778117f;
            }
        }
    }
    float var139;
    if (input[0] >= 90.0077f) {
        var139 = -0.029802546f;
    } else {
        if (input[0] >= 61.0265f) {
            var139 = 0.092869654f;
        } else {
            if (input[0] >= 36.59091f) {
                var139 = 0.038593598f;
            } else {
                var139 = -0.018952733f;
            }
        }
    }
    float var140;
    if (input[0] >= 90.0077f) {
        var140 = -0.029684944f;
    } else {
        if (input[0] >= 46.526882f) {
            if (input[0] >= 61.0265f) {
                var140 = 0.08903528f;
            } else {
                var140 = 0.04472954f;
            }
        } else {
            if (input[0] >= 36.319046f) {
                var140 = 0.022693267f;
            } else {
                var140 = -0.019525472f;
            }
        }
    }
    float var141;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var141 = -0.02819535f;
            } else {
                var141 = -0.015792748f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var141 = 0.013640398f;
            } else {
                var141 = -0.0016787164f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var141 = 0.03306017f;
            } else {
                var141 = 0.07034253f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var141 = 0.010396372f;
            } else {
                var141 = -0.021462437f;
            }
        }
    }
    float var142;
    if (input[0] >= 90.0077f) {
        var142 = -0.029617308f;
    } else {
        if (input[0] >= 46.526882f) {
            if (input[0] >= 61.0265f) {
                var142 = 0.088973746f;
            } else {
                var142 = 0.04531696f;
            }
        } else {
            if (input[0] >= 36.319046f) {
                var142 = 0.023814276f;
            } else {
                var142 = -0.018994464f;
            }
        }
    }
    float var143;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var143 = -0.02832796f;
            } else {
                var143 = -0.016350882f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var143 = -0.000080600905f;
            } else {
                var143 = 0.023225129f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var143 = 0.03286771f;
            } else {
                var143 = 0.07201347f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var143 = 0.012731957f;
            } else {
                var143 = -0.020879246f;
            }
        }
    }
    float var144;
    if (input[0] >= 90.0077f) {
        var144 = -0.029901234f;
    } else {
        if (input[0] >= 61.0265f) {
            var144 = 0.087118365f;
        } else {
            if (input[0] >= 36.59091f) {
                var144 = 0.035545014f;
            } else {
                var144 = -0.01896684f;
            }
        }
    }
    float var145;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var145 = 0.026102796f;
            } else {
                var145 = 0.019225184f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var145 = 0.012186161f;
            } else {
                var145 = 0.06543442f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var145 = -0.018132478f;
        } else {
            var145 = 0.0107702f;
        }
    }
    float var146;
    if (input[0] >= 90.0077f) {
        var146 = -0.029895613f;
    } else {
        if (input[0] >= 61.0265f) {
            var146 = 0.0856563f;
        } else {
            if (input[0] >= 36.59091f) {
                var146 = 0.03459733f;
            } else {
                var146 = -0.019324852f;
            }
        }
    }
    float var147;
    if (input[0] >= 90.0077f) {
        var147 = -0.029844398f;
    } else {
        if (input[0] >= 61.0265f) {
            var147 = 0.0831195f;
        } else {
            if (input[0] >= 36.59091f) {
                var147 = 0.03380213f;
            } else {
                var147 = -0.019278223f;
            }
        }
    }
    float var148;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var148 = -0.028218044f;
            } else {
                var148 = -0.016015384f;
            }
        } else {
            if (input[2] >= 24.95f) {
                var148 = 0.00967631f;
            } else {
                var148 = -0.013738647f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var148 = 0.03175213f;
            } else {
                var148 = 0.06979643f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var148 = 0.011162837f;
            } else {
                var148 = -0.021234192f;
            }
        }
    }
    float var149;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var149 = -0.028152704f;
            } else {
                var149 = -0.017394414f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var149 = -0.00038300187f;
            } else {
                var149 = 0.022559492f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var149 = 0.03936015f;
            } else {
                var149 = 0.06997358f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var149 = 0.010889241f;
            } else {
                var149 = -0.021017198f;
            }
        }
    }
    float var150;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var150 = -0.02808311f;
            } else {
                var150 = -0.017413229f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var150 = 0.01170767f;
            } else {
                var150 = -0.003437147f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var150 = 0.02943622f;
            } else {
                var150 = 0.06279203f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var150 = 0.010136022f;
            } else {
                var150 = -0.02106749f;
            }
        }
    }
    float var151;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var151 = -0.02805143f;
            } else {
                var151 = -0.017338747f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var151 = 0.011795051f;
            } else {
                var151 = -0.0032961573f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var151 = 0.03753899f;
            } else {
                var151 = 0.06631577f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var151 = 0.010415027f;
            } else {
                var151 = -0.02087191f;
            }
        }
    }
    float var152;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var152 = 0.02503798f;
            } else {
                var152 = 0.018442793f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var152 = 0.011643201f;
            } else {
                var152 = 0.06290477f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var152 = -0.018130591f;
        } else {
            var152 = 0.01029203f;
        }
    }
    float var153;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var153 = -0.028191997f;
            } else {
                var153 = -0.017243393f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var153 = 0.012118771f;
            } else {
                var153 = -0.003030964f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var153 = 0.029960936f;
            } else {
                var153 = 0.063228466f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var153 = 0.010957915f;
            } else {
                var153 = -0.020684762f;
            }
        }
    }
    float var154;
    if (input[0] >= 90.0077f) {
        var154 = -0.029925367f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[0] >= 30.987782f) {
                var154 = 0.08333695f;
            } else {
                var154 = 0.041471887f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var154 = 0.089098684f;
            } else {
                var154 = -0.029625714f;
            }
        }
    }
    float var155;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var155 = -0.02810284f;
            } else {
                var155 = -0.017283006f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var155 = -0.0003872759f;
            } else {
                var155 = 0.022177659f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var155 = 0.030057868f;
            } else {
                var155 = 0.063567296f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var155 = 0.011388436f;
            } else {
                var155 = -0.020643065f;
            }
        }
    }
    float var156;
    if (input[0] >= 90.0077f) {
        var156 = -0.030091552f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.76161f) {
                var156 = 0.09297326f;
            } else {
                var156 = 0.07894682f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var156 = 0.09100511f;
            } else {
                var156 = -0.029636739f;
            }
        }
    }
    float var157;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var157 = -0.028208463f;
            } else {
                var157 = -0.017350258f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var157 = 0.012560047f;
            } else {
                var157 = -0.0029979148f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var157 = 0.031559076f;
            } else {
                var157 = 0.068239376f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var157 = 0.0102401255f;
            } else {
                var157 = -0.021344645f;
            }
        }
    }
    float var158;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var158 = -0.028151318f;
            } else {
                var158 = -0.017310426f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var158 = 0.012942146f;
            } else {
                var158 = -0.0028500997f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var158 = 0.031963434f;
            } else {
                var158 = 0.06771102f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var158 = 0.011936849f;
            } else {
                var158 = -0.0210347f;
            }
        }
    }
    float var159;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var159 = 0.025574213f;
            } else {
                var159 = 0.018790435f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var159 = 0.011961401f;
            } else {
                var159 = 0.06432175f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var159 = -0.018209709f;
        } else {
            var159 = 0.010515138f;
        }
    }
    float var160;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var160 = -0.028161427f;
            } else {
                var160 = -0.017217932f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var160 = 0.012656407f;
            } else {
                var160 = -0.0028510548f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var160 = 0.031002793f;
            } else {
                var160 = 0.065190464f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var160 = 0.012283522f;
            } else {
                var160 = -0.020481447f;
            }
        }
    }
    float var161;
    if (input[0] >= 90.0077f) {
        var161 = -0.029988417f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.76161f) {
                var161 = 0.09333035f;
            } else {
                var161 = 0.079279676f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var161 = 0.09146347f;
            } else {
                var161 = -0.029731119f;
            }
        }
    }
    float var162;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var162 = 0.024997298f;
            } else {
                var162 = 0.018457655f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var162 = 0.011575366f;
            } else {
                var162 = 0.062357463f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var162 = -0.017990006f;
        } else {
            var162 = 0.010328343f;
        }
    }
    float var163;
    if (input[0] >= 90.0077f) {
        var163 = -0.02980726f;
    } else {
        if (input[0] >= 61.0265f) {
            var163 = 0.085445926f;
        } else {
            if (input[0] >= 36.59091f) {
                var163 = 0.03543408f;
            } else {
                var163 = -0.018894175f;
            }
        }
    }
    float var164;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var164 = -0.028047426f;
            } else {
                var164 = -0.017320145f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var164 = 0.0120111145f;
            } else {
                var164 = -0.003130423f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var164 = 0.03829978f;
            } else {
                var164 = 0.06757303f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var164 = 0.010143095f;
            } else {
                var164 = -0.02120135f;
            }
        }
    }
    float var165;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var165 = 0.025083324f;
            } else {
                var165 = 0.018481974f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var165 = 0.011911492f;
            } else {
                var165 = 0.06298114f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var165 = -0.01814897f;
        } else {
            var165 = 0.010325084f;
        }
    }
    float var166;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var166 = -0.028149245f;
            } else {
                var166 = -0.017556887f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var166 = 0.011289033f;
            } else {
                var166 = -0.0036458862f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var166 = 0.029045165f;
            } else {
                var166 = 0.06282779f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var166 = 0.0102303345f;
            } else {
                var166 = -0.020877272f;
            }
        }
    }
    float var167;
    if (input[0] >= 90.0077f) {
        var167 = -0.029935917f;
    } else {
        if (input[0] >= 61.0265f) {
            var167 = 0.081249975f;
        } else {
            if (input[0] >= 36.59091f) {
                var167 = 0.033598185f;
            } else {
                var167 = -0.018908955f;
            }
        }
    }
    float var168;
    if (input[0] >= 90.0077f) {
        var168 = -0.0298297f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.76161f) {
                var168 = 0.09124466f;
            } else {
                var168 = 0.07772478f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var168 = 0.08815249f;
            } else {
                var168 = -0.029734297f;
            }
        }
    }
    float var169;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var169 = -0.02813915f;
            } else {
                var169 = -0.017378412f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var169 = 0.011910094f;
            } else {
                var169 = -0.003280012f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var169 = 0.02975211f;
            } else {
                var169 = 0.063182786f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var169 = 0.0110097155f;
            } else {
                var169 = -0.020741435f;
            }
        }
    }
    float var170;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var170 = -0.028340349f;
            } else {
                var170 = -0.015957695f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var170 = 0.00026729307f;
            } else {
                var170 = 0.024257733f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var170 = 0.03264084f;
            } else {
                var170 = 0.069634296f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var170 = 0.01131588f;
            } else {
                var170 = -0.021022975f;
            }
        }
    }
    float var171;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var171 = -0.027978808f;
            } else {
                var171 = -0.01724702f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var171 = 0.011498949f;
            } else {
                var171 = -0.003348276f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var171 = 0.036282036f;
            } else {
                var171 = 0.064020984f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var171 = 0.009942743f;
            } else {
                var171 = -0.020749334f;
            }
        }
    }
    float var172;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var172 = -0.028062195f;
            } else {
                var172 = -0.017307097f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var172 = -0.00077848264f;
            } else {
                var172 = 0.02107546f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var172 = 0.03615623f;
            } else {
                var172 = 0.06383034f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var172 = 0.010183956f;
            } else {
                var172 = -0.020657606f;
            }
        }
    }
    float var173;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var173 = -0.02790933f;
            } else {
                var173 = -0.017199922f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var173 = 0.011813833f;
            } else {
                var173 = -0.0033203103f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var173 = 0.03703448f;
            } else {
                var173 = 0.06539936f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var173 = 0.010846742f;
            } else {
                var173 = -0.020585153f;
            }
        }
    }
    float var174;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var174 = -0.028038187f;
            } else {
                var174 = -0.017365182f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var174 = -0.0006045321f;
            } else {
                var174 = 0.022189904f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var174 = 0.038236342f;
            } else {
                var174 = 0.06795471f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var174 = 0.01049422f;
            } else {
                var174 = -0.021078799f;
            }
        }
    }
    float var175;
    if (input[0] >= 90.0077f) {
        var175 = -0.029850757f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[0] >= 30.987782f) {
                var175 = 0.080805466f;
            } else {
                var175 = 0.039735872f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var175 = 0.08766898f;
            } else {
                var175 = -0.029680355f;
            }
        }
    }
    float var176;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var176 = 0.02508694f;
            } else {
                var176 = 0.018431058f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var176 = 0.011736504f;
            } else {
                var176 = 0.06277795f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var176 = -0.018124133f;
        } else {
            var176 = 0.010212037f;
        }
    }
    float var177;
    if (input[0] >= 90.0077f) {
        var177 = -0.029909993f;
    } else {
        if (input[0] >= 61.0265f) {
            var177 = 0.08789588f;
        } else {
            if (input[0] >= 36.59091f) {
                var177 = 0.035468753f;
            } else {
                var177 = -0.019224262f;
            }
        }
    }
    float var178;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var178 = -0.027969806f;
            } else {
                var178 = -0.017224468f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var178 = 0.011556273f;
            } else {
                var178 = -0.003307201f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var178 = 0.028587071f;
            } else {
                var178 = 0.060702354f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var178 = 0.009916059f;
            } else {
                var178 = -0.020807384f;
            }
        }
    }
    float var179;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var179 = -0.028008914f;
            } else {
                var179 = -0.017335374f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var179 = -0.00058788643f;
            } else {
                var179 = 0.022014925f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var179 = 0.029736726f;
            } else {
                var179 = 0.06374275f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var179 = 0.010521693f;
            } else {
                var179 = -0.020975096f;
            }
        }
    }
    float var180;
    if (input[0] >= 90.0077f) {
        var180 = -0.029941157f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.76161f) {
                var180 = 0.09201375f;
            } else {
                var180 = 0.07782216f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var180 = 0.089268915f;
            } else {
                var180 = -0.02975716f;
            }
        }
    }
    float var181;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var181 = -0.028378824f;
            } else {
                var181 = -0.016014492f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var181 = 0.0004110251f;
            } else {
                var181 = 0.023923082f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var181 = 0.03310823f;
            } else {
                var181 = 0.071657866f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var181 = 0.01118265f;
            } else {
                var181 = -0.021077376f;
            }
        }
    }
    float var182;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var182 = -0.028033003f;
            } else {
                var182 = -0.017563716f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var182 = -0.0012663937f;
            } else {
                var182 = 0.02064561f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var182 = 0.03596545f;
            } else {
                var182 = 0.06471358f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var182 = 0.010231002f;
            } else {
                var182 = -0.020692779f;
            }
        }
    }
    float var183;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var183 = 0.026888186f;
            } else {
                var183 = 0.019941911f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var183 = 0.012935563f;
            } else {
                var183 = 0.066342555f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var183 = -0.018144809f;
        } else {
            var183 = 0.011079966f;
        }
    }
    float var184;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var184 = -0.028036946f;
            } else {
                var184 = -0.017563602f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var184 = -0.0013518769f;
            } else {
                var184 = 0.02031442f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var184 = 0.0353994f;
            } else {
                var184 = 0.06334358f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var184 = 0.01011437f;
            } else {
                var184 = -0.020690171f;
            }
        }
    }
    float var185;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var185 = -0.028086176f;
            } else {
                var185 = -0.01734622f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var185 = -0.00072491047f;
            } else {
                var185 = 0.02144655f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var185 = 0.028870216f;
            } else {
                var185 = 0.061279144f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var185 = 0.010902815f;
            } else {
                var185 = -0.020603657f;
            }
        }
    }
    float var186;
    if (input[0] >= 90.0077f) {
        var186 = -0.029868817f;
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.76161f) {
                var186 = 0.08677066f;
            } else {
                var186 = 0.07333518f;
            }
        } else {
            if (input[0] >= 61.01564f) {
                var186 = 0.0849047f;
            } else {
                var186 = -0.029608313f;
            }
        }
    }
    float var187;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var187 = 0.025642557f;
            } else {
                var187 = 0.018925726f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var187 = 0.012211467f;
            } else {
                var187 = 0.06390676f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var187 = -0.01812028f;
        } else {
            var187 = 0.010610794f;
        }
    }
    float var188;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var188 = -0.028130997f;
            } else {
                var188 = -0.017378038f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var188 = -0.0008036106f;
            } else {
                var188 = 0.02138669f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var188 = 0.036878895f;
            } else {
                var188 = 0.06512263f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var188 = 0.010589596f;
            } else {
                var188 = -0.02075148f;
            }
        }
    }
    float var189;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var189 = -0.028147295f;
            } else {
                var189 = -0.015807597f;
            }
        } else {
            if (input[2] >= 24.95f) {
                var189 = 0.009636069f;
            } else {
                var189 = -0.01354868f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 138.18456f) {
                var189 = 0.030736074f;
            } else {
                var189 = 0.06696775f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var189 = 0.011023953f;
            } else {
                var189 = -0.020910963f;
            }
        }
    }
    float var190;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var190 = 0.024050921f;
            } else {
                var190 = 0.017660504f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var190 = 0.011266913f;
            } else {
                var190 = 0.06078438f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var190 = -0.01809993f;
        } else {
            var190 = 0.009828079f;
        }
    }
    float var191;
    if (input[0] >= 90.0077f) {
        var191 = -0.029794866f;
    } else {
        if (input[0] >= 61.0265f) {
            var191 = 0.082150854f;
        } else {
            if (input[0] >= 36.59091f) {
                var191 = 0.033850323f;
            } else {
                var191 = -0.018853493f;
            }
        }
    }
    float var192;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 171.35464f) {
            if (input[1] >= 179.12634f) {
                var192 = -0.028012274f;
            } else {
                var192 = -0.01721351f;
            }
        } else {
            if (input[2] >= 27.55f) {
                var192 = 0.012030098f;
            } else {
                var192 = -0.0030400816f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 129.34726f) {
                var192 = 0.03789818f;
            } else {
                var192 = 0.0670519f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var192 = 0.010465796f;
            } else {
                var192 = -0.020862611f;
            }
        }
    }
    float var193;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var193 = 0.025942186f;
            } else {
                var193 = 0.01925534f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var193 = 0.012576594f;
            } else {
                var193 = 0.06383956f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var193 = -0.0180378f;
        } else {
            var193 = 0.010865214f;
        }
    }
    float var194;
    if (input[0] >= 90.0077f) {
        var194 = -0.029950887f;
    } else {
        if (input[0] >= 61.0265f) {
            var194 = 0.079709396f;
        } else {
            if (input[0] >= 36.59091f) {
                var194 = 0.03283763f;
            } else {
                var194 = -0.018930342f;
            }
        }
    }
    float var195;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var195 = 0.024115644f;
            } else {
                var195 = 0.01777301f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var195 = 0.011117396f;
            } else {
                var195 = 0.060409177f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var195 = -0.018006139f;
        } else {
            var195 = 0.010001872f;
        }
    }
    float var196;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var196 = 0.026284097f;
            } else {
                var196 = 0.019449225f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var196 = 0.012600295f;
            } else {
                var196 = 0.06555759f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var196 = -0.018166801f;
        } else {
            var196 = 0.011011549f;
        }
    }
    float var197;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var197 = -0.028038952f;
            } else {
                var197 = -0.015925614f;
            }
        } else {
            if (input[2] >= 24.95f) {
                var197 = 0.008999104f;
            } else {
                var197 = -0.013952448f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var197 = 0.03037336f;
            } else {
                var197 = 0.06504564f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var197 = 0.010267263f;
            } else {
                var197 = -0.0209847f;
            }
        }
    }
    float var198;
    if (input[1] >= 152.34714f) {
        if (input[1] >= 169.2971f) {
            if (input[1] >= 179.12634f) {
                var198 = -0.02837511f;
            } else {
                var198 = -0.015878493f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var198 = 0.00041584816f;
            } else {
                var198 = 0.023210779f;
            }
        }
    } else {
        if (input[1] >= 100.996796f) {
            if (input[1] >= 137.66049f) {
                var198 = 0.031977918f;
            } else {
                var198 = 0.067630954f;
            }
        } else {
            if (input[1] >= 81.41812f) {
                var198 = 0.011656827f;
            } else {
                var198 = -0.020764945f;
            }
        }
    }
    float var199;
    if (input[2] >= 23.150002f) {
        if (input[2] >= 23.45f) {
            if (input[2] >= 24.95f) {
                var199 = 0.024784198f;
            } else {
                var199 = 0.018251771f;
            }
        } else {
            if (input[3] >= 76.0f) {
                var199 = 0.011425067f;
            } else {
                var199 = 0.061992723f;
            }
        }
    } else {
        if (input[2] >= 23.05f) {
            var199 = -0.01807971f;
        } else {
            var199 = 0.010108308f;
        }
    }
    float var200;
    if (input[0] >= 90.0077f) {
        var200 = -0.02991261f;
    } else {
        if (input[0] >= 61.0265f) {
            var200 = 0.07992313f;
        } else {
            if (input[0] >= 36.59091f) {
                var200 = 0.032661304f;
            } else {
                var200 = -0.018985828f;
            }
        }
    }
    float var201;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var201 = -0.029750923f;
        } else {
            var201 = 0.14906992f;
        }
    } else {
        var201 = -0.029933563f;
    }
    float var202;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var202 = 0.026712555f;
            } else {
                var202 = 0.014023693f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var202 = 0.038010087f;
            } else {
                var202 = 0.007854355f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 74.0f) {
                var202 = 0.009145118f;
            } else {
                var202 = 0.020570716f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var202 = -0.000763429f;
            } else {
                var202 = 0.0071994215f;
            }
        }
    }
    float var203;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var203 = 0.024373768f;
            } else {
                var203 = 0.012844226f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var203 = 0.03425641f;
            } else {
                var203 = 0.00743446f;
            }
        }
    } else {
        if (input[3] >= 81.0f) {
            if (input[2] >= 24.849998f) {
                var203 = 0.010469335f;
            } else {
                var203 = 0.030400936f;
            }
        } else {
            if (input[2] >= 25.650002f) {
                var203 = 0.004703035f;
            } else {
                var203 = 0.010341841f;
            }
        }
    }
    float var204;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var204 = 0.02429199f;
            } else {
                var204 = 0.012841112f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var204 = 0.033913687f;
            } else {
                var204 = 0.0073159994f;
            }
        }
    } else {
        if (input[3] >= 81.0f) {
            if (input[2] >= 24.849998f) {
                var204 = 0.010504666f;
            } else {
                var204 = 0.030085025f;
            }
        } else {
            if (input[2] >= 25.650002f) {
                var204 = 0.004786081f;
            } else {
                var204 = 0.010336609f;
            }
        }
    }
    float var205;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var205 = 0.023682708f;
            } else {
                var205 = 0.012559135f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var205 = 0.033443082f;
            } else {
                var205 = 0.0072922795f;
            }
        }
    } else {
        if (input[3] >= 81.0f) {
            if (input[2] >= 24.849998f) {
                var205 = 0.010199554f;
            } else {
                var205 = 0.029669587f;
            }
        } else {
            if (input[2] >= 25.650002f) {
                var205 = 0.004566641f;
            } else {
                var205 = 0.010122645f;
            }
        }
    }
    float var206;
    if (input[1] >= 129.34726f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var206 = -0.023152977f;
            } else {
                var206 = -0.0027305435f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var206 = 0.056133356f;
            } else {
                var206 = 0.02547842f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 30.650002f) {
                var206 = 0.012786602f;
            } else {
                var206 = -0.009973354f;
            }
        } else {
            if (input[2] >= 32.699997f) {
                var206 = -0.010663162f;
            } else {
                var206 = -0.02885515f;
            }
        }
    }
    float var207;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var207 = -0.0296881f;
        } else {
            var207 = 0.12228372f;
        }
    } else {
        var207 = -0.029778838f;
    }
    float var208;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var208 = -0.029525502f;
        } else {
            var208 = 0.11514624f;
        }
    } else {
        var208 = -0.029815694f;
    }
    float var209;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var209 = -0.029541794f;
        } else {
            var209 = 0.111768864f;
        }
    } else {
        var209 = -0.029629383f;
    }
    float var210;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var210 = 0.022400742f;
            } else {
                var210 = 0.012144696f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var210 = 0.03131661f;
            } else {
                var210 = 0.007206652f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var210 = 0.02295443f;
            } else {
                var210 = 0.008417248f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var210 = -0.00071503804f;
            } else {
                var210 = 0.0064565944f;
            }
        }
    }
    float var211;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var211 = -0.022918617f;
            } else {
                var211 = -0.002657079f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var211 = 0.05218754f;
            } else {
                var211 = 0.020185595f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var211 = -0.0196418f;
            } else {
                var211 = -0.0063593187f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var211 = -0.028834406f;
            } else {
                var211 = -0.0162434f;
            }
        }
    }
    float var212;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var212 = 0.022784289f;
            } else {
                var212 = 0.012204926f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var212 = 0.032151327f;
            } else {
                var212 = 0.0070219063f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 74.0f) {
                var212 = 0.008109412f;
            } else {
                var212 = 0.018157555f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var212 = -0.0008892338f;
            } else {
                var212 = 0.0063815513f;
            }
        }
    }
    float var213;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var213 = -0.029533276f;
        } else {
            var213 = 0.10593307f;
        }
    } else {
        var213 = -0.029528195f;
    }
    float var214;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var214 = -0.029370857f;
        } else {
            var214 = 0.105181f;
        }
    } else {
        var214 = -0.029551148f;
    }
    float var215;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var215 = -0.029371295f;
        } else {
            var215 = 0.10437941f;
        }
    } else {
        var215 = -0.029516429f;
    }
    float var216;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var216 = -0.022738505f;
            } else {
                var216 = -0.0026480886f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var216 = 0.049649194f;
            } else {
                var216 = 0.020153886f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var216 = -0.019118398f;
            } else {
                var216 = -0.0057781874f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var216 = -0.028752288f;
            } else {
                var216 = -0.016303679f;
            }
        }
    }
    float var217;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[3] >= 52.0f) {
                var217 = 0.015340087f;
            } else {
                var217 = 0.002092474f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var217 = 0.029308502f;
            } else {
                var217 = 0.0067459554f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var217 = 0.021483926f;
            } else {
                var217 = 0.0078073307f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var217 = -0.0008967723f;
            } else {
                var217 = 0.0059527922f;
            }
        }
    }
    float var218;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var218 = -0.02942039f;
        } else {
            var218 = 0.09978293f;
        }
    } else {
        var218 = -0.029587958f;
    }
    float var219;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var219 = -0.029475925f;
        } else {
            var219 = 0.100503854f;
        }
    } else {
        var219 = -0.029403144f;
    }
    float var220;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var220 = -0.029766455f;
        } else {
            var220 = 0.10095277f;
        }
    } else {
        var220 = -0.029502094f;
    }
    float var221;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var221 = -0.029382387f;
        } else {
            var221 = 0.101013534f;
        }
    } else {
        var221 = -0.02956079f;
    }
    float var222;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var222 = -0.023086516f;
            } else {
                var222 = -0.0037340745f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var222 = 0.04619139f;
            } else {
                var222 = 0.018574564f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var222 = 0.02436826f;
            } else {
                var222 = -0.01131601f;
            }
        } else {
            if (input[2] >= 32.699997f) {
                var222 = -0.010307038f;
            } else {
                var222 = -0.028388346f;
            }
        }
    }
    float var223;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var223 = -0.029389462f;
        } else {
            var223 = 0.096985936f;
        }
    } else {
        var223 = -0.029395891f;
    }
    float var224;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var224 = -0.022578286f;
            } else {
                var224 = -0.0025822965f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var224 = 0.04751781f;
            } else {
                var224 = 0.019757852f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var224 = -0.018921942f;
            } else {
                var224 = -0.0055505284f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var224 = -0.028697258f;
            } else {
                var224 = -0.016190298f;
            }
        }
    }
    float var225;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var225 = -0.029373726f;
        } else {
            var225 = 0.096219234f;
        }
    } else {
        var225 = -0.029430939f;
    }
    float var226;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var226 = -0.023115847f;
            } else {
                var226 = -0.0038879376f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var226 = 0.04590584f;
            } else {
                var226 = 0.019684881f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var226 = 0.025805494f;
            } else {
                var226 = -0.010439082f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var226 = -0.019892918f;
            } else {
                var226 = -0.028742412f;
            }
        }
    }
    float var227;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var227 = -0.029488718f;
        } else {
            var227 = 0.0966453f;
        }
    } else {
        var227 = -0.029369935f;
    }
    float var228;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var228 = -0.029564282f;
        } else {
            var228 = 0.09797916f;
        }
    } else {
        var228 = -0.02943914f;
    }
    float var229;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var229 = 0.020194026f;
            } else {
                var229 = 0.010759907f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var229 = 0.02828058f;
            } else {
                var229 = 0.006707338f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 74.0f) {
                var229 = 0.0072331964f;
            } else {
                var229 = 0.016303873f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var229 = -0.0009893797f;
            } else {
                var229 = 0.0056684627f;
            }
        }
    }
    float var230;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var230 = 0.02112404f;
            } else {
                var230 = 0.011186123f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var230 = 0.029857112f;
            } else {
                var230 = 0.00657008f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 74.0f) {
                var230 = 0.007429575f;
            } else {
                var230 = 0.01690123f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var230 = -0.0011421065f;
            } else {
                var230 = 0.0057624183f;
            }
        }
    }
    float var231;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var231 = -0.02928689f;
        } else {
            var231 = 0.095274895f;
        }
    } else {
        var231 = -0.029421344f;
    }
    float var232;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var232 = -0.029231522f;
        } else {
            var232 = 0.09481445f;
        }
    } else {
        var232 = -0.029385736f;
    }
    float var233;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var233 = -0.029423082f;
        } else {
            var233 = 0.104404986f;
        }
    } else {
        var233 = -0.029585162f;
    }
    float var234;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var234 = 0.02002416f;
            } else {
                var234 = 0.010589692f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var234 = 0.028185148f;
            } else {
                var234 = 0.006474043f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var234 = 0.020443363f;
            } else {
                var234 = 0.007282067f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var234 = -0.0011467423f;
            } else {
                var234 = 0.005489756f;
            }
        }
    }
    float var235;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var235 = 0.019668275f;
            } else {
                var235 = 0.010454241f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var235 = 0.027628362f;
            } else {
                var235 = 0.0062469053f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var235 = 0.020206325f;
            } else {
                var235 = 0.007096967f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var235 = -0.0012790797f;
            } else {
                var235 = 0.005330935f;
            }
        }
    }
    float var236;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var236 = -0.029386017f;
        } else {
            var236 = 0.09687089f;
        }
    } else {
        var236 = -0.029363973f;
    }
    float var237;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var237 = -0.029212445f;
        } else {
            var237 = 0.09233967f;
        }
    } else {
        var237 = -0.029495401f;
    }
    float var238;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var238 = -0.022660509f;
            } else {
                var238 = -0.003013031f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var238 = 0.045502793f;
            } else {
                var238 = 0.0196528f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var238 = -0.018608375f;
            } else {
                var238 = -0.0051533533f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var238 = -0.028594587f;
            } else {
                var238 = -0.016100323f;
            }
        }
    }
    float var239;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var239 = -0.022418868f;
            } else {
                var239 = -0.0024817819f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var239 = 0.04539927f;
            } else {
                var239 = 0.018244717f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var239 = 0.024590729f;
            } else {
                var239 = -0.011138039f;
            }
        } else {
            if (input[2] >= 32.699997f) {
                var239 = -0.010019547f;
            } else {
                var239 = -0.028279796f;
            }
        }
    }
    float var240;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var240 = -0.029526642f;
        } else {
            var240 = 0.09288763f;
        }
    } else {
        var240 = -0.029372398f;
    }
    float var241;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var241 = -0.029233709f;
        } else {
            var241 = 0.09111189f;
        }
    } else {
        var241 = -0.029442891f;
    }
    float var242;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var242 = -0.022380788f;
            } else {
                var242 = -0.002666553f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var242 = 0.04355721f;
            } else {
                var242 = 0.01781629f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var242 = -0.019031554f;
            } else {
                var242 = -0.0060846214f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var242 = -0.028407052f;
            } else {
                var242 = -0.015781922f;
            }
        }
    }
    float var243;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var243 = -0.022583453f;
            } else {
                var243 = -0.0023318015f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var243 = 0.049205955f;
            } else {
                var243 = 0.019613568f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var243 = -0.019299485f;
            } else {
                var243 = -0.0060387077f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var243 = -0.028611599f;
            } else {
                var243 = -0.01591946f;
            }
        }
    }
    float var244;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var244 = -0.02266722f;
            } else {
                var244 = -0.0032673415f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var244 = 0.043853752f;
            } else {
                var244 = 0.018790524f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var244 = 0.024873666f;
            } else {
                var244 = -0.010455745f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var244 = -0.019785844f;
            } else {
                var244 = -0.02866068f;
            }
        }
    }
    float var245;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var245 = -0.02946131f;
        } else {
            var245 = 0.09166588f;
        }
    } else {
        var245 = -0.029269872f;
    }
    float var246;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var246 = -0.029284908f;
        } else {
            var246 = 0.09290261f;
        }
    } else {
        var246 = -0.02938973f;
    }
    float var247;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var247 = -0.02924326f;
        } else {
            var247 = 0.092109196f;
        }
    } else {
        var247 = -0.029337427f;
    }
    float var248;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var248 = -0.029319305f;
        } else {
            var248 = 0.09651949f;
        }
    } else {
        var248 = -0.02951922f;
    }
    float var249;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var249 = -0.02240273f;
            } else {
                var249 = -0.0026543865f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var249 = 0.044292044f;
            } else {
                var249 = 0.018944656f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var249 = -0.018687425f;
            } else {
                var249 = -0.0053700153f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var249 = -0.028446136f;
            } else {
                var249 = -0.015791712f;
            }
        }
    }
    float var250;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var250 = -0.022482073f;
            } else {
                var250 = -0.0027241644f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var250 = 0.044998728f;
            } else {
                var250 = 0.01943191f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var250 = -0.018600127f;
            } else {
                var250 = -0.0052058f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var250 = -0.028551823f;
            } else {
                var250 = -0.016005566f;
            }
        }
    }
    float var251;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var251 = -0.029235343f;
        } else {
            var251 = 0.08949786f;
        }
    } else {
        var251 = -0.029296625f;
    }
    float var252;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var252 = -0.029357752f;
        } else {
            var252 = 0.09160116f;
        }
    } else {
        var252 = -0.02928634f;
    }
    float var253;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var253 = -0.029373664f;
        } else {
            var253 = 0.08987971f;
        }
    } else {
        var253 = -0.029220914f;
    }
    float var254;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var254 = -0.029391328f;
        } else {
            var254 = 0.10385777f;
        }
    } else {
        var254 = -0.02944693f;
    }
    float var255;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[3] >= 52.0f) {
                var255 = 0.014240365f;
            } else {
                var255 = 0.001880119f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var255 = 0.027240232f;
            } else {
                var255 = 0.00640264f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var255 = 0.02002989f;
            } else {
                var255 = 0.00733308f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var255 = -0.0009138901f;
            } else {
                var255 = 0.00557092f;
            }
        }
    }
    float var256;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var256 = -0.029481197f;
        } else {
            var256 = 0.10485716f;
        }
    } else {
        var256 = -0.029530952f;
    }
    float var257;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var257 = -0.022450075f;
            } else {
                var257 = -0.0029109775f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var257 = 0.044043697f;
            } else {
                var257 = 0.018722115f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var257 = -0.018631343f;
            } else {
                var257 = -0.0054572364f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var257 = -0.028473854f;
            } else {
                var257 = -0.015869344f;
            }
        }
    }
    float var258;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[3] >= 52.0f) {
                var258 = 0.014288909f;
            } else {
                var258 = 0.001751855f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var258 = 0.02735335f;
            } else {
                var258 = 0.0061843432f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var258 = 0.020177573f;
            } else {
                var258 = 0.007296177f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var258 = -0.000999939f;
            } else {
                var258 = 0.0055178152f;
            }
        }
    }
    float var259;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var259 = -0.022196123f;
            } else {
                var259 = -0.0024420987f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var259 = 0.0429825f;
            } else {
                var259 = 0.018540358f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var259 = 0.024760757f;
            } else {
                var259 = -0.010306475f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var259 = -0.019653242f;
            } else {
                var259 = -0.028570393f;
            }
        }
    }
    float var260;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var260 = -0.029434292f;
        } else {
            var260 = 0.09036957f;
        }
    } else {
        var260 = -0.02930499f;
    }
    float var261;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var261 = 0.01951029f;
            } else {
                var261 = 0.010308257f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var261 = 0.027499665f;
            } else {
                var261 = 0.006441576f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 74.0f) {
                var261 = 0.0069249445f;
            } else {
                var261 = 0.015796203f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var261 = -0.0011418405f;
            } else {
                var261 = 0.005392715f;
            }
        }
    }
    float var262;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var262 = -0.029418869f;
        } else {
            var262 = 0.089869276f;
        }
    } else {
        var262 = -0.029191941f;
    }
    float var263;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var263 = -0.022315972f;
            } else {
                var263 = -0.0027348993f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var263 = 0.0424407f;
            } else {
                var263 = 0.018187622f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var263 = -0.018660007f;
            } else {
                var263 = -0.00552692f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var263 = -0.02828603f;
            } else {
                var263 = -0.015556419f;
            }
        }
    }
    float var264;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var264 = -0.022173751f;
            } else {
                var264 = -0.0023455885f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var264 = 0.04321846f;
            } else {
                var264 = 0.018458216f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var264 = 0.024318574f;
            } else {
                var264 = -0.010522704f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var264 = -0.019853828f;
            } else {
                var264 = -0.028698614f;
            }
        }
    }
    float var265;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var265 = -0.022308959f;
            } else {
                var265 = -0.002612987f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var265 = 0.04339911f;
            } else {
                var265 = 0.018899366f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var265 = 0.024850765f;
            } else {
                var265 = -0.010170177f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var265 = -0.019573506f;
            } else {
                var265 = -0.02868614f;
            }
        }
    }
    float var266;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var266 = -0.029352192f;
        } else {
            var266 = 0.092752926f;
        }
    } else {
        var266 = -0.029326512f;
    }
    float var267;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var267 = -0.029393895f;
        } else {
            var267 = 0.09486596f;
        }
    } else {
        var267 = -0.029346233f;
    }
    float var268;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var268 = -0.022087073f;
            } else {
                var268 = -0.002282975f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var268 = 0.042581953f;
            } else {
                var268 = 0.018414078f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var268 = 0.024375413f;
            } else {
                var268 = -0.010268467f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var268 = -0.019607654f;
            } else {
                var268 = -0.028575147f;
            }
        }
    }
    float var269;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var269 = -0.022297958f;
            } else {
                var269 = -0.002774746f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var269 = 0.042071227f;
            } else {
                var269 = 0.018201599f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var269 = 0.024184512f;
            } else {
                var269 = -0.0102951145f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var269 = -0.019584892f;
            } else {
                var269 = -0.028524717f;
            }
        }
    }
    float var270;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var270 = -0.029290378f;
        } else {
            var270 = 0.08824911f;
        }
    } else {
        var270 = -0.029385367f;
    }
    float var271;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[3] >= 52.0f) {
                var271 = 0.014056458f;
            } else {
                var271 = 0.0018176122f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var271 = 0.026916359f;
            } else {
                var271 = 0.0062866732f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var271 = 0.019821076f;
            } else {
                var271 = 0.0072428077f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var271 = -0.00094139186f;
            } else {
                var271 = 0.005489809f;
            }
        }
    }
    float var272;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var272 = -0.022368534f;
            } else {
                var272 = -0.0028476936f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var272 = 0.042733528f;
            } else {
                var272 = 0.019007644f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var272 = 0.025133932f;
            } else {
                var272 = -0.009900346f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var272 = -0.019393783f;
            } else {
                var272 = -0.028467199f;
            }
        }
    }
    float var273;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var273 = -0.022266556f;
            } else {
                var273 = -0.0023795199f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var273 = 0.044223186f;
            } else {
                var273 = 0.01901578f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var273 = 0.025270185f;
            } else {
                var273 = -0.010302076f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var273 = -0.019712415f;
            } else {
                var273 = -0.028658679f;
            }
        }
    }
    float var274;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[3] >= 52.0f) {
                var274 = 0.014219919f;
            } else {
                var274 = 0.0016206021f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var274 = 0.02733083f;
            } else {
                var274 = 0.0061342116f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var274 = 0.02002408f;
            } else {
                var274 = 0.0071882815f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var274 = -0.001135274f;
            } else {
                var274 = 0.005394845f;
            }
        }
    }
    float var275;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var275 = -0.02924539f;
        } else {
            var275 = 0.08847324f;
        }
    } else {
        var275 = -0.029299825f;
    }
    float var276;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var276 = -0.029160654f;
        } else {
            var276 = 0.08912111f;
        }
    } else {
        var276 = -0.029313056f;
    }
    float var277;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var277 = -0.022182336f;
            } else {
                var277 = -0.002569351f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var277 = 0.041945245f;
            } else {
                var277 = 0.01762396f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var277 = -0.018872662f;
            } else {
                var277 = -0.0058132033f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var277 = -0.028350651f;
            } else {
                var277 = -0.015713094f;
            }
        }
    }
    float var278;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var278 = -0.029226083f;
        } else {
            var278 = 0.088019125f;
        }
    } else {
        var278 = -0.029255673f;
    }
    float var279;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var279 = -0.029069109f;
        } else {
            var279 = 0.088234164f;
        }
    } else {
        var279 = -0.029304853f;
    }
    float var280;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var280 = -0.02221373f;
            } else {
                var280 = -0.0023180663f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var280 = 0.04409138f;
            } else {
                var280 = 0.018879402f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var280 = -0.01864378f;
            } else {
                var280 = -0.005283004f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var280 = -0.028468838f;
            } else {
                var280 = -0.01584055f;
            }
        }
    }
    float var281;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var281 = 0.018563874f;
            } else {
                var281 = 0.009645191f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var281 = 0.026752463f;
            } else {
                var281 = 0.0062303394f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var281 = 0.019177217f;
            } else {
                var281 = 0.0065757977f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var281 = -0.0015719039f;
            } else {
                var281 = 0.004824564f;
            }
        }
    }
    float var282;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var282 = -0.02938586f;
        } else {
            var282 = 0.09626523f;
        }
    } else {
        var282 = -0.02938581f;
    }
    float var283;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var283 = -0.029286211f;
        } else {
            var283 = 0.093671635f;
        }
    } else {
        var283 = -0.029471679f;
    }
    float var284;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var284 = -0.029398814f;
        } else {
            var284 = 0.09885632f;
        }
    } else {
        var284 = -0.029312894f;
    }
    float var285;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var285 = 0.018927434f;
            } else {
                var285 = 0.01013436f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var285 = 0.026725842f;
            } else {
                var285 = 0.0062408014f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var285 = 0.019580577f;
            } else {
                var285 = 0.0070906603f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var285 = -0.0010386985f;
            } else {
                var285 = 0.0053575295f;
            }
        }
    }
    float var286;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var286 = 0.01939861f;
            } else {
                var286 = 0.01046821f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var286 = 0.027255971f;
            } else {
                var286 = 0.0064518037f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 74.0f) {
                var286 = 0.0071903616f;
            } else {
                var286 = 0.01585664f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var286 = -0.0007884782f;
            } else {
                var286 = 0.0056675905f;
            }
        }
    }
    float var287;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[3] >= 52.0f) {
                var287 = 0.013748886f;
            } else {
                var287 = 0.0014658127f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var287 = 0.026489306f;
            } else {
                var287 = 0.0059728436f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var287 = 0.019429145f;
            } else {
                var287 = 0.006943329f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var287 = -0.0011994946f;
            } else {
                var287 = 0.0051953215f;
            }
        }
    }
    float var288;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var288 = -0.029233146f;
        } else {
            var288 = 0.08869876f;
        }
    } else {
        var288 = -0.029214269f;
    }
    float var289;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var289 = -0.02204974f;
            } else {
                var289 = -0.0023507676f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var289 = 0.04117709f;
            } else {
                var289 = 0.016843377f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var289 = 0.02280668f;
            } else {
                var289 = -0.011018255f;
            }
        } else {
            if (input[2] >= 32.699997f) {
                var289 = -0.00996111f;
            } else {
                var289 = -0.028072154f;
            }
        }
    }
    float var290;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var290 = -0.022066025f;
            } else {
                var290 = -0.0021021087f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var290 = 0.043750167f;
            } else {
                var290 = 0.019403724f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var290 = 0.025804779f;
            } else {
                var290 = -0.009842704f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var290 = -0.019411579f;
            } else {
                var290 = -0.028624317f;
            }
        }
    }
    float var291;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var291 = -0.029214088f;
        } else {
            var291 = 0.08914607f;
        }
    } else {
        var291 = -0.029286275f;
    }
    float var292;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[3] >= 52.0f) {
                var292 = 0.013964251f;
            } else {
                var292 = 0.0017401766f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var292 = 0.02679711f;
            } else {
                var292 = 0.0062805465f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 90.0f) {
                var292 = 0.019706752f;
            } else {
                var292 = 0.0072114132f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var292 = -0.0009186991f;
            } else {
                var292 = 0.005447145f;
            }
        }
    }
    float var293;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var293 = -0.022032885f;
            } else {
                var293 = -0.002425458f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var293 = 0.040658053f;
            } else {
                var293 = 0.016905688f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var293 = 0.022801341f;
            } else {
                var293 = -0.010812825f;
            }
        } else {
            if (input[2] >= 32.699997f) {
                var293 = -0.009916562f;
            } else {
                var293 = -0.028072318f;
            }
        }
    }
    float var294;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var294 = -0.029160703f;
        } else {
            var294 = 0.08759812f;
        }
    } else {
        var294 = -0.029186279f;
    }
    float var295;
    if (input[2] >= 31.05f) {
        if (input[2] >= 31.25f) {
            if (input[2] >= 32.45f) {
                var295 = 0.018850334f;
            } else {
                var295 = 0.010116185f;
            }
        } else {
            if (input[3] >= 56.0f) {
                var295 = 0.026425157f;
            } else {
                var295 = 0.006257612f;
            }
        }
    } else {
        if (input[3] >= 73.0f) {
            if (input[3] >= 74.0f) {
                var295 = 0.0068806903f;
            } else {
                var295 = 0.0153913675f;
            }
        } else {
            if (input[2] >= 29.05f) {
                var295 = -0.0009494356f;
            } else {
                var295 = 0.0053950334f;
            }
        }
    }
    float var296;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var296 = -0.022634981f;
            } else {
                var296 = -0.0035663866f;
            }
        } else {
            if (input[1] >= 139.78262f) {
                var296 = 0.039878514f;
            } else {
                var296 = 0.014363924f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[3] >= 80.0f) {
                var296 = -0.01879891f;
            } else {
                var296 = -0.0058402135f;
            }
        } else {
            if (input[3] >= 59.0f) {
                var296 = -0.028400496f;
            } else {
                var296 = -0.01589974f;
            }
        }
    }
    float var297;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var297 = -0.029281888f;
        } else {
            var297 = 0.09423598f;
        }
    } else {
        var297 = -0.029409776f;
    }
    float var298;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var298 = -0.029400205f;
        } else {
            var298 = 0.0864665f;
        }
    } else {
        var298 = -0.029313816f;
    }
    float var299;
    if (input[1] >= 125.16843f) {
        if (input[1] >= 188.8796f) {
            if (input[1] >= 208.78195f) {
                var299 = -0.022128696f;
            } else {
                var299 = -0.0024015757f;
            }
        } else {
            if (input[1] >= 143.55188f) {
                var299 = 0.042497274f;
            } else {
                var299 = 0.018501425f;
            }
        }
    } else {
        if (input[1] >= 108.5049f) {
            if (input[2] >= 32.300003f) {
                var299 = 0.024291798f;
            } else {
                var299 = -0.010066589f;
            }
        } else {
            if (input[1] >= 105.30427f) {
                var299 = -0.019524563f;
            } else {
                var299 = -0.028576663f;
            }
        }
    }
    float var300;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            var300 = -0.02923286f;
        } else {
            var300 = 0.08676896f;
        }
    } else {
        var300 = -0.029248435f;
    }
    float var301;
    if (input[1] >= 99.93675f) {
        var301 = -0.029945029f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 81.41812f) {
                var301 = 0.0911806f;
            } else {
                var301 = 0.13356422f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var301 = 0.045348834f;
            } else {
                var301 = -0.010893855f;
            }
        }
    }
    float var302;
    if (input[0] >= 60.06566f) {
        var302 = -0.029834671f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[2] >= 27.05f) {
                var302 = 0.04644431f;
            } else {
                var302 = 0.021682797f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var302 = 0.06410867f;
            } else {
                var302 = 0.09220671f;
            }
        }
    }
    float var303;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var303 = 0.010014056f;
        } else {
            var303 = -0.026389515f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var303 = -0.025391951f;
            } else {
                var303 = -0.0008013461f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var303 = 0.0046907472f;
            } else {
                var303 = -0.002525082f;
            }
        }
    }
    float var304;
    if (input[1] >= 99.93675f) {
        var304 = -0.02975114f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 93.51062f) {
                var304 = 0.060994405f;
            } else {
                var304 = 0.10741129f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var304 = -0.0104308715f;
            } else {
                var304 = 0.043560218f;
            }
        }
    }
    float var305;
    if (input[1] >= 99.93675f) {
        var305 = -0.029640794f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 93.51062f) {
                var305 = 0.05727337f;
            } else {
                var305 = 0.09648099f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var305 = -0.011933229f;
            } else {
                var305 = 0.040635772f;
            }
        }
    }
    float var306;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var306 = 0.009210502f;
        } else {
            var306 = -0.02617214f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var306 = -0.025161965f;
            } else {
                var306 = -0.00094696926f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var306 = 0.004263097f;
            } else {
                var306 = -0.0025787272f;
            }
        }
    }
    float var307;
    if (input[0] >= 60.06566f) {
        var307 = -0.029534055f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[3] >= 73.0f) {
                var307 = 0.041506447f;
            } else {
                var307 = 0.019798324f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var307 = 0.05693881f;
            } else {
                var307 = 0.07752806f;
            }
        }
    }
    float var308;
    if (input[1] >= 99.93675f) {
        var308 = -0.029653756f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 93.51062f) {
                var308 = 0.057411518f;
            } else {
                var308 = 0.09782285f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var308 = 0.041446827f;
            } else {
                var308 = -0.010968073f;
            }
        }
    }
    float var309;
    if (input[0] >= 60.06566f) {
        var309 = -0.029408911f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[3] >= 87.0f) {
                var309 = -0.0017588929f;
            } else {
                var309 = 0.035688076f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var309 = 0.054211885f;
            } else {
                var309 = 0.07265595f;
            }
        }
    }
    float var310;
    if (input[1] >= 99.93675f) {
        var310 = -0.029309785f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 93.51062f) {
                var310 = 0.053403683f;
            } else {
                var310 = 0.08501945f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var310 = 0.03739095f;
            } else {
                var310 = -0.013514131f;
            }
        }
    }
    float var311;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var311 = 0.008806056f;
        } else {
            var311 = -0.025996825f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var311 = -0.024907185f;
            } else {
                var311 = -0.00089069054f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var311 = 0.0041451524f;
            } else {
                var311 = -0.0024750852f;
            }
        }
    }
    float var312;
    if (input[1] >= 99.93675f) {
        var312 = -0.029367117f;
    } else {
        if (input[0] >= 60.10901f) {
            var312 = -0.03027735f;
        } else {
            if (input[1] >= 50.97269f) {
                var312 = 0.101293996f;
            } else {
                var312 = -0.007029286f;
            }
        }
    }
    float var313;
    if (input[1] >= 99.93675f) {
        var313 = -0.0292892f;
    } else {
        if (input[0] >= 60.10901f) {
            var313 = -0.030128634f;
        } else {
            if (input[1] >= 50.97269f) {
                var313 = 0.09809659f;
            } else {
                var313 = -0.007480727f;
            }
        }
    }
    float var314;
    if (input[0] >= 60.06566f) {
        var314 = -0.02937904f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[3] >= 73.0f) {
                var314 = 0.039619487f;
            } else {
                var314 = 0.0186517f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var314 = 0.05387768f;
            } else {
                var314 = 0.072466664f;
            }
        }
    }
    float var315;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var315 = 0.009149082f;
        } else {
            var315 = -0.025775313f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var315 = -0.024713092f;
            } else {
                var315 = -0.00049061346f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var315 = 0.004517971f;
            } else {
                var315 = -0.0020701324f;
            }
        }
    }
    float var316;
    if (input[1] >= 99.93675f) {
        var316 = -0.0293224f;
    } else {
        if (input[0] >= 60.10901f) {
            var316 = -0.029788971f;
        } else {
            if (input[1] >= 50.97269f) {
                var316 = 0.099689774f;
            } else {
                var316 = -0.007642606f;
            }
        }
    }
    float var317;
    if (input[1] >= 99.93675f) {
        var317 = -0.029235879f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var317 = 0.04381235f;
            } else {
                var317 = 0.07835369f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var317 = 0.03691647f;
            } else {
                var317 = -0.012903526f;
            }
        }
    }
    float var318;
    if (input[1] >= 99.93675f) {
        var318 = -0.029313235f;
    } else {
        if (input[0] >= 60.10901f) {
            var318 = -0.030205626f;
        } else {
            if (input[1] >= 50.97269f) {
                var318 = 0.094237946f;
            } else {
                var318 = -0.007463429f;
            }
        }
    }
    float var319;
    if (input[1] >= 99.93675f) {
        var319 = -0.029200677f;
    } else {
        if (input[0] >= 60.10901f) {
            var319 = -0.030170089f;
        } else {
            if (input[1] >= 50.97269f) {
                var319 = 0.09521421f;
            } else {
                var319 = -0.0067583406f;
            }
        }
    }
    float var320;
    if (input[0] >= 60.06566f) {
        var320 = -0.029375086f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[2] >= 27.05f) {
                var320 = 0.03927606f;
            } else {
                var320 = 0.019064667f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var320 = 0.052326895f;
            } else {
                var320 = 0.06932271f;
            }
        }
    }
    float var321;
    if (input[0] >= 60.06566f) {
        var321 = -0.029303705f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[3] >= 87.0f) {
                var321 = -0.0022100913f;
            } else {
                var321 = 0.033954885f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var321 = 0.051616725f;
            } else {
                var321 = 0.06845894f;
            }
        }
    }
    float var322;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var322 = 0.008484718f;
        } else {
            var322 = -0.025791911f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var322 = -0.024660254f;
            } else {
                var322 = -0.0009272361f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var322 = 0.003769731f;
            } else {
                var322 = -0.0025262148f;
            }
        }
    }
    float var323;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var323 = 0.008610899f;
        } else {
            var323 = -0.025590701f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var323 = -0.024457952f;
            } else {
                var323 = -0.0005507844f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var323 = 0.0041744895f;
            } else {
                var323 = -0.0020899302f;
            }
        }
    }
    float var324;
    if (input[0] >= 60.06566f) {
        var324 = -0.029261688f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[2] >= 27.05f) {
                var324 = 0.038884703f;
            } else {
                var324 = 0.018407384f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var324 = 0.05141265f;
            } else {
                var324 = 0.06884988f;
            }
        }
    }
    float var325;
    if (input[1] >= 99.93675f) {
        var325 = -0.029244823f;
    } else {
        if (input[0] >= 60.10901f) {
            var325 = -0.0298508f;
        } else {
            if (input[1] >= 50.97269f) {
                var325 = 0.09383377f;
            } else {
                var325 = -0.0077990307f;
            }
        }
    }
    float var326;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var326 = 0.008544834f;
        } else {
            var326 = -0.025613854f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var326 = -0.024450248f;
            } else {
                var326 = -0.0006301211f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var326 = 0.004059115f;
            } else {
                var326 = -0.0021912174f;
            }
        }
    }
    float var327;
    if (input[1] >= 99.93675f) {
        var327 = -0.029274214f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 93.51062f) {
                var327 = 0.051079333f;
            } else {
                var327 = 0.07965278f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var327 = 0.03671586f;
            } else {
                var327 = -0.012962947f;
            }
        }
    }
    float var328;
    if (input[1] >= 99.93675f) {
        var328 = -0.029211069f;
    } else {
        if (input[0] >= 60.10901f) {
            var328 = -0.03005297f;
        } else {
            if (input[1] >= 50.97269f) {
                var328 = 0.09143516f;
            } else {
                var328 = -0.0078062634f;
            }
        }
    }
    float var329;
    if (input[1] >= 99.93675f) {
        var329 = -0.029147658f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var329 = 0.04266043f;
            } else {
                var329 = 0.074741215f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var329 = 0.036522977f;
            } else {
                var329 = -0.0127029065f;
            }
        }
    }
    float var330;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var330 = 0.008821442f;
        } else {
            var330 = -0.02571103f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var330 = -0.02469245f;
            } else {
                var330 = -0.0006437763f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var330 = 0.0040879287f;
            } else {
                var330 = -0.002187095f;
            }
        }
    }
    float var331;
    if (input[1] >= 99.93675f) {
        var331 = -0.029251495f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 77.68091f) {
                var331 = 0.067988984f;
            } else {
                var331 = 0.08950415f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var331 = 0.037488703f;
            } else {
                var331 = -0.013096086f;
            }
        }
    }
    float var332;
    if (input[0] >= 60.06566f) {
        var332 = -0.029230386f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[3] >= 87.0f) {
                var332 = -0.0020430156f;
            } else {
                var332 = 0.03332292f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var332 = 0.050203245f;
            } else {
                var332 = 0.065418504f;
            }
        }
    }
    float var333;
    if (input[1] >= 99.93675f) {
        var333 = -0.02932179f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 93.51062f) {
                var333 = 0.051003587f;
            } else {
                var333 = 0.08209691f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var333 = 0.038249012f;
            } else {
                var333 = -0.011660245f;
            }
        }
    }
    float var334;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var334 = 0.008460195f;
        } else {
            var334 = -0.025687749f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var334 = -0.024577232f;
            } else {
                var334 = -0.0008006516f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var334 = 0.0038198382f;
            } else {
                var334 = -0.002363052f;
            }
        }
    }
    float var335;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var335 = 0.008775052f;
        } else {
            var335 = -0.025682345f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var335 = -0.024499243f;
            } else {
                var335 = -0.000674694f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var335 = 0.0041409596f;
            } else {
                var335 = -0.0022965418f;
            }
        }
    }
    float var336;
    if (input[1] >= 99.93675f) {
        var336 = -0.0290798f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var336 = 0.04239168f;
            } else {
                var336 = 0.073584795f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var336 = -0.01294558f;
            } else {
                var336 = 0.036249455f;
            }
        }
    }
    float var337;
    if (input[1] >= 99.93675f) {
        var337 = -0.029394789f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 77.68091f) {
                var337 = 0.07032785f;
            } else {
                var337 = 0.09524691f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var337 = 0.039398998f;
            } else {
                var337 = -0.011828988f;
            }
        }
    }
    float var338;
    if (input[1] >= 99.93675f) {
        var338 = -0.029229132f;
    } else {
        if (input[0] >= 60.10901f) {
            var338 = -0.029591758f;
        } else {
            if (input[1] >= 50.97269f) {
                var338 = 0.096359f;
            } else {
                var338 = -0.008142094f;
            }
        }
    }
    float var339;
    if (input[1] >= 99.93675f) {
        var339 = -0.029150723f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 77.168625f) {
                var339 = 0.060335543f;
            } else {
                var339 = 0.07909561f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var339 = -0.013269774f;
            } else {
                var339 = 0.035955977f;
            }
        }
    }
    float var340;
    if (input[0] >= 60.06566f) {
        var340 = -0.029256264f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[3] >= 87.0f) {
                var340 = -0.0020621805f;
            } else {
                var340 = 0.03407761f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var340 = 0.05150766f;
            } else {
                var340 = 0.06870569f;
            }
        }
    }
    float var341;
    if (input[1] >= 99.93675f) {
        var341 = -0.029296234f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 77.68091f) {
                var341 = 0.066514544f;
            } else {
                var341 = 0.08819207f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var341 = 0.03694721f;
            } else {
                var341 = -0.013007595f;
            }
        }
    }
    float var342;
    if (input[1] >= 99.93675f) {
        var342 = -0.029146379f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 77.168625f) {
                var342 = 0.060000744f;
            } else {
                var342 = 0.07833371f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var342 = -0.012941618f;
            } else {
                var342 = 0.035825007f;
            }
        }
    }
    float var343;
    if (input[1] >= 99.93675f) {
        var343 = -0.029160995f;
    } else {
        if (input[0] >= 60.10901f) {
            var343 = -0.030286107f;
        } else {
            if (input[1] >= 50.97269f) {
                var343 = 0.086727716f;
            } else {
                var343 = -0.008269638f;
            }
        }
    }
    float var344;
    if (input[1] >= 99.93675f) {
        var344 = -0.029117305f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var344 = 0.041529797f;
            } else {
                var344 = 0.07315224f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var344 = 0.035583593f;
            } else {
                var344 = -0.013139218f;
            }
        }
    }
    float var345;
    if (input[1] >= 99.93675f) {
        var345 = -0.029060442f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var345 = 0.0414706f;
            } else {
                var345 = 0.072317116f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var345 = 0.03596118f;
            } else {
                var345 = -0.012615034f;
            }
        }
    }
    float var346;
    if (input[0] >= 60.06566f) {
        var346 = -0.029134301f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[2] >= 27.05f) {
                var346 = 0.037770122f;
            } else {
                var346 = 0.018105417f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var346 = 0.049539994f;
            } else {
                var346 = 0.06516064f;
            }
        }
    }
    float var347;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var347 = 0.008754646f;
        } else {
            var347 = -0.02542655f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var347 = -0.024252314f;
            } else {
                var347 = -0.00033424573f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var347 = 0.004391285f;
            } else {
                var347 = -0.0018780178f;
            }
        }
    }
    float var348;
    if (input[0] >= 60.06566f) {
        var348 = -0.029215435f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[2] >= 27.05f) {
                var348 = 0.036762726f;
            } else {
                var348 = 0.01747222f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var348 = 0.048709072f;
            } else {
                var348 = 0.06374309f;
            }
        }
    }
    float var349;
    if (input[0] >= 60.06566f) {
        var349 = -0.029121352f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[2] >= 27.05f) {
                var349 = 0.03670008f;
            } else {
                var349 = 0.018155292f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var349 = 0.04870912f;
            } else {
                var349 = 0.0629277f;
            }
        }
    }
    float var350;
    if (input[1] >= 99.93675f) {
        var350 = -0.029145462f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 93.51062f) {
                var350 = 0.04925419f;
            } else {
                var350 = 0.07782435f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var350 = 0.037504088f;
            } else {
                var350 = -0.011737059f;
            }
        }
    }
    float var351;
    if (input[1] >= 99.93675f) {
        var351 = -0.029050553f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var351 = 0.040800016f;
            } else {
                var351 = 0.07116991f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var351 = -0.013079709f;
            } else {
                var351 = 0.035394143f;
            }
        }
    }
    float var352;
    if (input[0] >= 60.06566f) {
        var352 = -0.029049192f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[3] >= 87.0f) {
                var352 = -0.0017112587f;
            } else {
                var352 = 0.0318654f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var352 = 0.04720926f;
            } else {
                var352 = 0.059948415f;
            }
        }
    }
    float var353;
    if (input[1] >= 99.93675f) {
        var353 = -0.029006675f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var353 = 0.041405912f;
            } else {
                var353 = 0.07143124f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var353 = -0.013577561f;
            } else {
                var353 = 0.03551173f;
            }
        }
    }
    float var354;
    if (input[0] >= 60.06566f) {
        var354 = -0.029083965f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[2] >= 27.05f) {
                var354 = 0.0363449f;
            } else {
                var354 = 0.018223671f;
            }
        } else {
            if (input[2] >= 23.4f) {
                var354 = 0.059526224f;
            } else {
                var354 = 0.0088726f;
            }
        }
    }
    float var355;
    if (input[0] >= 60.06566f) {
        var355 = -0.029032916f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[2] >= 27.05f) {
                var355 = 0.03539454f;
            } else {
                var355 = 0.017710188f;
            }
        } else {
            if (input[2] >= 23.650002f) {
                var355 = 0.057808906f;
            } else {
                var355 = 0.016247096f;
            }
        }
    }
    float var356;
    if (input[0] >= 60.06566f) {
        var356 = -0.029117549f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[2] >= 27.05f) {
                var356 = 0.0355425f;
            } else {
                var356 = 0.017763454f;
            }
        } else {
            if (input[2] >= 23.650002f) {
                var356 = 0.05833117f;
            } else {
                var356 = 0.016427161f;
            }
        }
    }
    float var357;
    if (input[0] >= 60.06566f) {
        var357 = -0.02921443f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[3] >= 87.0f) {
                var357 = -0.00213109f;
            } else {
                var357 = 0.033762436f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var357 = 0.05087948f;
            } else {
                var357 = 0.06761238f;
            }
        }
    }
    float var358;
    if (input[1] >= 99.93675f) {
        var358 = -0.029141927f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 93.51062f) {
                var358 = 0.048698418f;
            } else {
                var358 = 0.077809274f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var358 = 0.03723364f;
            } else {
                var358 = -0.01216014f;
            }
        }
    }
    float var359;
    if (input[0] >= 60.06566f) {
        var359 = -0.029067343f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[3] >= 87.0f) {
                var359 = -0.002102616f;
            } else {
                var359 = 0.03146229f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var359 = 0.04700734f;
            } else {
                var359 = 0.060651463f;
            }
        }
    }
    float var360;
    if (input[0] >= 60.06566f) {
        var360 = -0.029089684f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[3] >= 87.0f) {
                var360 = -0.0018354642f;
            } else {
                var360 = 0.03150023f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var360 = 0.04672235f;
            } else {
                var360 = 0.059690543f;
            }
        }
    }
    float var361;
    if (input[1] >= 99.93675f) {
        var361 = -0.029086947f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var361 = 0.040520325f;
            } else {
                var361 = 0.07110275f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var361 = 0.035665207f;
            } else {
                var361 = -0.012411307f;
            }
        }
    }
    float var362;
    if (input[0] >= 60.06566f) {
        var362 = -0.02898016f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[2] >= 27.05f) {
                var362 = 0.035896357f;
            } else {
                var362 = 0.01820754f;
            }
        } else {
            if (input[2] >= 23.650002f) {
                var362 = 0.05788521f;
            } else {
                var362 = 0.016281001f;
            }
        }
    }
    float var363;
    if (input[1] >= 99.93675f) {
        var363 = -0.029042441f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var363 = 0.040629145f;
            } else {
                var363 = 0.070580766f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var363 = 0.035015192f;
            } else {
                var363 = -0.013129485f;
            }
        }
    }
    float var364;
    if (input[0] >= 60.06566f) {
        var364 = -0.029242655f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[3] >= 73.0f) {
                var364 = 0.037389647f;
            } else {
                var364 = 0.018191561f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var364 = 0.05086651f;
            } else {
                var364 = 0.06629486f;
            }
        }
    }
    float var365;
    if (input[1] >= 99.93675f) {
        var365 = -0.02916312f;
    } else {
        if (input[0] >= 60.10901f) {
            var365 = -0.029799512f;
        } else {
            if (input[1] >= 50.97269f) {
                var365 = 0.09166401f;
            } else {
                var365 = -0.008658431f;
            }
        }
    }
    float var366;
    if (input[0] >= 60.06566f) {
        var366 = -0.029059634f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[3] >= 87.0f) {
                var366 = -0.00189873f;
            } else {
                var366 = 0.031598385f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var366 = 0.04693612f;
            } else {
                var366 = 0.060150858f;
            }
        }
    }
    float var367;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var367 = 0.008150286f;
        } else {
            var367 = -0.025367072f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var367 = -0.02422645f;
            } else {
                var367 = -0.0005248875f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var367 = 0.0039552725f;
            } else {
                var367 = -0.0020448307f;
            }
        }
    }
    float var368;
    if (input[1] >= 99.93675f) {
        var368 = -0.029035544f;
    } else {
        if (input[0] >= 60.10901f) {
            var368 = -0.03000608f;
        } else {
            if (input[1] >= 50.97269f) {
                var368 = 0.085903674f;
            } else {
                var368 = -0.009157288f;
            }
        }
    }
    float var369;
    if (input[0] >= 60.06566f) {
        var369 = -0.029031098f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[2] >= 27.05f) {
                var369 = 0.035289805f;
            } else {
                var369 = 0.017626686f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var369 = 0.046367668f;
            } else {
                var369 = 0.059498616f;
            }
        }
    }
    float var370;
    if (input[0] >= 60.06566f) {
        var370 = -0.029116983f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[3] >= 73.0f) {
                var370 = 0.033966377f;
            } else {
                var370 = 0.015769934f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var370 = 0.045506187f;
            } else {
                var370 = 0.059202917f;
            }
        }
    }
    float var371;
    if (input[0] >= 60.06566f) {
        var371 = -0.02899175f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[3] >= 87.0f) {
                var371 = -0.0019813157f;
            } else {
                var371 = 0.030856607f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var371 = 0.045620125f;
            } else {
                var371 = 0.057985336f;
            }
        }
    }
    float var372;
    if (input[1] >= 99.93675f) {
        var372 = -0.02896151f;
    } else {
        if (input[0] >= 60.10901f) {
            var372 = -0.030218938f;
        } else {
            if (input[1] >= 50.97269f) {
                var372 = 0.08235376f;
            } else {
                var372 = -0.008634701f;
            }
        }
    }
    float var373;
    if (input[0] >= 60.06566f) {
        var373 = -0.029065205f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[2] >= 27.05f) {
                var373 = 0.035533972f;
            } else {
                var373 = 0.017894518f;
            }
        } else {
            if (input[2] >= 23.650002f) {
                var373 = 0.0581399f;
            } else {
                var373 = 0.01653571f;
            }
        }
    }
    float var374;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var374 = 0.008580232f;
        } else {
            var374 = -0.025371924f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var374 = -0.024216384f;
            } else {
                var374 = -0.00043954444f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var374 = 0.0041344105f;
            } else {
                var374 = -0.0020301503f;
            }
        }
    }
    float var375;
    if (input[1] >= 99.93675f) {
        var375 = -0.029015517f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var375 = 0.040138293f;
            } else {
                var375 = 0.06923892f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var375 = -0.0134707885f;
            } else {
                var375 = 0.03471184f;
            }
        }
    }
    float var376;
    if (input[1] >= 99.93675f) {
        var376 = -0.029068593f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var376 = 0.04072885f;
            } else {
                var376 = 0.071569145f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var376 = 0.035471335f;
            } else {
                var376 = -0.012671794f;
            }
        }
    }
    float var377;
    if (input[0] >= 60.06566f) {
        var377 = -0.029123465f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[2] >= 27.05f) {
                var377 = 0.03561434f;
            } else {
                var377 = 0.017132184f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var377 = 0.046894744f;
            } else {
                var377 = 0.060750335f;
            }
        }
    }
    float var378;
    if (input[1] >= 99.93675f) {
        var378 = -0.029004369f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var378 = 0.041038122f;
            } else {
                var378 = 0.07054146f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var378 = 0.034668293f;
            } else {
                var378 = -0.013628093f;
            }
        }
    }
    float var379;
    if (input[0] >= 60.06566f) {
        var379 = -0.029081298f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[3] >= 87.0f) {
                var379 = -0.0020790643f;
            } else {
                var379 = 0.031516287f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var379 = 0.047121808f;
            } else {
                var379 = 0.061091017f;
            }
        }
    }
    float var380;
    if (input[0] >= 60.06566f) {
        var380 = -0.029107893f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[2] >= 27.05f) {
                var380 = 0.03613096f;
            } else {
                var380 = 0.01803953f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var380 = 0.047822244f;
            } else {
                var380 = 0.06168009f;
            }
        }
    }
    float var381;
    if (input[1] >= 99.93675f) {
        var381 = -0.029126266f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 77.168625f) {
                var381 = 0.058035303f;
            } else {
                var381 = 0.075427674f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var381 = -0.0134124225f;
            } else {
                var381 = 0.03489707f;
            }
        }
    }
    float var382;
    if (input[1] >= 99.93675f) {
        var382 = -0.02901092f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var382 = 0.0396778f;
            } else {
                var382 = 0.06824537f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var382 = -0.013310606f;
            } else {
                var382 = 0.034656465f;
            }
        }
    }
    float var383;
    if (input[1] >= 99.93675f) {
        var383 = -0.029039716f;
    } else {
        if (input[0] >= 60.10901f) {
            var383 = -0.030380024f;
        } else {
            if (input[1] >= 50.97269f) {
                var383 = 0.08128037f;
            } else {
                var383 = -0.008650043f;
            }
        }
    }
    float var384;
    if (input[0] >= 60.06566f) {
        var384 = -0.02905317f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[3] >= 87.0f) {
                var384 = -0.0017093935f;
            } else {
                var384 = 0.031718906f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var384 = 0.046725225f;
            } else {
                var384 = 0.05909123f;
            }
        }
    }
    float var385;
    if (input[1] >= 99.93675f) {
        var385 = -0.028959993f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var385 = 0.039145753f;
            } else {
                var385 = 0.0675148f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var385 = 0.034139663f;
            } else {
                var385 = -0.0133442655f;
            }
        }
    }
    float var386;
    if (input[0] >= 60.06566f) {
        var386 = -0.028934667f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[2] >= 27.05f) {
                var386 = 0.034837738f;
            } else {
                var386 = 0.017585892f;
            }
        } else {
            if (input[2] >= 23.4f) {
                var386 = 0.055820145f;
            } else {
                var386 = 0.008452426f;
            }
        }
    }
    float var387;
    if (input[0] >= 60.06566f) {
        var387 = -0.029030045f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[2] >= 27.05f) {
                var387 = 0.03568961f;
            } else {
                var387 = 0.016917264f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var387 = 0.04656707f;
            } else {
                var387 = 0.061037857f;
            }
        }
    }
    float var388;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var388 = 0.008180265f;
        } else {
            var388 = -0.025369529f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var388 = -0.024218805f;
            } else {
                var388 = -0.000639833f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var388 = 0.0038644709f;
            } else {
                var388 = -0.0021538478f;
            }
        }
    }
    float var389;
    if (input[1] >= 99.93675f) {
        var389 = -0.02901189f;
    } else {
        if (input[0] >= 60.10901f) {
            var389 = -0.030430881f;
        } else {
            if (input[1] >= 50.97269f) {
                var389 = 0.08071596f;
            } else {
                var389 = -0.008397217f;
            }
        }
    }
    float var390;
    if (input[0] >= 60.06566f) {
        var390 = -0.029120011f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[3] >= 87.0f) {
                var390 = -0.0012929199f;
            } else {
                var390 = 0.033017796f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var390 = 0.049306195f;
            } else {
                var390 = 0.06356641f;
            }
        }
    }
    float var391;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var391 = 0.008379194f;
        } else {
            var391 = -0.02531696f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var391 = -0.024234405f;
            } else {
                var391 = -0.00045726084f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var391 = 0.003988106f;
            } else {
                var391 = -0.0020104926f;
            }
        }
    }
    float var392;
    if (input[0] >= 60.06566f) {
        var392 = -0.02896062f;
    } else {
        if (input[0] >= 46.3723f) {
            if (input[2] >= 27.05f) {
                var392 = 0.034528334f;
            } else {
                var392 = 0.017152566f;
            }
        } else {
            if (input[2] >= 23.4f) {
                var392 = 0.056338906f;
            } else {
                var392 = 0.008487949f;
            }
        }
    }
    float var393;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var393 = 0.00813268f;
        } else {
            var393 = -0.025454387f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var393 = -0.024352731f;
            } else {
                var393 = -0.00076904485f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var393 = 0.003666246f;
            } else {
                var393 = -0.0023428227f;
            }
        }
    }
    float var394;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var394 = 0.007862228f;
        } else {
            var394 = -0.025328467f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var394 = -0.024177685f;
            } else {
                var394 = -0.0007191872f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var394 = 0.0036810946f;
            } else {
                var394 = -0.0022058247f;
            }
        }
    }
    float var395;
    if (input[1] >= 99.93675f) {
        var395 = -0.028937707f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 95.90593f) {
                var395 = 0.03966961f;
            } else {
                var395 = 0.067798145f;
            }
        } else {
            if (input[2] >= 31.4f) {
                var395 = 0.034012746f;
            } else {
                var395 = -0.01369513f;
            }
        }
    }
    float var396;
    if (input[0] >= 60.06566f) {
        var396 = -0.029096251f;
    } else {
        if (input[0] >= 46.28755f) {
            if (input[2] >= 27.05f) {
                var396 = 0.035582114f;
            } else {
                var396 = 0.016770333f;
            }
        } else {
            if (input[0] >= 40.76938f) {
                var396 = 0.04653524f;
            } else {
                var396 = 0.06117469f;
            }
        }
    }
    float var397;
    if (input[1] >= 99.93675f) {
        var397 = -0.029063126f;
    } else {
        if (input[1] >= 50.97269f) {
            if (input[1] >= 77.168625f) {
                var397 = 0.058487173f;
            } else {
                var397 = 0.07621163f;
            }
        } else {
            if (input[3] >= 60.0f) {
                var397 = -0.012809574f;
            } else {
                var397 = 0.035172023f;
            }
        }
    }
    float var398;
    if (input[1] >= 99.93675f) {
        var398 = -0.029045647f;
    } else {
        if (input[0] >= 60.10901f) {
            var398 = -0.03033867f;
        } else {
            if (input[1] >= 50.97269f) {
                var398 = 0.08163439f;
            } else {
                var398 = -0.009000574f;
            }
        }
    }
    float var399;
    if (input[1] >= 99.93675f) {
        var399 = -0.028978491f;
    } else {
        if (input[0] >= 60.10901f) {
            var399 = -0.030138073f;
        } else {
            if (input[1] >= 50.97269f) {
                var399 = 0.083539f;
            } else {
                var399 = -0.009268902f;
            }
        }
    }
    float var400;
    if (input[3] >= 91.0f) {
        if (input[3] >= 93.0f) {
            var400 = 0.008163728f;
        } else {
            var400 = -0.025277156f;
        }
    } else {
        if (input[2] >= 31.25f) {
            if (input[3] >= 71.0f) {
                var400 = -0.024124568f;
            } else {
                var400 = -0.00048228708f;
            }
        } else {
            if (input[3] >= 66.0f) {
                var400 = 0.0038944897f;
            } else {
                var400 = -0.0020254625f;
            }
        }
    }
    float var401;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var401 = -0.029740756f;
            } else {
                var401 = 0.123786405f;
            }
        } else {
            var401 = -0.029813984f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var401 = 0.1352459f;
        } else {
            if (input[0] >= 62.493275f) {
                var401 = -0.028351372f;
            } else {
                var401 = -0.018775698f;
            }
        }
    }
    float var402;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var402 = -0.020096514f;
            } else {
                var402 = -0.026313433f;
            }
        } else {
            if (input[3] >= 69.0f) {
                var402 = -0.021135872f;
            } else {
                var402 = -0.02578468f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var402 = -0.023280164f;
            } else {
                var402 = -0.0004176384f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var402 = -0.025893858f;
            } else {
                var402 = -0.0050323023f;
            }
        }
    }
    float var403;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var403 = 0.007980759f;
            } else {
                var403 = -0.028841963f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var403 = 0.008132017f;
            } else {
                var403 = -0.02244745f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var403 = -0.018792873f;
            } else {
                var403 = 0.13106903f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var403 = -0.024597853f;
            } else {
                var403 = -0.013804368f;
            }
        }
    }
    float var404;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var404 = -0.029500796f;
            } else {
                var404 = 0.11403962f;
            }
        } else {
            var404 = -0.029397309f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var404 = 0.124361135f;
        } else {
            if (input[0] >= 62.493275f) {
                var404 = -0.027929623f;
            } else {
                var404 = -0.018098306f;
            }
        }
    }
    float var405;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var405 = -0.019663513f;
            } else {
                var405 = -0.025982225f;
            }
        } else {
            if (input[3] >= 69.0f) {
                var405 = -0.020715395f;
            } else {
                var405 = -0.025459468f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var405 = -0.02296767f;
            } else {
                var405 = -0.0001837894f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var405 = -0.025583668f;
            } else {
                var405 = -0.0048334664f;
            }
        }
    }
    float var406;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var406 = 0.00851638f;
            } else {
                var406 = -0.02848274f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var406 = 0.008329519f;
            } else {
                var406 = -0.022303361f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var406 = -0.018522216f;
            } else {
                var406 = 0.12858321f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var406 = -0.024206346f;
            } else {
                var406 = -0.012874101f;
            }
        }
    }
    float var407;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var407 = -0.019222908f;
            } else {
                var407 = -0.025680179f;
            }
        } else {
            if (input[3] >= 69.0f) {
                var407 = -0.02029739f;
            } else {
                var407 = -0.025158463f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var407 = -0.022609761f;
            } else {
                var407 = 0.00027707728f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var407 = -0.025318524f;
            } else {
                var407 = -0.004321913f;
            }
        }
    }
    float var408;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var408 = -0.029001359f;
            } else {
                var408 = 0.10927802f;
            }
        } else {
            var408 = -0.029261598f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var408 = 0.11712896f;
        } else {
            if (input[0] >= 62.493275f) {
                var408 = -0.027671829f;
            } else {
                var408 = -0.017694172f;
            }
        }
    }
    float var409;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var409 = -0.029144138f;
            } else {
                var409 = 0.112852685f;
            }
        } else {
            var409 = -0.029295808f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var409 = 0.1231987f;
        } else {
            if (input[0] >= 62.493275f) {
                var409 = -0.027656188f;
            } else {
                var409 = -0.0173862f;
            }
        }
    }
    float var410;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var410 = -0.028950492f;
            } else {
                var410 = 0.10185891f;
            }
        } else {
            var410 = -0.029117946f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var410 = 0.10950911f;
        } else {
            if (input[0] >= 62.493275f) {
                var410 = -0.02752754f;
            } else {
                var410 = -0.017087013f;
            }
        }
    }
    float var411;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var411 = -0.019296324f;
            } else {
                var411 = -0.025698856f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var411 = -0.01991869f;
            } else {
                var411 = -0.022895796f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var411 = -0.022661334f;
            } else {
                var411 = 0.00030416853f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var411 = -0.025309417f;
            } else {
                var411 = -0.0047144312f;
            }
        }
    }
    float var412;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var412 = -0.028988171f;
            } else {
                var412 = 0.10425087f;
            }
        } else {
            var412 = -0.029126648f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var412 = 0.11234565f;
        } else {
            if (input[0] >= 62.493275f) {
                var412 = -0.027504249f;
            } else {
                var412 = -0.017219825f;
            }
        }
    }
    float var413;
    if (input[1] >= 151.80267f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var413 = -0.028360192f;
            } else {
                var413 = -0.0061437697f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var413 = 0.008214428f;
            } else {
                var413 = -0.023248991f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[3] >= 77.0f) {
                var413 = 0.029673753f;
            } else {
                var413 = -0.0018345446f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var413 = -0.017478755f;
            } else {
                var413 = -0.022947675f;
            }
        }
    }
    float var414;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var414 = -0.0017314125f;
        } else {
            if (input[1] >= 181.08876f) {
                var414 = -0.028327992f;
            } else {
                var414 = -0.022818064f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var414 = 0.0011868158f;
            } else {
                var414 = 0.024600236f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var414 = -0.017644636f;
            } else {
                var414 = -0.023160605f;
            }
        }
    }
    float var415;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var415 = -0.028938888f;
            } else {
                var415 = 0.10278094f;
            }
        } else {
            var415 = -0.029087929f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var415 = 0.11093169f;
        } else {
            if (input[0] >= 62.493275f) {
                var415 = -0.027459143f;
            } else {
                var415 = -0.017261086f;
            }
        }
    }
    float var416;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var416 = -0.0017528007f;
        } else {
            if (input[1] >= 181.08876f) {
                var416 = -0.02830416f;
            } else {
                var416 = -0.02289566f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var416 = 0.00081162f;
            } else {
                var416 = 0.023612505f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var416 = -0.017634619f;
            } else {
                var416 = -0.023084441f;
            }
        }
    }
    float var417;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var417 = -0.028879208f;
            } else {
                var417 = 0.09716204f;
            }
        } else {
            var417 = -0.029035265f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var417 = 0.10416831f;
        } else {
            if (input[0] >= 62.493275f) {
                var417 = -0.02752672f;
            } else {
                var417 = -0.017059114f;
            }
        }
    }
    float var418;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var418 = 0.008333988f;
            } else {
                var418 = -0.028047666f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var418 = 0.008324592f;
            } else {
                var418 = -0.021575231f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var418 = -0.017728029f;
            } else {
                var418 = 0.12542059f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var418 = -0.023639007f;
            } else {
                var418 = -0.01155494f;
            }
        }
    }
    float var419;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var419 = -0.028983865f;
            } else {
                var419 = 0.09644425f;
            }
        } else {
            var419 = -0.028966313f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var419 = 0.10331243f;
        } else {
            if (input[0] >= 62.493275f) {
                var419 = -0.027300416f;
            } else {
                var419 = -0.01691543f;
            }
        }
    }
    float var420;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var420 = -0.018586848f;
            } else {
                var420 = -0.025238687f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var420 = -0.019251628f;
            } else {
                var420 = -0.02234363f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var420 = -0.022131292f;
            } else {
                var420 = 0.0010642665f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var420 = -0.024915827f;
            } else {
                var420 = -0.0038871604f;
            }
        }
    }
    float var421;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var421 = 0.008322128f;
            } else {
                var421 = -0.028025765f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var421 = 0.008203035f;
            } else {
                var421 = -0.021502001f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var421 = -0.017607262f;
            } else {
                var421 = 0.12332698f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var421 = -0.023749696f;
            } else {
                var421 = -0.012178508f;
            }
        }
    }
    float var422;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var422 = -0.028956288f;
            } else {
                var422 = 0.097561225f;
            }
        } else {
            var422 = -0.028897418f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var422 = 0.10354006f;
        } else {
            if (input[0] >= 62.493275f) {
                var422 = -0.027372316f;
            } else {
                var422 = -0.01671913f;
            }
        }
    }
    float var423;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var423 = -0.028826574f;
            } else {
                var423 = 0.09561678f;
            }
        } else {
            var423 = -0.028937405f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var423 = 0.10239102f;
        } else {
            if (input[0] >= 62.493275f) {
                var423 = -0.027248919f;
            } else {
                var423 = -0.01672768f;
            }
        }
    }
    float var424;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var424 = -0.018592974f;
            } else {
                var424 = -0.02523442f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var424 = -0.019233344f;
            } else {
                var424 = -0.022343442f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var424 = -0.022175683f;
            } else {
                var424 = 0.001257371f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var424 = -0.024887497f;
            } else {
                var424 = -0.004221884f;
            }
        }
    }
    float var425;
    if (input[1] >= 151.80267f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var425 = -0.028022552f;
            } else {
                var425 = -0.0056030415f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var425 = 0.008011208f;
            } else {
                var425 = -0.022831192f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[3] >= 77.0f) {
                var425 = 0.028602576f;
            } else {
                var425 = -0.0017669968f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var425 = -0.017060159f;
            } else {
                var425 = -0.022677572f;
            }
        }
    }
    float var426;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var426 = -0.018571261f;
            } else {
                var426 = -0.025210444f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var426 = -0.019218517f;
            } else {
                var426 = -0.02230839f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var426 = -0.022105116f;
            } else {
                var426 = 0.000985968f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var426 = -0.024899302f;
            } else {
                var426 = -0.0039275615f;
            }
        }
    }
    float var427;
    if (input[1] >= 151.80267f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var427 = -0.028161032f;
            } else {
                var427 = -0.005926952f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var427 = 0.007795416f;
            } else {
                var427 = -0.022782302f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[3] >= 77.0f) {
                var427 = 0.028887672f;
            } else {
                var427 = -0.0015012845f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var427 = -0.016820729f;
            } else {
                var427 = -0.022565784f;
            }
        }
    }
    float var428;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var428 = -0.028270537f;
            } else {
                var428 = -0.0061273677f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var428 = 0.007830757f;
            } else {
                var428 = -0.021581626f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var428 = -0.01761308f;
            } else {
                var428 = 0.12944014f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var428 = -0.02367836f;
            } else {
                var428 = -0.011891871f;
            }
        }
    }
    float var429;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var429 = -0.01849052f;
            } else {
                var429 = -0.025176976f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var429 = -0.01915557f;
            } else {
                var429 = -0.022263711f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var429 = -0.022097897f;
            } else {
                var429 = 0.0011574364f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var429 = -0.024855463f;
            } else {
                var429 = -0.0037930699f;
            }
        }
    }
    float var430;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var430 = -0.02876216f;
            } else {
                var430 = 0.094223134f;
            }
        } else {
            var430 = -0.02889487f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var430 = 0.1008353f;
        } else {
            if (input[0] >= 62.493275f) {
                var430 = -0.027367547f;
            } else {
                var430 = -0.017032893f;
            }
        }
    }
    float var431;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var431 = -0.028630732f;
            } else {
                var431 = 0.095221594f;
            }
        } else {
            var431 = -0.028780764f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var431 = 0.101706386f;
        } else {
            if (input[0] >= 62.493275f) {
                var431 = -0.02711461f;
            } else {
                var431 = -0.01667822f;
            }
        }
    }
    float var432;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var432 = -0.028823957f;
            } else {
                var432 = 0.10217708f;
            }
        } else {
            var432 = -0.028943244f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var432 = 0.11028264f;
        } else {
            if (input[0] >= 62.493275f) {
                var432 = -0.027430793f;
            } else {
                var432 = -0.017073771f;
            }
        }
    }
    float var433;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var433 = -0.028614733f;
            } else {
                var433 = 0.09592273f;
            }
        } else {
            var433 = -0.02891408f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var433 = 0.1024547f;
        } else {
            if (input[0] >= 62.493275f) {
                var433 = -0.027157316f;
            } else {
                var433 = -0.016700232f;
            }
        }
    }
    float var434;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var434 = -0.018341467f;
            } else {
                var434 = -0.025051614f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var434 = -0.018987333f;
            } else {
                var434 = -0.022130124f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var434 = -0.022005966f;
            } else {
                var434 = 0.0012903183f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var434 = -0.024742132f;
            } else {
                var434 = -0.0038899132f;
            }
        }
    }
    float var435;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var435 = 0.008030079f;
            } else {
                var435 = -0.02792867f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var435 = 0.008179154f;
            } else {
                var435 = -0.021173855f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var435 = -0.017233558f;
            } else {
                var435 = 0.12331076f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var435 = -0.023660593f;
            } else {
                var435 = -0.011187729f;
            }
        }
    }
    float var436;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var436 = -0.0015299933f;
        } else {
            if (input[1] >= 181.08876f) {
                var436 = -0.028165936f;
            } else {
                var436 = -0.022612428f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var436 = 0.0012671619f;
            } else {
                var436 = 0.024231467f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var436 = -0.017070105f;
            } else {
                var436 = -0.022643553f;
            }
        }
    }
    float var437;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var437 = -0.028569598f;
            } else {
                var437 = 0.09447495f;
            }
        } else {
            var437 = -0.028726608f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var437 = 0.09963327f;
        } else {
            if (input[0] >= 62.493275f) {
                var437 = -0.027211512f;
            } else {
                var437 = -0.016997518f;
            }
        }
    }
    float var438;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var438 = -0.028736612f;
            } else {
                var438 = 0.09309578f;
            }
        } else {
            var438 = -0.028814519f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var438 = 0.09916522f;
        } else {
            if (input[0] >= 62.493275f) {
                var438 = -0.027066976f;
            } else {
                var438 = -0.01666156f;
            }
        }
    }
    float var439;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var439 = 0.0083609065f;
            } else {
                var439 = -0.027876982f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var439 = 0.008383967f;
            } else {
                var439 = -0.021314176f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var439 = -0.01736164f;
            } else {
                var439 = 0.12115947f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var439 = -0.023355357f;
            } else {
                var439 = -0.011606939f;
            }
        }
    }
    float var440;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var440 = -0.029026384f;
            } else {
                var440 = 0.09571739f;
            }
        } else {
            var440 = -0.028855104f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var440 = 0.10114403f;
        } else {
            if (input[0] >= 62.493275f) {
                var440 = -0.027299369f;
            } else {
                var440 = -0.017067788f;
            }
        }
    }
    float var441;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var441 = 0.008463749f;
            } else {
                var441 = -0.027841901f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var441 = 0.008424978f;
            } else {
                var441 = -0.021210594f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var441 = -0.017284943f;
            } else {
                var441 = 0.12525074f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var441 = -0.023736363f;
            } else {
                var441 = -0.011227202f;
            }
        }
    }
    float var442;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var442 = -0.028736824f;
            } else {
                var442 = 0.091563754f;
            }
        } else {
            var442 = -0.028853461f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var442 = 0.09655331f;
        } else {
            if (input[0] >= 62.493275f) {
                var442 = -0.02731337f;
            } else {
                var442 = -0.01668526f;
            }
        }
    }
    float var443;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var443 = -0.028637126f;
            } else {
                var443 = 0.0978063f;
            }
        } else {
            var443 = -0.02904485f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var443 = 0.10407814f;
        } else {
            if (input[0] >= 62.493275f) {
                var443 = -0.027266098f;
            } else {
                var443 = -0.016397193f;
            }
        }
    }
    float var444;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var444 = -0.028746737f;
            } else {
                var444 = 0.0928355f;
            }
        } else {
            var444 = -0.028767323f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var444 = 0.09916708f;
        } else {
            if (input[0] >= 62.493275f) {
                var444 = -0.027148679f;
            } else {
                var444 = -0.016410355f;
            }
        }
    }
    float var445;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var445 = -0.0016561119f;
        } else {
            if (input[1] >= 181.08876f) {
                var445 = -0.028355295f;
            } else {
                var445 = -0.022636436f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var445 = 0.0013183033f;
            } else {
                var445 = 0.024206204f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var445 = -0.017220367f;
            } else {
                var445 = -0.022691447f;
            }
        }
    }
    float var446;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var446 = -0.018214824f;
            } else {
                var446 = -0.024990315f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var446 = -0.018880827f;
            } else {
                var446 = -0.022053322f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var446 = -0.021942481f;
            } else {
                var446 = 0.0015136497f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var446 = -0.02467675f;
            } else {
                var446 = -0.0038843472f;
            }
        }
    }
    float var447;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var447 = -0.0013434647f;
        } else {
            if (input[1] >= 181.08876f) {
                var447 = -0.027801244f;
            } else {
                var447 = -0.022098776f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var447 = 0.0014164493f;
            } else {
                var447 = 0.022706125f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var447 = -0.016502978f;
            } else {
                var447 = -0.022534022f;
            }
        }
    }
    float var448;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var448 = -0.027735699f;
            } else {
                var448 = -0.0051571666f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var448 = 0.008459216f;
            } else {
                var448 = -0.021202818f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var448 = -0.017236354f;
            } else {
                var448 = 0.12432305f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var448 = -0.02345281f;
            } else {
                var448 = -0.0112284785f;
            }
        }
    }
    float var449;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var449 = -0.028646488f;
            } else {
                var449 = 0.0937598f;
            }
        } else {
            var449 = -0.028736113f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var449 = 0.10000195f;
        } else {
            if (input[0] >= 62.493275f) {
                var449 = -0.027132055f;
            } else {
                var449 = -0.016485779f;
            }
        }
    }
    float var450;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var450 = -0.001329204f;
        } else {
            if (input[1] >= 181.08876f) {
                var450 = -0.027842907f;
            } else {
                var450 = -0.02217633f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var450 = 0.0013949592f;
            } else {
                var450 = 0.022864848f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var450 = -0.0165188f;
            } else {
                var450 = -0.022499135f;
            }
        }
    }
    float var451;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var451 = -0.001287301f;
        } else {
            if (input[1] >= 181.08876f) {
                var451 = -0.027759213f;
            } else {
                var451 = -0.022068955f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var451 = 0.0013670018f;
            } else {
                var451 = 0.02246144f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var451 = -0.01652292f;
            } else {
                var451 = -0.022294417f;
            }
        }
    }
    float var452;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var452 = -0.0014766391f;
        } else {
            if (input[1] >= 181.08876f) {
                var452 = -0.027906371f;
            } else {
                var452 = -0.022186294f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var452 = 0.0014035975f;
            } else {
                var452 = 0.022816358f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var452 = -0.016507259f;
            } else {
                var452 = -0.022259815f;
            }
        }
    }
    float var453;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var453 = -0.028754592f;
            } else {
                var453 = 0.09634974f;
            }
        } else {
            var453 = -0.028726568f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var453 = 0.10404845f;
        } else {
            if (input[0] >= 62.493275f) {
                var453 = -0.027009f;
            } else {
                var453 = -0.016192514f;
            }
        }
    }
    float var454;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var454 = -0.028598515f;
            } else {
                var454 = 0.10123475f;
            }
        } else {
            var454 = -0.028996637f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var454 = 0.10897905f;
        } else {
            if (input[0] >= 62.493275f) {
                var454 = -0.027077893f;
            } else {
                var454 = -0.016310718f;
            }
        }
    }
    float var455;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var455 = -0.027822947f;
            } else {
                var455 = -0.0053506573f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var455 = -0.02094427f;
            } else {
                var455 = 0.008229714f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var455 = -0.016803697f;
            } else {
                var455 = 0.12141826f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var455 = -0.023285903f;
            } else {
                var455 = -0.011440015f;
            }
        }
    }
    float var456;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var456 = -0.027732763f;
            } else {
                var456 = -0.0053593516f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var456 = 0.008135973f;
            } else {
                var456 = -0.021040773f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var456 = -0.016695976f;
            } else {
                var456 = 0.12145736f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var456 = -0.023153605f;
            } else {
                var456 = -0.011025484f;
            }
        }
    }
    float var457;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var457 = -0.028863851f;
            } else {
                var457 = 0.103025556f;
            }
        } else {
            var457 = -0.028919829f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var457 = 0.11084063f;
        } else {
            if (input[0] >= 62.493275f) {
                var457 = -0.027313275f;
            } else {
                var457 = -0.017072316f;
            }
        }
    }
    float var458;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var458 = 0.008197057f;
            } else {
                var458 = -0.027936105f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var458 = 0.007989931f;
            } else {
                var458 = -0.021364866f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var458 = -0.01749755f;
            } else {
                var458 = 0.12212743f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var458 = -0.023872672f;
            } else {
                var458 = -0.0123080155f;
            }
        }
    }
    float var459;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var459 = -0.018253967f;
            } else {
                var459 = -0.025001023f;
            }
        } else {
            if (input[3] >= 69.0f) {
                var459 = -0.019338084f;
            } else {
                var459 = -0.024495056f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var459 = -0.021978311f;
            } else {
                var459 = 0.001342693f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var459 = -0.024703035f;
            } else {
                var459 = -0.003775362f;
            }
        }
    }
    float var460;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var460 = -0.0015379973f;
        } else {
            if (input[1] >= 181.08876f) {
                var460 = -0.027953913f;
            } else {
                var460 = -0.022164932f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var460 = 0.001353795f;
            } else {
                var460 = 0.022354048f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var460 = -0.016647262f;
            } else {
                var460 = -0.022307776f;
            }
        }
    }
    float var461;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var461 = -0.01807869f;
            } else {
                var461 = -0.024879072f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var461 = -0.018725073f;
            } else {
                var461 = -0.021912811f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var461 = -0.021804683f;
            } else {
                var461 = 0.0016625377f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var461 = -0.02459239f;
            } else {
                var461 = -0.0036133304f;
            }
        }
    }
    float var462;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var462 = -0.018310703f;
            } else {
                var462 = -0.02505819f;
            }
        } else {
            if (input[3] >= 69.0f) {
                var462 = -0.01941081f;
            } else {
                var462 = -0.024538554f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var462 = -0.021975456f;
            } else {
                var462 = 0.0012356675f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var462 = -0.0247818f;
            } else {
                var462 = -0.0034774207f;
            }
        }
    }
    float var463;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var463 = -0.028733164f;
            } else {
                var463 = 0.09318861f;
            }
        } else {
            var463 = -0.02875712f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var463 = 0.098991714f;
        } else {
            if (input[0] >= 62.493275f) {
                var463 = -0.027227232f;
            } else {
                var463 = -0.016527155f;
            }
        }
    }
    float var464;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var464 = -0.028561592f;
            } else {
                var464 = 0.0962199f;
            }
        } else {
            var464 = -0.028756738f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var464 = 0.10263437f;
        } else {
            if (input[0] >= 62.493275f) {
                var464 = -0.027059505f;
            } else {
                var464 = -0.016656648f;
            }
        }
    }
    float var465;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var465 = -0.028582571f;
            } else {
                var465 = 0.09240689f;
            }
        } else {
            var465 = -0.028695628f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var465 = 0.09821545f;
        } else {
            if (input[0] >= 62.493275f) {
                var465 = -0.026997015f;
            } else {
                var465 = -0.016417509f;
            }
        }
    }
    float var466;
    if (input[1] >= 151.80267f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var466 = -0.027784241f;
            } else {
                var466 = -0.005297543f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var466 = 0.008039255f;
            } else {
                var466 = -0.022523837f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[3] >= 77.0f) {
                var466 = 0.02801912f;
            } else {
                var466 = -0.0014421616f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var466 = -0.01641406f;
            } else {
                var466 = -0.022167934f;
            }
        }
    }
    float var467;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var467 = -0.028494885f;
            } else {
                var467 = 0.09189869f;
            }
        } else {
            var467 = -0.028709373f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var467 = 0.097802214f;
        } else {
            if (input[0] >= 62.493275f) {
                var467 = -0.026863156f;
            } else {
                var467 = -0.015919391f;
            }
        }
    }
    float var468;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var468 = -0.028498057f;
            } else {
                var468 = 0.09533493f;
            }
        } else {
            var468 = -0.02866601f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var468 = 0.101966456f;
        } else {
            if (input[0] >= 62.493275f) {
                var468 = -0.027030075f;
            } else {
                var468 = -0.016235193f;
            }
        }
    }
    float var469;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var469 = 0.007946074f;
            } else {
                var469 = -0.027896238f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var469 = 0.007869023f;
            } else {
                var469 = -0.021103395f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var469 = -0.01699867f;
            } else {
                var469 = 0.12240132f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var469 = -0.023457339f;
            } else {
                var469 = -0.011489488f;
            }
        }
    }
    float var470;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var470 = 0.008132135f;
            } else {
                var470 = -0.02788476f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var470 = 0.008218241f;
            } else {
                var470 = -0.02119816f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var470 = -0.017330563f;
            } else {
                var470 = 0.12317709f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var470 = -0.023313815f;
            } else {
                var470 = -0.010991127f;
            }
        }
    }
    float var471;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var471 = -0.01792039f;
            } else {
                var471 = -0.024770357f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var471 = -0.018552221f;
            } else {
                var471 = -0.021784171f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var471 = -0.021717973f;
            } else {
                var471 = 0.0019645605f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var471 = -0.024478342f;
            } else {
                var471 = -0.0036328346f;
            }
        }
    }
    float var472;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var472 = -0.0014122588f;
        } else {
            if (input[1] >= 181.08876f) {
                var472 = -0.027863119f;
            } else {
                var472 = -0.022101369f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var472 = 0.0015817231f;
            } else {
                var472 = 0.022910109f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var472 = -0.016361412f;
            } else {
                var472 = -0.022161348f;
            }
        }
    }
    float var473;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var473 = 0.008363756f;
            } else {
                var473 = -0.027713543f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var473 = 0.008155449f;
            } else {
                var473 = -0.020924654f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var473 = -0.016690357f;
            } else {
                var473 = 0.11913244f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var473 = -0.023257138f;
            } else {
                var473 = -0.01133502f;
            }
        }
    }
    float var474;
    if (input[1] >= 151.80267f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var474 = -0.02767608f;
            } else {
                var474 = -0.005007365f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var474 = 0.008571437f;
            } else {
                var474 = -0.02246669f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[3] >= 77.0f) {
                var474 = 0.0290618f;
            } else {
                var474 = -0.0014347171f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var474 = -0.016627429f;
            } else {
                var474 = -0.022474658f;
            }
        }
    }
    float var475;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var475 = -0.028486615f;
            } else {
                var475 = 0.09303256f;
            }
        } else {
            var475 = -0.02866081f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var475 = 0.09926873f;
        } else {
            if (input[0] >= 62.493275f) {
                var475 = -0.026990816f;
            } else {
                var475 = -0.016052073f;
            }
        }
    }
    float var476;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var476 = -0.018136432f;
            } else {
                var476 = -0.024935704f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var476 = -0.018794369f;
            } else {
                var476 = -0.021981476f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var476 = -0.021908658f;
            } else {
                var476 = 0.0016770546f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var476 = -0.024627222f;
            } else {
                var476 = -0.0037565713f;
            }
        }
    }
    float var477;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var477 = -0.028563872f;
            } else {
                var477 = 0.09131104f;
            }
        } else {
            var477 = -0.028678263f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var477 = 0.097093545f;
        } else {
            if (input[0] >= 62.493275f) {
                var477 = -0.027234003f;
            } else {
                var477 = -0.016506687f;
            }
        }
    }
    float var478;
    if (input[1] >= 151.80267f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var478 = -0.027721077f;
            } else {
                var478 = -0.0051538716f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var478 = 0.00813767f;
            } else {
                var478 = -0.022479165f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[3] >= 77.0f) {
                var478 = 0.028301412f;
            } else {
                var478 = -0.0014435534f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var478 = -0.016467473f;
            } else {
                var478 = -0.022328978f;
            }
        }
    }
    float var479;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var479 = 0.008891319f;
            } else {
                var479 = -0.02771852f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var479 = 0.008666591f;
            } else {
                var479 = -0.021004345f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var479 = -0.01695601f;
            } else {
                var479 = 0.11791044f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var479 = -0.023487514f;
            } else {
                var479 = -0.011193984f;
            }
        }
    }
    float var480;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var480 = -0.028408343f;
            } else {
                var480 = 0.092706606f;
            }
        } else {
            var480 = -0.028680667f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var480 = 0.0988286f;
        } else {
            if (input[0] >= 62.493275f) {
                var480 = -0.026926965f;
            } else {
                var480 = -0.0161205f;
            }
        }
    }
    float var481;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var481 = -0.018192146f;
            } else {
                var481 = -0.02492824f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var481 = -0.018800812f;
            } else {
                var481 = -0.021978717f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var481 = -0.021905227f;
            } else {
                var481 = 0.0014943236f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var481 = -0.024616865f;
            } else {
                var481 = -0.0038093235f;
            }
        }
    }
    float var482;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var482 = -0.028471613f;
            } else {
                var482 = 0.09176458f;
            }
        } else {
            var482 = -0.028784005f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var482 = 0.09787343f;
        } else {
            if (input[0] >= 62.493275f) {
                var482 = -0.02693138f;
            } else {
                var482 = -0.015920095f;
            }
        }
    }
    float var483;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var483 = -0.028499706f;
            } else {
                var483 = 0.09871074f;
            }
        } else {
            var483 = -0.028872212f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var483 = 0.1053222f;
        } else {
            if (input[0] >= 62.493275f) {
                var483 = -0.027264899f;
            } else {
                var483 = -0.016268251f;
            }
        }
    }
    float var484;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var484 = -0.028532377f;
            } else {
                var484 = 0.0907047f;
            }
        } else {
            var484 = -0.02882996f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var484 = 0.096472465f;
        } else {
            if (input[0] >= 62.493275f) {
                var484 = -0.0268746f;
            } else {
                var484 = -0.01602888f;
            }
        }
    }
    float var485;
    if (input[1] >= 104.36932f) {
        if (input[1] >= 181.08876f) {
            if (input[2] >= 32.35f) {
                var485 = 0.008223408f;
            } else {
                var485 = -0.027711272f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var485 = 0.008283456f;
            } else {
                var485 = -0.020756317f;
            }
        }
    } else {
        if (input[1] >= 99.93675f) {
            if (input[1] >= 100.996796f) {
                var485 = -0.016556753f;
            } else {
                var485 = 0.1216776f;
            }
        } else {
            if (input[1] >= 50.97269f) {
                var485 = -0.023128686f;
            } else {
                var485 = -0.010845706f;
            }
        }
    }
    float var486;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var486 = -0.0013652666f;
        } else {
            if (input[1] >= 181.08876f) {
                var486 = -0.027829427f;
            } else {
                var486 = -0.022066602f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var486 = 0.0014584566f;
            } else {
                var486 = 0.022502739f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var486 = -0.016308587f;
            } else {
                var486 = -0.022139369f;
            }
        }
    }
    float var487;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var487 = -0.028471947f;
            } else {
                var487 = 0.090086155f;
            }
        } else {
            var487 = -0.028634766f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var487 = 0.09544664f;
        } else {
            if (input[0] >= 62.493275f) {
                var487 = -0.027121259f;
            } else {
                var487 = -0.016427506f;
            }
        }
    }
    float var488;
    if (input[1] >= 151.80267f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var488 = -0.027705459f;
            } else {
                var488 = -0.0052837664f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var488 = 0.008095308f;
            } else {
                var488 = -0.022307286f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[3] >= 77.0f) {
                var488 = 0.028215531f;
            } else {
                var488 = -0.0013078855f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var488 = -0.016215673f;
            } else {
                var488 = -0.022098554f;
            }
        }
    }
    float var489;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var489 = -0.028505564f;
            } else {
                var489 = 0.089566305f;
            }
        } else {
            var489 = -0.028680874f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var489 = 0.09431971f;
        } else {
            if (input[0] >= 62.493275f) {
                var489 = -0.027225032f;
            } else {
                var489 = -0.016314106f;
            }
        }
    }
    float var490;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var490 = -0.028521786f;
            } else {
                var490 = 0.09918974f;
            }
        } else {
            var490 = -0.028760089f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var490 = 0.107083514f;
        } else {
            if (input[0] >= 62.493275f) {
                var490 = -0.026954815f;
            } else {
                var490 = -0.016415553f;
            }
        }
    }
    float var491;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var491 = -0.028450966f;
            } else {
                var491 = 0.09073225f;
            }
        } else {
            var491 = -0.028644739f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var491 = 0.09653267f;
        } else {
            if (input[0] >= 62.493275f) {
                var491 = -0.026968032f;
            } else {
                var491 = -0.016168604f;
            }
        }
    }
    float var492;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var492 = -0.028536482f;
            } else {
                var492 = 0.09474068f;
            }
        } else {
            var492 = -0.028691828f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var492 = 0.10120515f;
        } else {
            if (input[0] >= 62.493275f) {
                var492 = -0.027137225f;
            } else {
                var492 = -0.016350424f;
            }
        }
    }
    float var493;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var493 = -0.028429592f;
            } else {
                var493 = 0.090002604f;
            }
        } else {
            var493 = -0.028587257f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var493 = 0.09482361f;
        } else {
            if (input[0] >= 62.493275f) {
                var493 = -0.027005656f;
            } else {
                var493 = -0.01614267f;
            }
        }
    }
    float var494;
    if (input[3] >= 57.0f) {
        if (input[2] >= 29.849998f) {
            if (input[2] >= 31.45f) {
                var494 = -0.01778545f;
            } else {
                var494 = -0.024656262f;
            }
        } else {
            if (input[3] >= 74.0f) {
                var494 = -0.018386416f;
            } else {
                var494 = -0.021641217f;
            }
        }
    } else {
        if (input[3] >= 54.0f) {
            if (input[2] >= 32.85f) {
                var494 = -0.02163398f;
            } else {
                var494 = 0.002083876f;
            }
        } else {
            if (input[3] >= 50.0f) {
                var494 = -0.024396984f;
            } else {
                var494 = -0.0035382973f;
            }
        }
    }
    float var495;
    if (input[1] >= 151.80267f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var495 = -0.027661143f;
            } else {
                var495 = -0.0050612823f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var495 = 0.008142012f;
            } else {
                var495 = -0.022237955f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[3] >= 77.0f) {
                var495 = 0.028128115f;
            } else {
                var495 = -0.0011873393f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var495 = -0.016075151f;
            } else {
                var495 = -0.022000114f;
            }
        }
    }
    float var496;
    if (input[1] >= 151.80267f) {
        if (input[2] >= 32.75f) {
            var496 = -0.0013522537f;
        } else {
            if (input[1] >= 181.08876f) {
                var496 = -0.027811041f;
            } else {
                var496 = -0.021893147f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[1] >= 151.4798f) {
                var496 = 0.0014184746f;
            } else {
                var496 = 0.02205607f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var496 = -0.016458986f;
            } else {
                var496 = -0.022254614f;
            }
        }
    }
    float var497;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var497 = -0.028442625f;
            } else {
                var497 = 0.09164975f;
            }
        } else {
            var497 = -0.028835678f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var497 = 0.09677206f;
        } else {
            if (input[0] >= 62.493275f) {
                var497 = -0.027050048f;
            } else {
                var497 = -0.016300168f;
            }
        }
    }
    float var498;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var498 = -0.028593613f;
            } else {
                var498 = 0.090741836f;
            }
        } else {
            var498 = -0.028596846f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var498 = 0.096429996f;
        } else {
            if (input[0] >= 62.493275f) {
                var498 = -0.027070403f;
            } else {
                var498 = -0.01595149f;
            }
        }
    }
    float var499;
    if (input[1] >= 151.80267f) {
        if (input[1] >= 181.08876f) {
            if (input[3] >= 57.0f) {
                var499 = -0.027574647f;
            } else {
                var499 = -0.004866845f;
            }
        } else {
            if (input[1] >= 180.61627f) {
                var499 = 0.008340168f;
            } else {
                var499 = -0.022287069f;
            }
        }
    } else {
        if (input[1] >= 151.21713f) {
            if (input[3] >= 77.0f) {
                var499 = 0.028069256f;
            } else {
                var499 = -0.001308063f;
            }
        } else {
            if (input[1] >= 99.18237f) {
                var499 = -0.016116513f;
            } else {
                var499 = -0.022127248f;
            }
        }
    }
    float var500;
    if (input[0] >= 91.03729f) {
        if (input[0] >= 119.83801f) {
            if (input[0] >= 120.96444f) {
                var500 = -0.02848951f;
            } else {
                var500 = 0.093179636f;
            }
        } else {
            var500 = -0.02862301f;
        }
    } else {
        if (input[0] >= 90.0077f) {
            var500 = 0.09964897f;
        } else {
            if (input[0] >= 62.493275f) {
                var500 = -0.026972154f;
            } else {
                var500 = -0.016031275f;
            }
        }
    }
    float var501;
    if (input[0] >= 120.96444f) {
        var501 = 0.14870378f;
    } else {
        var501 = -0.029951343f;
    }
    float var502;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            if (input[3] >= 57.0f) {
                var502 = 0.11606383f;
            } else {
                var502 = 0.05254389f;
            }
        } else {
            if (input[3] >= 79.0f) {
                var502 = 0.040633384f;
            } else {
                var502 = 0.07219222f;
            }
        }
    } else {
        if (input[1] >= 157.67601f) {
            if (input[3] >= 86.0f) {
                var502 = -0.011877578f;
            } else {
                var502 = 0.015943086f;
            }
        } else {
            if (input[1] >= 142.72307f) {
                var502 = -0.014675309f;
            } else {
                var502 = -0.029170204f;
            }
        }
    }
    float var503;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var503 = 0.11617508f;
        } else {
            if (input[1] >= 180.11981f) {
                var503 = 0.07316078f;
            } else {
                var503 = 0.03933677f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var503 = 0.016579336f;
            } else {
                var503 = -0.0026488455f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var503 = -0.016998494f;
            } else {
                var503 = -0.029530853f;
            }
        }
    }
    float var504;
    if (input[0] >= 120.96444f) {
        var504 = 0.13264732f;
    } else {
        var504 = -0.029789397f;
    }
    float var505;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var505 = 0.09510317f;
        } else {
            if (input[1] >= 180.11981f) {
                var505 = 0.0625912f;
            } else {
                var505 = 0.034701582f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var505 = -0.008508266f;
            } else {
                var505 = 0.0135201765f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var505 = -0.016826082f;
            } else {
                var505 = -0.029241448f;
            }
        }
    }
    float var506;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var506 = -0.004765416f;
            } else {
                var506 = 0.025975717f;
            }
        } else {
            if (input[2] >= 28.849998f) {
                var506 = -0.01352876f;
            } else {
                var506 = -0.004511335f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var506 = -0.0005708165f;
            } else {
                var506 = 0.011613333f;
            }
        } else {
            if (input[2] >= 24.349998f) {
                var506 = -0.0036577506f;
            } else {
                var506 = 0.008113631f;
            }
        }
    }
    float var507;
    if (input[0] >= 120.96444f) {
        var507 = 0.10892719f;
    } else {
        var507 = -0.029505877f;
    }
    float var508;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var508 = -0.0046996535f;
            } else {
                var508 = 0.024979146f;
            }
        } else {
            if (input[2] >= 28.849998f) {
                var508 = -0.013341337f;
            } else {
                var508 = -0.0044351867f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var508 = -0.00060232833f;
            } else {
                var508 = 0.011139496f;
            }
        } else {
            if (input[2] >= 24.349998f) {
                var508 = -0.003615882f;
            } else {
                var508 = 0.007848377f;
            }
        }
    }
    float var509;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var509 = 0.0859124f;
        } else {
            if (input[1] >= 180.11981f) {
                var509 = 0.058074255f;
            } else {
                var509 = 0.03294342f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var509 = -0.008132788f;
            } else {
                var509 = 0.013184114f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var509 = -0.016327633f;
            } else {
                var509 = -0.028954705f;
            }
        }
    }
    float var510;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var510 = 0.08336214f;
        } else {
            if (input[3] >= 79.0f) {
                var510 = 0.033392455f;
            } else {
                var510 = 0.0573004f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var510 = 0.014345549f;
            } else {
                var510 = -0.00289337f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var510 = -0.016152631f;
            } else {
                var510 = -0.028866617f;
            }
        }
    }
    float var511;
    if (input[0] >= 120.96444f) {
        var511 = 0.09848158f;
    } else {
        var511 = -0.029395793f;
    }
    float var512;
    if (input[0] >= 120.96444f) {
        var512 = 0.0968053f;
    } else {
        var512 = -0.02933832f;
    }
    float var513;
    if (input[0] >= 120.96444f) {
        var513 = 0.09951327f;
    } else {
        var513 = -0.029354377f;
    }
    float var514;
    if (input[0] >= 120.96444f) {
        var514 = 0.09640653f;
    } else {
        var514 = -0.02929391f;
    }
    float var515;
    if (input[0] >= 120.96444f) {
        var515 = 0.09385366f;
    } else {
        var515 = -0.029239446f;
    }
    float var516;
    if (input[0] >= 120.96444f) {
        var516 = 0.09288316f;
    } else {
        var516 = -0.029243514f;
    }
    float var517;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var517 = -0.0042297463f;
            } else {
                var517 = 0.02367521f;
            }
        } else {
            if (input[2] >= 28.849998f) {
                var517 = -0.012874628f;
            } else {
                var517 = -0.004093931f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var517 = -0.00037255933f;
            } else {
                var517 = 0.011004192f;
            }
        } else {
            if (input[2] >= 24.349998f) {
                var517 = -0.0032483104f;
            } else {
                var517 = 0.0077034547f;
            }
        }
    }
    float var518;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var518 = 0.0774791f;
        } else {
            if (input[1] >= 180.11981f) {
                var518 = 0.05368126f;
            } else {
                var518 = 0.03097257f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var518 = -0.00803445f;
            } else {
                var518 = 0.012551186f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var518 = -0.01615568f;
            } else {
                var518 = -0.028856916f;
            }
        }
    }
    float var519;
    if (input[0] >= 120.96444f) {
        var519 = 0.097646564f;
    } else {
        var519 = -0.02928485f;
    }
    float var520;
    if (input[0] >= 120.96444f) {
        var520 = 0.11191064f;
    } else {
        var520 = -0.02952121f;
    }
    float var521;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var521 = 0.076190315f;
        } else {
            if (input[3] >= 79.0f) {
                var521 = 0.03158553f;
            } else {
                var521 = 0.05346675f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var521 = 0.013777427f;
            } else {
                var521 = -0.0029008684f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var521 = -0.01595997f;
            } else {
                var521 = -0.0287884f;
            }
        }
    }
    float var522;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var522 = -0.0043480843f;
            } else {
                var522 = 0.024496378f;
            }
        } else {
            if (input[2] >= 28.849998f) {
                var522 = -0.013031617f;
            } else {
                var522 = -0.004137563f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var522 = -0.00036416473f;
            } else {
                var522 = 0.011240177f;
            }
        } else {
            if (input[2] >= 24.349998f) {
                var522 = -0.0033198285f;
            } else {
                var522 = 0.007908329f;
            }
        }
    }
    float var523;
    if (input[0] >= 120.96444f) {
        var523 = 0.089708626f;
    } else {
        var523 = -0.029164916f;
    }
    float var524;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var524 = 0.073965155f;
        } else {
            if (input[1] >= 180.11981f) {
                var524 = 0.051452894f;
            } else {
                var524 = 0.029762471f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var524 = -0.007998698f;
            } else {
                var524 = 0.012218398f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var524 = -0.015894523f;
            } else {
                var524 = -0.028724274f;
            }
        }
    }
    float var525;
    if (input[0] >= 120.96444f) {
        if (input[1] >= 180.00467f) {
            var525 = 0.08543398f;
        } else {
            var525 = 0.10169053f;
        }
    } else {
        var525 = -0.029216914f;
    }
    float var526;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var526 = 0.083086096f;
        } else {
            if (input[1] >= 180.11981f) {
                var526 = 0.056742914f;
            } else {
                var526 = 0.032236762f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var526 = 0.014324844f;
            } else {
                var526 = -0.0027749303f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var526 = -0.016067063f;
            } else {
                var526 = -0.028819207f;
            }
        }
    }
    float var527;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var527 = 0.08258888f;
        } else {
            if (input[3] >= 79.0f) {
                var527 = 0.033244353f;
            } else {
                var527 = 0.056845814f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var527 = 0.01405213f;
            } else {
                var527 = -0.0028570595f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var527 = -0.016204534f;
            } else {
                var527 = -0.028892158f;
            }
        }
    }
    float var528;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var528 = 0.081898406f;
        } else {
            if (input[1] >= 180.11981f) {
                var528 = 0.05629566f;
            } else {
                var528 = 0.032135468f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var528 = 0.014464109f;
            } else {
                var528 = -0.0027568701f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var528 = -0.015996544f;
            } else {
                var528 = -0.02881713f;
            }
        }
    }
    float var529;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var529 = -0.0043228692f;
            } else {
                var529 = 0.02472174f;
            }
        } else {
            if (input[2] >= 28.849998f) {
                var529 = -0.012918745f;
            } else {
                var529 = -0.0040455717f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var529 = -0.0001802199f;
            } else {
                var529 = 0.011459542f;
            }
        } else {
            if (input[2] >= 24.349998f) {
                var529 = -0.0031495623f;
            } else {
                var529 = 0.008087388f;
            }
        }
    }
    float var530;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var530 = 0.07427177f;
        } else {
            if (input[1] >= 180.11981f) {
                var530 = 0.051940538f;
            } else {
                var530 = 0.03005656f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var530 = -0.008008847f;
            } else {
                var530 = 0.012428085f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var530 = -0.01590996f;
            } else {
                var530 = -0.028757963f;
            }
        }
    }
    float var531;
    if (input[0] >= 120.96444f) {
        var531 = 0.086204164f;
    } else {
        var531 = -0.029123766f;
    }
    float var532;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var532 = 0.073566265f;
            } else {
                var532 = 0.056807376f;
            }
        } else {
            if (input[2] >= 30.150002f) {
                var532 = 0.049629357f;
            } else {
                var532 = 0.021484507f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var532 = -0.011513619f;
            } else {
                var532 = 0.010400725f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var532 = -0.015661549f;
            } else {
                var532 = -0.028642654f;
            }
        }
    }
    float var533;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var533 = -0.004414803f;
            } else {
                var533 = 0.022568362f;
            }
        } else {
            if (input[2] >= 28.849998f) {
                var533 = -0.0128272325f;
            } else {
                var533 = -0.0042396314f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var533 = -0.000604661f;
            } else {
                var533 = 0.010355215f;
            }
        } else {
            if (input[2] >= 24.349998f) {
                var533 = -0.0034386893f;
            } else {
                var533 = 0.0071837865f;
            }
        }
    }
    float var534;
    if (input[0] >= 120.96444f) {
        var534 = 0.09282746f;
    } else {
        var534 = -0.029262114f;
    }
    float var535;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var535 = 0.0754614f;
        } else {
            if (input[1] >= 180.11981f) {
                var535 = 0.05277514f;
            } else {
                var535 = 0.030531516f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var535 = -0.007835778f;
            } else {
                var535 = 0.012631165f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var535 = -0.015934685f;
            } else {
                var535 = -0.028819216f;
            }
        }
    }
    float var536;
    if (input[0] >= 120.96444f) {
        var536 = 0.08731261f;
    } else {
        var536 = -0.02910248f;
    }
    float var537;
    if (input[0] >= 120.96444f) {
        var537 = 0.08627939f;
    } else {
        var537 = -0.02917811f;
    }
    float var538;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var538 = 0.074242905f;
        } else {
            if (input[3] >= 79.0f) {
                var538 = 0.030884117f;
            } else {
                var538 = 0.05232802f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var538 = 0.013689778f;
            } else {
                var538 = -0.002806867f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var538 = -0.015687687f;
            } else {
                var538 = -0.028663507f;
            }
        }
    }
    float var539;
    if (input[0] >= 120.96444f) {
        var539 = 0.08652822f;
    } else {
        var539 = -0.029184554f;
    }
    float var540;
    if (input[0] >= 120.96444f) {
        var540 = 0.10017017f;
    } else {
        var540 = -0.029311156f;
    }
    float var541;
    if (input[0] >= 120.96444f) {
        var541 = 0.08432465f;
    } else {
        var541 = -0.029130105f;
    }
    float var542;
    if (input[0] >= 120.96444f) {
        var542 = 0.08543169f;
    } else {
        var542 = -0.0291583f;
    }
    float var543;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var543 = 0.07208842f;
        } else {
            if (input[3] >= 79.0f) {
                var543 = 0.02950275f;
            } else {
                var543 = 0.05055619f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var543 = 0.0126242405f;
            } else {
                var543 = -0.0035391345f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var543 = -0.016138028f;
            } else {
                var543 = -0.028668333f;
            }
        }
    }
    float var544;
    if (input[0] >= 120.96444f) {
        var544 = 0.089290164f;
    } else {
        var544 = -0.029157713f;
    }
    float var545;
    if (input[0] >= 120.96444f) {
        var545 = 0.09400425f;
    } else {
        var545 = -0.029162234f;
    }
    float var546;
    if (input[0] >= 120.96444f) {
        var546 = 0.08509856f;
    } else {
        var546 = -0.029096736f;
    }
    float var547;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var547 = 0.07083009f;
            } else {
                var547 = 0.054977596f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var547 = 0.033735495f;
            } else {
                var547 = 0.019628186f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var547 = 0.010811169f;
            } else {
                var547 = -0.0027096153f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var547 = -0.015538839f;
            } else {
                var547 = -0.028577173f;
            }
        }
    }
    float var548;
    if (input[0] >= 120.96444f) {
        var548 = 0.0832801f;
    } else {
        var548 = -0.029105887f;
    }
    float var549;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var549 = 0.07321112f;
            } else {
                var549 = 0.05659294f;
            }
        } else {
            if (input[2] >= 30.150002f) {
                var549 = 0.049661037f;
            } else {
                var549 = 0.021435639f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var549 = -0.011460454f;
            } else {
                var549 = 0.010467536f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var549 = -0.015549651f;
            } else {
                var549 = -0.028587563f;
            }
        }
    }
    float var550;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var550 = 0.07185768f;
            } else {
                var550 = 0.055355616f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var550 = 0.033722606f;
            } else {
                var550 = 0.019511594f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var550 = 0.010654006f;
            } else {
                var550 = -0.0029714303f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var550 = -0.0156463f;
            } else {
                var550 = -0.02859666f;
            }
        }
    }
    float var551;
    if (input[0] >= 120.96444f) {
        var551 = 0.081470534f;
    } else {
        var551 = -0.029012283f;
    }
    float var552;
    if (input[0] >= 120.96444f) {
        var552 = 0.08456745f;
    } else {
        var552 = -0.029050706f;
    }
    float var553;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var553 = 0.07695386f;
        } else {
            if (input[1] >= 180.11981f) {
                var553 = 0.053128f;
            } else {
                var553 = 0.031673674f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var553 = -0.007456455f;
            } else {
                var553 = 0.012821728f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var553 = -0.015726237f;
            } else {
                var553 = -0.028648455f;
            }
        }
    }
    float var554;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var554 = 0.07070478f;
            } else {
                var554 = 0.054384213f;
            }
        } else {
            if (input[2] >= 30.150002f) {
                var554 = 0.0477198f;
            } else {
                var554 = 0.020050751f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var554 = -0.011807355f;
            } else {
                var554 = 0.009551791f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var554 = -0.01575046f;
            } else {
                var554 = -0.028505636f;
            }
        }
    }
    float var555;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var555 = 0.07119113f;
            } else {
                var555 = 0.055219617f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var555 = 0.033856854f;
            } else {
                var555 = 0.019735245f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var555 = 0.010849789f;
            } else {
                var555 = -0.0027604424f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var555 = -0.01556174f;
            } else {
                var555 = -0.028541371f;
            }
        }
    }
    float var556;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var556 = 0.069135524f;
            } else {
                var556 = 0.053041603f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var556 = 0.031977102f;
            } else {
                var556 = 0.018189613f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var556 = 0.009679627f;
            } else {
                var556 = -0.0036424485f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var556 = -0.01591717f;
            } else {
                var556 = -0.02850357f;
            }
        }
    }
    float var557;
    if (input[0] >= 120.96444f) {
        var557 = 0.08826616f;
    } else {
        var557 = -0.029131247f;
    }
    float var558;
    if (input[0] >= 120.96444f) {
        var558 = 0.08579038f;
    } else {
        var558 = -0.029077766f;
    }
    float var559;
    if (input[0] >= 120.96444f) {
        var559 = 0.08253552f;
    } else {
        var559 = -0.029044816f;
    }
    float var560;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var560 = -0.003856465f;
            } else {
                var560 = 0.02313896f;
            }
        } else {
            if (input[2] >= 28.150002f) {
                var560 = -0.008373234f;
            } else {
                var560 = -0.002944108f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var560 = -0.000078322504f;
            } else {
                var560 = 0.011085714f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var560 = -0.006871056f;
            } else {
                var560 = -0.00049875845f;
            }
        }
    }
    float var561;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var561 = -0.0040324847f;
            } else {
                var561 = 0.023050465f;
            }
        } else {
            if (input[2] >= 28.150002f) {
                var561 = -0.008498613f;
            } else {
                var561 = -0.0030909085f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var561 = -0.00021158345f;
            } else {
                var561 = 0.010970934f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var561 = -0.007004847f;
            } else {
                var561 = -0.00064688554f;
            }
        }
    }
    float var562;
    if (input[1] >= 177.44948f) {
        if (input[1] >= 188.8796f) {
            var562 = 0.07532541f;
        } else {
            if (input[1] >= 180.11981f) {
                var562 = 0.052730586f;
            } else {
                var562 = 0.030493317f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var562 = -0.007790636f;
            } else {
                var562 = 0.012852064f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var562 = -0.015661025f;
            } else {
                var562 = -0.028603634f;
            }
        }
    }
    float var563;
    if (input[0] >= 120.96444f) {
        var563 = 0.08580576f;
    } else {
        var563 = -0.029082898f;
    }
    float var564;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var564 = 0.06892875f;
            } else {
                var564 = 0.053643674f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var564 = 0.03307581f;
            } else {
                var564 = 0.019445358f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var564 = 0.010679375f;
            } else {
                var564 = -0.0027290087f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var564 = -0.0154686f;
            } else {
                var564 = -0.02854006f;
            }
        }
    }
    float var565;
    if (input[0] >= 120.96444f) {
        var565 = 0.08407305f;
    } else {
        var565 = -0.029054234f;
    }
    float var566;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var566 = 0.071637385f;
            } else {
                var566 = 0.055061728f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var566 = 0.033407707f;
            } else {
                var566 = 0.019231586f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var566 = 0.010413476f;
            } else {
                var566 = -0.0030926082f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var566 = -0.015743077f;
            } else {
                var566 = -0.028562665f;
            }
        }
    }
    float var567;
    if (input[0] >= 120.96444f) {
        var567 = 0.08346334f;
    } else {
        var567 = -0.029033694f;
    }
    float var568;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var568 = -0.003929143f;
            } else {
                var568 = 0.021536948f;
            }
        } else {
            if (input[2] >= 28.150002f) {
                var568 = -0.008415097f;
            } else {
                var568 = -0.0031198016f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var568 = -0.00038025813f;
            } else {
                var568 = 0.010260801f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var568 = -0.0069264635f;
            } else {
                var568 = -0.00078825915f;
            }
        }
    }
    float var569;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var569 = 0.07078106f;
            } else {
                var569 = 0.055062056f;
            }
        } else {
            if (input[2] >= 30.150002f) {
                var569 = 0.048513588f;
            } else {
                var569 = 0.021098154f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var569 = -0.011374805f;
            } else {
                var569 = 0.0103992f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var569 = -0.015424001f;
            } else {
                var569 = -0.028512007f;
            }
        }
    }
    float var570;
    if (input[0] >= 120.96444f) {
        var570 = 0.08428973f;
    } else {
        var570 = -0.029100953f;
    }
    float var571;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var571 = 0.066926666f;
            } else {
                var571 = 0.05215117f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var571 = 0.032244947f;
            } else {
                var571 = 0.018981038f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var571 = 0.010412542f;
            } else {
                var571 = -0.0028024528f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var571 = -0.015385843f;
            } else {
                var571 = -0.028424714f;
            }
        }
    }
    float var572;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var572 = -0.00392617f;
            } else {
                var572 = 0.021769715f;
            }
        } else {
            if (input[2] >= 28.150002f) {
                var572 = -0.008252434f;
            } else {
                var572 = -0.0029341269f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var572 = -0.0001468759f;
            } else {
                var572 = 0.010522025f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var572 = -0.0068076053f;
            } else {
                var572 = -0.0005571425f;
            }
        }
    }
    float var573;
    if (input[0] >= 120.96444f) {
        var573 = 0.08042842f;
    } else {
        var573 = -0.029011836f;
    }
    float var574;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var574 = 0.06733948f;
            } else {
                var574 = 0.052464437f;
            }
        } else {
            if (input[2] >= 30.150002f) {
                var574 = 0.046514623f;
            } else {
                var574 = 0.02011614f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var574 = -0.011466115f;
            } else {
                var574 = 0.009814653f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var574 = -0.01545004f;
            } else {
                var574 = -0.028502582f;
            }
        }
    }
    float var575;
    if (input[0] >= 120.96444f) {
        var575 = 0.08038505f;
    } else {
        var575 = -0.02897791f;
    }
    float var576;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var576 = 0.0674732f;
            } else {
                var576 = 0.05230201f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var576 = 0.03219653f;
            } else {
                var576 = 0.018903583f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[3] >= 86.0f) {
                var576 = -0.011528477f;
            } else {
                var576 = 0.008152815f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var576 = -0.015466041f;
            } else {
                var576 = -0.028469939f;
            }
        }
    }
    float var577;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var577 = 0.06973204f;
            } else {
                var577 = 0.05442651f;
            }
        } else {
            if (input[2] >= 30.150002f) {
                var577 = 0.047588464f;
            } else {
                var577 = 0.02091893f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var577 = -0.011438092f;
            } else {
                var577 = 0.010228117f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var577 = -0.015546701f;
            } else {
                var577 = -0.028562812f;
            }
        }
    }
    float var578;
    if (input[0] >= 120.96444f) {
        if (input[1] >= 180.00467f) {
            var578 = 0.07470784f;
        } else {
            var578 = 0.09205266f;
        }
    } else {
        var578 = -0.028956449f;
    }
    float var579;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var579 = 0.066505216f;
            } else {
                var579 = 0.051815886f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var579 = 0.032154616f;
            } else {
                var579 = 0.019025978f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[3] >= 86.0f) {
                var579 = -0.011307237f;
            } else {
                var579 = 0.008329652f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var579 = -0.015316938f;
            } else {
                var579 = -0.02843291f;
            }
        }
    }
    float var580;
    if (input[0] >= 120.96444f) {
        var580 = 0.080858916f;
    } else {
        var580 = -0.029011095f;
    }
    float var581;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var581 = 0.07321775f;
            } else {
                var581 = 0.05663511f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var581 = 0.03471447f;
            } else {
                var581 = 0.02026308f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var581 = 0.011028514f;
            } else {
                var581 = -0.0027696618f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var581 = -0.015727695f;
            } else {
                var581 = -0.028670797f;
            }
        }
    }
    float var582;
    if (input[0] >= 120.96444f) {
        var582 = 0.080467254f;
    } else {
        var582 = -0.029033024f;
    }
    float var583;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var583 = 0.066284634f;
            } else {
                var583 = 0.051554736f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var583 = 0.031745497f;
            } else {
                var583 = 0.018481502f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var583 = 0.009975853f;
            } else {
                var583 = -0.0031332863f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var583 = -0.015640272f;
            } else {
                var583 = -0.028465157f;
            }
        }
    }
    float var584;
    if (input[0] >= 120.96444f) {
        if (input[1] >= 180.00467f) {
            var584 = 0.076913424f;
        } else {
            var584 = 0.09539574f;
        }
    } else {
        var584 = -0.029053902f;
    }
    float var585;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var585 = -0.0038700998f;
            } else {
                var585 = 0.021262033f;
            }
        } else {
            if (input[2] >= 28.150002f) {
                var585 = -0.008390595f;
            } else {
                var585 = -0.0030854573f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var585 = -0.0004023156f;
            } else {
                var585 = 0.0101162605f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var585 = -0.006930645f;
            } else {
                var585 = -0.0007566756f;
            }
        }
    }
    float var586;
    if (input[0] >= 120.96444f) {
        if (input[1] >= 180.00467f) {
            var586 = 0.077766f;
        } else {
            var586 = 0.09640686f;
        }
    } else {
        var586 = -0.028989986f;
    }
    float var587;
    if (input[0] >= 120.96444f) {
        if (input[1] >= 180.00467f) {
            var587 = 0.07409451f;
        } else {
            var587 = 0.09118501f;
        }
    } else {
        var587 = -0.02898908f;
    }
    float var588;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var588 = 0.07072342f;
            } else {
                var588 = 0.05486039f;
            }
        } else {
            if (input[1] >= 177.44948f) {
                var588 = 0.033581957f;
            } else {
                var588 = 0.019238137f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[1] >= 160.96259f) {
                var588 = 0.0106051415f;
            } else {
                var588 = -0.002840881f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var588 = -0.015637241f;
            } else {
                var588 = -0.02855306f;
            }
        }
    }
    float var589;
    if (input[0] >= 120.96444f) {
        var589 = 0.079334885f;
    } else {
        var589 = -0.02899955f;
    }
    float var590;
    if (input[0] >= 120.96444f) {
        var590 = 0.079777665f;
    } else {
        var590 = -0.028973503f;
    }
    float var591;
    if (input[0] >= 120.96444f) {
        var591 = 0.07944392f;
    } else {
        var591 = -0.028946131f;
    }
    float var592;
    if (input[0] >= 120.96444f) {
        var592 = 0.07921454f;
    } else {
        var592 = -0.028909126f;
    }
    float var593;
    if (input[0] >= 120.96444f) {
        var593 = 0.07869618f;
    } else {
        var593 = -0.028990079f;
    }
    float var594;
    if (input[1] >= 172.36119f) {
        if (input[1] >= 182.60428f) {
            if (input[1] >= 193.42847f) {
                var594 = 0.06839556f;
            } else {
                var594 = 0.052982878f;
            }
        } else {
            if (input[2] >= 30.150002f) {
                var594 = 0.046153408f;
            } else {
                var594 = 0.019946821f;
            }
        }
    } else {
        if (input[1] >= 155.85307f) {
            if (input[2] >= 30.25f) {
                var594 = -0.011693676f;
            } else {
                var594 = 0.009622413f;
            }
        } else {
            if (input[1] >= 139.14867f) {
                var594 = -0.015603441f;
            } else {
                var594 = -0.02847514f;
            }
        }
    }
    float var595;
    if (input[0] >= 120.96444f) {
        var595 = 0.08202083f;
    } else {
        var595 = -0.028977752f;
    }
    float var596;
    if (input[0] >= 120.96444f) {
        var596 = 0.08872019f;
    } else {
        var596 = -0.02915432f;
    }
    float var597;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var597 = -0.004130663f;
            } else {
                var597 = 0.020176994f;
            }
        } else {
            if (input[2] >= 28.150002f) {
                var597 = -0.008552472f;
            } else {
                var597 = -0.0033228488f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var597 = -0.00068905414f;
            } else {
                var597 = 0.009586441f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var597 = -0.0071279826f;
            } else {
                var597 = -0.0010344115f;
            }
        }
    }
    float var598;
    if (input[0] >= 120.96444f) {
        var598 = 0.08666258f;
    } else {
        var598 = -0.029117635f;
    }
    float var599;
    if (input[3] >= 79.0f) {
        if (input[3] >= 92.0f) {
            if (input[3] >= 93.0f) {
                var599 = -0.0038661584f;
            } else {
                var599 = 0.020811489f;
            }
        } else {
            if (input[2] >= 28.150002f) {
                var599 = -0.008307042f;
            } else {
                var599 = -0.003043792f;
            }
        }
    } else {
        if (input[3] >= 74.0f) {
            if (input[2] >= 26.25f) {
                var599 = -0.00038632288f;
            } else {
                var599 = 0.0099531f;
            }
        } else {
            if (input[3] >= 72.0f) {
                var599 = -0.0068627098f;
            } else {
                var599 = -0.0007524138f;
            }
        }
    }
    float var600;
    if (input[0] >= 120.96444f) {
        if (input[1] >= 180.00467f) {
            var600 = 0.07375962f;
        } else {
            var600 = 0.09150603f;
        }
    } else {
        var600 = -0.028947985f;
    }
    softmax((float[]){0.5f + (var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50 + var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100), 0.5f + (var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149 + var150 + var151 + var152 + var153 + var154 + var155 + var156 + var157 + var158 + var159 + var160 + var161 + var162 + var163 + var164 + var165 + var166 + var167 + var168 + var169 + var170 + var171 + var172 + var173 + var174 + var175 + var176 + var177 + var178 + var179 + var180 + var181 + var182 + var183 + var184 + var185 + var186 + var187 + var188 + var189 + var190 + var191 + var192 + var193 + var194 + var195 + var196 + var197 + var198 + var199 + var200), 0.5f + (var201 + var202 + var203 + var204 + var205 + var206 + var207 + var208 + var209 + var210 + var211 + var212 + var213 + var214 + var215 + var216 + var217 + var218 + var219 + var220 + var221 + var222 + var223 + var224 + var225 + var226 + var227 + var228 + var229 + var230 + var231 + var232 + var233 + var234 + var235 + var236 + var237 + var238 + var239 + var240 + var241 + var242 + var243 + var244 + var245 + var246 + var247 + var248 + var249 + var250 + var251 + var252 + var253 + var254 + var255 + var256 + var257 + var258 + var259 + var260 + var261 + var262 + var263 + var264 + var265 + var266 + var267 + var268 + var269 + var270 + var271 + var272 + var273 + var274 + var275 + var276 + var277 + var278 + var279 + var280 + var281 + var282 + var283 + var284 + var285 + var286 + var287 + var288 + var289 + var290 + var291 + var292 + var293 + var294 + var295 + var296 + var297 + var298 + var299 + var300), 0.5f + (var301 + var302 + var303 + var304 + var305 + var306 + var307 + var308 + var309 + var310 + var311 + var312 + var313 + var314 + var315 + var316 + var317 + var318 + var319 + var320 + var321 + var322 + var323 + var324 + var325 + var326 + var327 + var328 + var329 + var330 + var331 + var332 + var333 + var334 + var335 + var336 + var337 + var338 + var339 + var340 + var341 + var342 + var343 + var344 + var345 + var346 + var347 + var348 + var349 + var350 + var351 + var352 + var353 + var354 + var355 + var356 + var357 + var358 + var359 + var360 + var361 + var362 + var363 + var364 + var365 + var366 + var367 + var368 + var369 + var370 + var371 + var372 + var373 + var374 + var375 + var376 + var377 + var378 + var379 + var380 + var381 + var382 + var383 + var384 + var385 + var386 + var387 + var388 + var389 + var390 + var391 + var392 + var393 + var394 + var395 + var396 + var397 + var398 + var399 + var400), 0.5f + (var401 + var402 + var403 + var404 + var405 + var406 + var407 + var408 + var409 + var410 + var411 + var412 + var413 + var414 + var415 + var416 + var417 + var418 + var419 + var420 + var421 + var422 + var423 + var424 + var425 + var426 + var427 + var428 + var429 + var430 + var431 + var432 + var433 + var434 + var435 + var436 + var437 + var438 + var439 + var440 + var441 + var442 + var443 + var444 + var445 + var446 + var447 + var448 + var449 + var450 + var451 + var452 + var453 + var454 + var455 + var456 + var457 + var458 + var459 + var460 + var461 + var462 + var463 + var464 + var465 + var466 + var467 + var468 + var469 + var470 + var471 + var472 + var473 + var474 + var475 + var476 + var477 + var478 + var479 + var480 + var481 + var482 + var483 + var484 + var485 + var486 + var487 + var488 + var489 + var490 + var491 + var492 + var493 + var494 + var495 + var496 + var497 + var498 + var499 + var500), 0.5f + (var501 + var502 + var503 + var504 + var505 + var506 + var507 + var508 + var509 + var510 + var511 + var512 + var513 + var514 + var515 + var516 + var517 + var518 + var519 + var520 + var521 + var522 + var523 + var524 + var525 + var526 + var527 + var528 + var529 + var530 + var531 + var532 + var533 + var534 + var535 + var536 + var537 + var538 + var539 + var540 + var541 + var542 + var543 + var544 + var545 + var546 + var547 + var548 + var549 + var550 + var551 + var552 + var553 + var554 + var555 + var556 + var557 + var558 + var559 + var560 + var561 + var562 + var563 + var564 + var565 + var566 + var567 + var568 + var569 + var570 + var571 + var572 + var573 + var574 + var575 + var576 + var577 + var578 + var579 + var580 + var581 + var582 + var583 + var584 + var585 + var586 + var587 + var588 + var589 + var590 + var591 + var592 + var593 + var594 + var595 + var596 + var597 + var598 + var599 + var600)}, 6, var0);
    memcpy(output, var0, 6 * sizeof(float));
}
