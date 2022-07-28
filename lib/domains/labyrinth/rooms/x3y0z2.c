inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 0, 2 }));
  set_short( "Passage - x3y0z2" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y0z2.c",
  "east" : DIR+"/rooms/x4y0z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
