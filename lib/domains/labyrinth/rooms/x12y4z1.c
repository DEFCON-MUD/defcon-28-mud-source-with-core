inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 4, 1 }));
  set_short( "Hallway - x12y4z1" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y4z1.c",
  "east" : DIR+"/rooms/x13y4z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
