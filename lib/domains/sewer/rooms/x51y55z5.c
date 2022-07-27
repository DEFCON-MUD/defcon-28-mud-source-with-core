inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 55, 5 }));
  set_short( "Corridor - x51y55z5" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y56z5.c",
  "south" : DIR+"/rooms/x51y54z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
