inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 30, 8 }));
  set_short( "Hallway - x36y30z8" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y30z8.c",
  "east" : DIR+"/rooms/x37y30z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
