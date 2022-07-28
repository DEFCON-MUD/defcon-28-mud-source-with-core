inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 0, 7 }));
  set_short( "Hallway - x11y0z7" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y0z7.c",
  "east" : DIR+"/rooms/x12y0z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
