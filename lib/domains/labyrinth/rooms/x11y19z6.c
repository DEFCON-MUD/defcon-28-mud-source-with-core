inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 19, 6 }));
  set_short( "Hallway - x11y19z6" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y20z6.c",
  "south" : DIR+"/rooms/x11y18z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
