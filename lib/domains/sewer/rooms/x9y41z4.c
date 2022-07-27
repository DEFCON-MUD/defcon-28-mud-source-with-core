inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 41, 4 }));
  set_short( "Hallway - x9y41z4" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y42z4.c",
  "south" : DIR+"/rooms/x9y40z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
