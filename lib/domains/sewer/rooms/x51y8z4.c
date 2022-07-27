inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 8, 4 }));
  set_short( "Passage - x51y8z4" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y8z4.c",
  "north" : DIR+"/rooms/x51y9z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
