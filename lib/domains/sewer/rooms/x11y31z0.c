inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 31, 0 }));
  set_short( "Hallway - x11y31z0" );
set_objects( DIR+"/monsters/heptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y32z0.c",
  "south" : DIR+"/rooms/x11y30z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
