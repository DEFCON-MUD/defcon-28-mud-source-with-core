inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 50, 6 }));
  set_short( "Passage - x43y50z6" );
set_objects( DIR+"/monsters/mosquito.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y50z6.c",
  "north" : DIR+"/rooms/x43y51z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
