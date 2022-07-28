inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 32, 2 }));
  set_short( "Corridor - x23y32z2" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y32z2.c",
  "north" : DIR+"/rooms/x23y33z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crappy sales material in this area. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
