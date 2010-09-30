
//
// node-canvas.cc
//
// Copyright (c) 2010 LearnBoost <tj@learnboost.com>
//

#include "canvas.h"
#include "context2d.h"
#include "gradient.h"

extern "C" void
init (Handle<Object> target) {
  HandleScope scope;
  Canvas::Initialize(target);
  Context2d::Initialize(target);
  Gradient::Initialize(target);
  target->Set(String::New("cairoVersion"), String::New(cairo_version_string()));
}