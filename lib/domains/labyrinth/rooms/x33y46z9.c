inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 9 }));
  set_short( "Corridor - x33y46z9" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y46z9.c",
  "north" : DIR+"/rooms/x33y47z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
