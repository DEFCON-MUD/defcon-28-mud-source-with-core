inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 48, 0 }));
  set_short( "Corridor - x5y48z0" );
set_objects( DIR+"/monsters/offer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y48z0.c",
  "south" : DIR+"/rooms/x5y47z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
