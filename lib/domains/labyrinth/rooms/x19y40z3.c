inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 40, 3 }));
  set_short( "Corridor - x19y40z3" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y41z3.c",
  "south" : DIR+"/rooms/x19y39z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
