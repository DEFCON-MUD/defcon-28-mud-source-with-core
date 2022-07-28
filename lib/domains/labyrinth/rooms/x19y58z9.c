inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 58, 9 }));
  set_short( "Corridor - x19y58z9" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y58z9.c",
  "north" : DIR+"/rooms/x19y59z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the radioactive waste in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
