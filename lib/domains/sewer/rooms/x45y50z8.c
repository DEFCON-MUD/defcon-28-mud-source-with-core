inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 50, 8 }));
  set_short( "Corridor - x45y50z8" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y50z8.c",
  "south" : DIR+"/rooms/x45y49z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
