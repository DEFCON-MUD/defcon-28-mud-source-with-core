inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 44, 9 }));
  set_short( "Hallway - x43y44z9" );
set_objects( DIR+"/monsters/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y45z9.c",
  "south" : DIR+"/rooms/x43y43z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the glorzo in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
