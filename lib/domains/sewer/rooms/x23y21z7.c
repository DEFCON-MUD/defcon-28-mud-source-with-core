inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 21, 7 }));
  set_short( "Corridor - x23y21z7" );
set_objects( DIR+"/monsters/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y22z7.c",
  "south" : DIR+"/rooms/x23y20z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
