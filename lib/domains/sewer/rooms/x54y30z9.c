inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 30, 9 }));
  set_short( "Hallway - x54y30z9" );
set_objects( DIR+"/monsters/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y30z9.c",
  "east" : DIR+"/rooms/x55y30z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
