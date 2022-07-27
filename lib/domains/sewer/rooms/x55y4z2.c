inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 2 }));
  set_short( "Passage - x55y4z2" );
set_objects( DIR+"/monsters/captain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y4z2.c",
  "south" : DIR+"/rooms/x55y3z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
