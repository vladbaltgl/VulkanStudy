#pragma once

#include "lve_window.h"
#include "lve_pipeline.h"
#include "lve_device.h"


namespace lve {

	class FirstApp {

	public:
		static constexpr int WIDTH = 800;
		static constexpr int HEIGHT = 600;

		void run();

	private:
		LveWindow lveWindow{ WIDTH,HEIGHT,"HELLO VULKAN" };
		LveDevice lveDevice{ lveWindow };
		LvePipeline lvePipeline{
			lveDevice,
			"simple_shader.vert.spv",
			"simple_shader.frag.spv",
			LvePipeline::defaultPipelineConfigInfo(WIDTH,HEIGHT)};
}; 

}


