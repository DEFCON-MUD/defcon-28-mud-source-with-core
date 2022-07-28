inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 30, 7 }));
  set_short( "Corridor - x55y30z7" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y30z7.c",
  "south" : DIR+"/rooms/x55y29z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
