inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 61, 5 }));
  set_short( "Hallway - x31y61z5" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y62z5.c",
  "south" : DIR+"/rooms/x31y60z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the glorzo in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
