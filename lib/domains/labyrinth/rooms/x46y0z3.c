inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 0, 3 }));
  set_short( "Hallway - x46y0z3" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y0z3.c",
  "east" : DIR+"/rooms/x47y0z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
