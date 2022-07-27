inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 32, 1 }));
  set_short( "Corridor - x9y32z1" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y32z1.c",
  "south" : DIR+"/rooms/x9y31z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
