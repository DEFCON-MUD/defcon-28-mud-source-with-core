inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 5 }));
  set_short( "Corridor - x23y6z5" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y6z5.c",
  "north" : DIR+"/rooms/x23y7z5.c",
  "south" : DIR+"/rooms/x23y5z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
