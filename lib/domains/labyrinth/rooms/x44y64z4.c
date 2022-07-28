inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 64, 4 }));
  set_short( "Corridor - x44y64z4" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y64z4.c",
  "east" : DIR+"/rooms/x45y64z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
