#include <discpp/client.h>
#include <discpp/context.h>
#include <discpp/command_handler.h>
#include <discpp/client_config.h>

int main(int argc, const char* argv[]) {
    discpp::ClientConfig config({"!"}, 1., discpp::TokenType::BOT, discpp::logger_flags::DEBUG_SEVERITY);
	discpp::Client client{ "TOKEN_HERE", config }; // Token, config

	// For more complex commands, create a separate command class.
	client.command_handler->RegisterCommand<discpp::Command>("ping", "Quick ping command", [](discpp::Context ctx) {
	    ctx.Send("pong!");
	});

	return client.Run();
}