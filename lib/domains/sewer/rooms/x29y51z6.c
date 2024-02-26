inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 51, 6 }));
  set_short( "Hallway - x29y51z6" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y52z6.c",
  "south" : DIR+"/rooms/x29y50z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
