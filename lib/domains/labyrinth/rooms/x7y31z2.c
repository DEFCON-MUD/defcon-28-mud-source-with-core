inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 31, 2 }));
  set_short( "Hallway - x7y31z2" );
set_objects( DIR+"/npc/maintainer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y32z2.c",
  "south" : DIR+"/rooms/x7y30z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
