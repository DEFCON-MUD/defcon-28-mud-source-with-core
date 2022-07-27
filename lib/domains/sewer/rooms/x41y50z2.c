inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 50, 2 }));
  set_short( "Hallway - x41y50z2" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y50z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
