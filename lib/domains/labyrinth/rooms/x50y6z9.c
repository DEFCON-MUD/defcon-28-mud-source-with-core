inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 6, 9 }));
  set_short( "Hallway - x50y6z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y6z9.c",
  "east" : DIR+"/rooms/x51y6z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
