inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 12, 3 }));
  set_short( "Hallway - x11y12z3" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y13z3.c",
  "south" : DIR+"/rooms/x11y11z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
