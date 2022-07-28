inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 10, 2 }));
  set_short( "Hallway - x55y10z2" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "south" : DIR+"/rooms/x55y9z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
