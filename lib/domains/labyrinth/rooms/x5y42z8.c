inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 42, 8 }));
  set_short( "Passage - x5y42z8" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y42z8.c",
  "east" : DIR+"/rooms/x6y42z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
