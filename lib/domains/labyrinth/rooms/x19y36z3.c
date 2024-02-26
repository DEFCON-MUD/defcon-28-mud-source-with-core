inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 36, 3 }));
  set_short( "Corridor - x19y36z3" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y37z3.c",
  "south" : DIR+"/rooms/x19y35z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
