inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 56, 9 }));
  set_short( "Hallway - x51y56z9" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y56z9.c",
  "east" : DIR+"/rooms/x52y56z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
