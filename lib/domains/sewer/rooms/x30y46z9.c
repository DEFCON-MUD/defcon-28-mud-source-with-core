inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 46, 9 }));
  set_short( "Hallway - x30y46z9" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y46z9.c",
  "east" : DIR+"/rooms/x31y46z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
