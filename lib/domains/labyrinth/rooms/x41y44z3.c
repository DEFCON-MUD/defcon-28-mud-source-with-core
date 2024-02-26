inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 3 }));
  set_short( "Corridor - x41y44z3" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y44z3.c",
  "south" : DIR+"/rooms/x41y43z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
