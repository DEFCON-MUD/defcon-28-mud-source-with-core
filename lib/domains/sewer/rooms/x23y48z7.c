inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 48, 7 }));
  set_short( "Passage - x23y48z7" );
set_objects( DIR+"/monsters/eastfilinlerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y48z7.c",
  "north" : DIR+"/rooms/x23y49z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
