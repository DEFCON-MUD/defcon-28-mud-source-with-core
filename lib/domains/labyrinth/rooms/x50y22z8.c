inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 22, 8 }));
  set_short( "Hallway - x50y22z8" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y22z8.c",
  "east" : DIR+"/rooms/x51y22z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
