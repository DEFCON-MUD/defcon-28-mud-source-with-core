inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 12, 3 }));
  set_short( "Passage - x24y12z3" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y12z3.c",
  "east" : DIR+"/rooms/x25y12z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
