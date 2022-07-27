inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 51, 6 }));
  set_short( "Hallway - x21y51z6" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y52z6.c",
  "south" : DIR+"/rooms/x21y50z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
