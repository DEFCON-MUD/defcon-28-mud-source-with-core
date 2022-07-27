inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 3, 2 }));
  set_short( "Hallway - x27y3z2" );
set_objects( DIR+"/monsters/radgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y4z2.c",
  "south" : DIR+"/rooms/x27y2z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
