inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 58, 8 }));
  set_short( "Corridor - x56y58z8" );
set_objects( DIR+"/monsters/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y58z8.c",
  "east" : DIR+"/rooms/x57y58z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
