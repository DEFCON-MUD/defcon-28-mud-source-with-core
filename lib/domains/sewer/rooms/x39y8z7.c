inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 8, 7 }));
  set_short( "Hallway - x39y8z7" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y8z7.c",
  "south" : DIR+"/rooms/x39y7z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
