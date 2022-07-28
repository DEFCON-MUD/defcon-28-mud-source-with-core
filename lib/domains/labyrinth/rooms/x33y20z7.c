inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 20, 7 }));
  set_short( "Corridor - x33y20z7" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y20z7.c",
  "north" : DIR+"/rooms/x33y21z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
