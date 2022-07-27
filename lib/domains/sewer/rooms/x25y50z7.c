inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 50, 7 }));
  set_short( "Hallway - x25y50z7" );
set_objects( DIR+"/monsters/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y50z7.c",
  "south" : DIR+"/rooms/x25y49z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
