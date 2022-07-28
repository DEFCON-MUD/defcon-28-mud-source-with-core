inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 4 }));
  set_short( "Hallway - x55y42z4" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y42z4.c",
  "north" : DIR+"/rooms/x55y43z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
