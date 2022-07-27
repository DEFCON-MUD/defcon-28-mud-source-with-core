inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 46, 2 }));
  set_short( "Hallway - x57y46z2" );
set_objects( DIR+"/monsters/bouer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y46z2.c",
  "north" : DIR+"/rooms/x57y47z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
