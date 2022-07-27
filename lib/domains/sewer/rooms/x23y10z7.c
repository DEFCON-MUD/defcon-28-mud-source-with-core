inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 7 }));
  set_short( "Corridor - x23y10z7" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y10z7.c",
  "south" : DIR+"/rooms/x23y9z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
