inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 26, 6 }));
  set_short( "Corridor - x2y26z6" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y26z6.c",
  "east" : DIR+"/rooms/x3y26z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the radioactive waste in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
