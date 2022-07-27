inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 32, 9 }));
  set_short( "Corridor - x49y32z9" );
set_objects( DIR+"/monsters/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y32z9.c",
  "east" : DIR+"/rooms/x50y32z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
