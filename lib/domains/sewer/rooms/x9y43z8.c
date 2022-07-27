inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 43, 8 }));
  set_short( "Hallway - x9y43z8" );
set_objects( DIR+"/monsters/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y44z8.c",
  "south" : DIR+"/rooms/x9y42z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
