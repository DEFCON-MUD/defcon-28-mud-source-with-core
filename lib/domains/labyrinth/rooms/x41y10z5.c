inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 10, 5 }));
  set_short( "Passage - x41y10z5" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y10z5.c",
  "south" : DIR+"/rooms/x41y9z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
