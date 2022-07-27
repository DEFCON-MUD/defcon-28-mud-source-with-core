inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 25, 7 }));
  set_short( "Hallway - x53y25z7" );
set_objects( DIR+"/monsters/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y26z7.c",
  "south" : DIR+"/rooms/x53y24z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
