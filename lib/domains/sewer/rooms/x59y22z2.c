inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 22, 2 }));
  set_short( "Corridor - x59y22z2" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y22z2.c",
  "south" : DIR+"/rooms/x59y21z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
