inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 16, 5 }));
  set_short( "Hallway - x5y16z5" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y16z5.c",
  "north" : DIR+"/rooms/x5y17z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
