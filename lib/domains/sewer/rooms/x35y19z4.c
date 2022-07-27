inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 19, 4 }));
  set_short( "Corridor - x35y19z4" );
set_objects( DIR+"/monsters/cagedaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y20z4.c",
  "south" : DIR+"/rooms/x35y18z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
