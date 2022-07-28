inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 2, 4 }));
  set_short( "Corridor - x1y2z4" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y2z4.c",
  "north" : DIR+"/rooms/x1y3z4.c",
  "south" : DIR+"/rooms/x1y1z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
