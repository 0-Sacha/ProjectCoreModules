#pragma once

#include "ProjectCore/UnLOG/src/UnLOG.h"

namespace ProjectCore::UnLOG::InterfaceImGUI
{
	class BasicConsole
	{
	public:
		BasicConsole(const std::string& name)
			: m_Name(name)
		{}

	public:
		const std::string& GetName() const { return m_Name; }
		void SetName(const std::string& name) { m_Name = name; }

	public:
		void Render(const LogBuffer& logs)
		{
			
		}

	private:
		std::string m_Name;
	};
}
