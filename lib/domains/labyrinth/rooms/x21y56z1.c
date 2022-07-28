inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 56, 1 }));
  set_short( "Passage - x21y56z1" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y56z1.c",
  "south" : DIR+"/rooms/x21y55z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
