inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 61, 4 }));
  set_short( "Hallway - x35y61z4" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y62z4.c",
  "south" : DIR+"/rooms/x35y60z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crappy sales material in this dump. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
