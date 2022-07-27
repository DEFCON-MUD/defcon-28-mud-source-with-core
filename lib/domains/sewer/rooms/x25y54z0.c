inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 54, 0 }));
  set_short( "Hallway - x25y54z0" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y54z0.c",
  "east" : DIR+"/rooms/x26y54z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
