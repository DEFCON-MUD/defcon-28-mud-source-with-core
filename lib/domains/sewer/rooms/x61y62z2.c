inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 62, 2 }));
  set_short( "Hallway - x61y62z2" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y62z2.c",
  "south" : DIR+"/rooms/x61y61z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
