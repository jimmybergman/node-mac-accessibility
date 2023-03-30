#include <node.h>
#include <ApplicationServices/ApplicationServices.h>

namespace NodeMacAccessibility {

using v8::FunctionCallbackInfo;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void IsProcessTrusted(const FunctionCallbackInfo<Value>& args) {
  args.GetReturnValue().Set(AXIsProcessTrustedWithOptions(nullptr) ? true : false);
}

void Initialize(Local<Object> exports) {
  NODE_SET_METHOD(exports, "isProcessTrusted", IsProcessTrusted);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, Initialize)

}
