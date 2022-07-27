inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 20, 7 }));
  set_short( "Corridor - x23y20z7" );
set_objects( DIR+"/monsters/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y21z7.c",
  "south" : DIR+"/rooms/x23y19z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the glorzo in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
