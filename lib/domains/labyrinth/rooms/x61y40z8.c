inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 40, 8 }));
  set_short( "Hallway - x61y40z8" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y41z8.c",
  "south" : DIR+"/rooms/x61y39z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crappy sales material in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
