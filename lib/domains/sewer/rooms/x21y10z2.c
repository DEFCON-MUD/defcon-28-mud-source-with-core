inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 10, 2 }));
  set_short( "Hallway - x21y10z2" );
set_objects( DIR+"/monsters/wendall.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y10z2.c",
  "north" : DIR+"/rooms/x21y11z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
