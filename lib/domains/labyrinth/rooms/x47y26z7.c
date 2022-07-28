inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 26, 7 }));
  set_short( "Hallway - x47y26z7" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y26z7.c",
  "east" : DIR+"/rooms/x48y26z7.c",
  "north" : DIR+"/rooms/x47y27z7.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the glorzo in this hellhole. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
