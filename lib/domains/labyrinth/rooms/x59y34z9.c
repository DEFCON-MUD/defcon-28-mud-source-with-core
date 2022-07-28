inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 34, 9 }));
  set_short( "Hallway - x59y34z9" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y34z9.c",
  "north" : DIR+"/rooms/x59y35z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
