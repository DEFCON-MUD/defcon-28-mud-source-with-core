inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 11, 7 }));
  set_short( "Corridor - x33y11z7" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y12z7.c",
  "south" : DIR+"/rooms/x33y10z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
