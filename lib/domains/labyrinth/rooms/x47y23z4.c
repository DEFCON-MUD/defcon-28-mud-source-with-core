inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 23, 4 }));
  set_short( "Passage - x47y23z4" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y24z4.c",
  "south" : DIR+"/rooms/x47y22z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
