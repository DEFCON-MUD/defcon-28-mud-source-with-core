inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 46, 9 }));
  set_short( "Corridor - x56y46z9" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y46z9.c",
  "east" : DIR+"/rooms/x57y46z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
