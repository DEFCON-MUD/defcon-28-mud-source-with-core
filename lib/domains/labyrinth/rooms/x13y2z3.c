inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 2, 3 }));
  set_short( "Corridor - x13y2z3" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y2z3.c",
  "east" : DIR+"/rooms/x14y2z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
