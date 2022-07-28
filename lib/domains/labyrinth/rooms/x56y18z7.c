inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 18, 7 }));
  set_short( "Hallway - x56y18z7" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y18z7.c",
  "east" : DIR+"/rooms/x57y18z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
