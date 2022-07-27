inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 30, 0 }));
  set_short( "Hallway - x13y30z0" );
set_objects( DIR+"/monsters/anthonyfox.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y31z0.c",
  "south" : DIR+"/rooms/x13y29z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
