inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 16, 8 }));
  set_short( "Passage - x35y16z8" );
set_objects( DIR+"/monsters/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y16z8.c",
  "south" : DIR+"/rooms/x35y15z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
