inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 14, 4 }));
  set_short( "Corridor - x11y14z4" );
set_objects( DIR+"/monsters/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y15z4.c",
  "south" : DIR+"/rooms/x11y13z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
