#include"Core/EntryPoint.h"
#include"EditorLayer.h"
class ExampleApplication : public GU::Application
{
public:
    ExampleApplication(){
        PushLayer(new EditorLayer());
    }

    ~ExampleApplication()
    {}
};
GU::Application* GU::CreateApplication()
{
    return new ExampleApplication();
}