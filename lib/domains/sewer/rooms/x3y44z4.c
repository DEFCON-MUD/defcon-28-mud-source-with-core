inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 44, 4 }));
  set_short( "Corridor - x3y44z4" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y44z4.c",
  "east" : DIR+"/rooms/x4y44z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
