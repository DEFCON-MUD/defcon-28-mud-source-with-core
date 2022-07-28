inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 6, 7 }));
  set_short( "Hallway - x45y6z7" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y6z7.c",
  "north" : DIR+"/rooms/x45y7z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
