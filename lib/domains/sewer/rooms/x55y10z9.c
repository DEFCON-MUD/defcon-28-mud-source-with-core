inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 10, 9 }));
  set_short( "Corridor - x55y10z9" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y10z9.c",
  "south" : DIR+"/rooms/x55y9z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
