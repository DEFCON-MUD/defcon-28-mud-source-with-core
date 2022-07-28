inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 6, 3 }));
  set_short( "Hallway - x35y6z3" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y6z3.c",
  "east" : DIR+"/rooms/x36y6z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
