inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 12, 8 }));
  set_short( "Passage - x20y12z8" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y12z8.c",
  "east" : DIR+"/rooms/x21y12z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
