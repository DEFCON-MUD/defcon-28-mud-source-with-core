inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 52, 3 }));
  set_short( "Corridor - x37y52z3" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y52z3.c",
  "east" : DIR+"/rooms/x38y52z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the sludge in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
