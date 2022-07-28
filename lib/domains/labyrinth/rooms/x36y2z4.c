inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 2, 4 }));
  set_short( "Hallway - x36y2z4" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y2z4.c",
  "east" : DIR+"/rooms/x37y2z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
