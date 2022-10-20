#pragma once

#ifdef HZ_PLATFORM_WINDOWS
extern Hazel::HazelApplication* Hazel::CreateApplication();
int main(int argc, char** argv)
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}

#endif
