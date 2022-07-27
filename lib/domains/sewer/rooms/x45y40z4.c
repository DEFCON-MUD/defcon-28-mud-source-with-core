inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 40, 4 }));
  set_short( "Corridor - x45y40z4" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y40z4.c",
  "north" : DIR+"/rooms/x45y41z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
