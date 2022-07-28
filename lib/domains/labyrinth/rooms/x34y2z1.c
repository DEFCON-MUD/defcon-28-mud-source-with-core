inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 2, 1 }));
  set_short( "Passage - x34y2z1" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y2z1.c",
  "east" : DIR+"/rooms/x35y2z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
