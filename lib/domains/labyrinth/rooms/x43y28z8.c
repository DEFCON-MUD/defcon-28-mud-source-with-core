inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 28, 8 }));
  set_short( "Hallway - x43y28z8" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y28z8.c",
  "north" : DIR+"/rooms/x43y29z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the random junk evilmog thought up in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
