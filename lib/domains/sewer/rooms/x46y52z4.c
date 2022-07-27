inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 52, 4 }));
  set_short( "Passage - x46y52z4" );
set_objects( DIR+"/monsters/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y52z4.c",
  "east" : DIR+"/rooms/x47y52z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
