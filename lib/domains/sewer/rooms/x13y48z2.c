inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 48, 2 }));
  set_short( "Corridor - x13y48z2" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y48z2.c",
  "south" : DIR+"/rooms/x13y47z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
