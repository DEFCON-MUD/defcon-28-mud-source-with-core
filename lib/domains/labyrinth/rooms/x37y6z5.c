inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 6, 5 }));
  set_short( "Hallway - x37y6z5" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y6z5.c",
  "east" : DIR+"/rooms/x38y6z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
