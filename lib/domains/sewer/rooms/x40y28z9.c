inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 28, 9 }));
  set_short( "Hallway - x40y28z9" );
set_objects( DIR+"/monsters/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y28z9.c",
  "east" : DIR+"/rooms/x41y28z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
