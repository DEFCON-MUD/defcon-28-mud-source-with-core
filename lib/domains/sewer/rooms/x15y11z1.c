inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 11, 1 }));
  set_short( "Hallway - x15y11z1" );
set_objects( DIR+"/monsters/r1marilynn.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y12z1.c",
  "south" : DIR+"/rooms/x15y10z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
