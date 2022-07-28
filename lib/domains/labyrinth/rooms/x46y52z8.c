inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 52, 8 }));
  set_short( "Hallway - x46y52z8" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y52z8.c",
  "east" : DIR+"/rooms/x47y52z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
