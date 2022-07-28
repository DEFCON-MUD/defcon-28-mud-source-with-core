inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 62, 4 }));
  set_short( "Corridor - x47y62z4" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y62z4.c",
  "east" : DIR+"/rooms/x48y62z4.c",
  "north" : DIR+"/rooms/x47y63z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
