inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 58, 4 }));
  set_short( "Corridor - x40y58z4" );
set_objects( DIR+"/monsters/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y58z4.c",
  "east" : DIR+"/rooms/x41y58z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
