inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 50, 9 }));
  set_short( "Hallway - x35y50z9" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y50z9.c",
  "east" : DIR+"/rooms/x36y50z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
