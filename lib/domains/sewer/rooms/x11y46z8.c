inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 46, 8 }));
  set_short( "Corridor - x11y46z8" );
set_objects( DIR+"/monsters/slime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y47z8.c",
  "south" : DIR+"/rooms/x11y45z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
