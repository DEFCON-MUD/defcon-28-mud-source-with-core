inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 34, 1 }));
  set_short( "Corridor - x51y34z1" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y34z1.c",
  "east" : DIR+"/rooms/x52y34z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
