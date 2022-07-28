inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 14, 3 }));
  set_short( "Passage - x5y14z3" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y14z3.c",
  "north" : DIR+"/rooms/x5y15z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
