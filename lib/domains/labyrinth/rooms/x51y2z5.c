inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 2, 5 }));
  set_short( "Corridor - x51y2z5" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y2z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east.%^RESET%^");
}
