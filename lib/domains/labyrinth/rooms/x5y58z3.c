inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 58, 3 }));
  set_short( "Hallway - x5y58z3" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y58z3.c",
  "east" : DIR+"/rooms/x6y58z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
