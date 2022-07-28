inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 0, 9 }));
  set_short( "Hallway - x58y0z9" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y0z9.c",
  "east" : DIR+"/rooms/x59y0z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
