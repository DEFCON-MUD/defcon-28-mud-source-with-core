inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 12, 8 }));
  set_short( "Corridor - x39y12z8" );
set_objects( DIR+"/monsters/log.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y12z8.c",
  "south" : DIR+"/rooms/x39y11z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
