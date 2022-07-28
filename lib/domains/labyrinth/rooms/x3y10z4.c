inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 10, 4 }));
  set_short( "Corridor - x3y10z4" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y10z4.c",
  "north" : DIR+"/rooms/x3y11z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
