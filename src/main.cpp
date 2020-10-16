#include <discpp/client.h>
#include <discpp/context.h>
#include <discpp/command_handler.h>
#include <discpp/client_config.h>

int main(int argc, const char* argv[]) {
	auto* config = new discpp::ClientConfig({"!"});
	discpp::Client bot{ "TOKEN_HERE", config }; // Token, config

	// I would recommend creating a class for the commands, you can check that in the examples folder
	// But, you can still register a command like you did before
	discpp::Command ping_command("ping", "Quick example of a command", {}, [](discpp::Context ctx) {
		ctx.Send("pong!");
	}, {});

	return bot.Run();
}