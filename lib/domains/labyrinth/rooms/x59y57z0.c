inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 57, 0 }));
  set_short( "Hallway - x59y57z0" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y58z0.c",
  "south" : DIR+"/rooms/x59y56z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
