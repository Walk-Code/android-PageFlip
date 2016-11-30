/*
 * Copyright (C) 2016 eschao <esc.chao@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_PAGEFLIP_SHADOWVERTEXPROGRAM_H
#define ANDROID_PAGEFLIP_SHADOWVERTEXPROGRAM_H


#include "GLProgram.h"

class ShadowVertexProgram : public GLProgram
{

protected:
    static const char *VAR_MVP_MATRIX   = "u_MVPMatrix";
    static const char *VAR_VERTEX_Z     = "u_vexZ";
    static const char *VAR_VERTEX_POS   = "a_vexPosition";

    GLint hMVPMatrix;
    GLint hVertexZ;
    GLint hVertexPosition;

public:
    ShadowVertexProgram();
    ~ShadowVertexProgram();

    int init();
    void clean();

protected:
    void getVarsLocation();
};

#endif //ANDROID_PAGEFLIP_SHADOWVERTEXPROGRAM_H