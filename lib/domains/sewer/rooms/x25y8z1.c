inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 8, 1 }));
  set_short( "Hallway - x25y8z1" );
set_objects( DIR+"/monsters/sewerboss.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y9z1.c",
  "south" : DIR+"/rooms/x25y7z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
