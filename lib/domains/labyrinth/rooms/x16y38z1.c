inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 38, 1 }));
  set_short( "Corridor - x16y38z1" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y38z1.c",
  "east" : DIR+"/rooms/x17y38z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
