inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 5, 3 }));
  set_short( "Corridor - x45y5z3" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y6z3.c",
  "south" : DIR+"/rooms/x45y4z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
