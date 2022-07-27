inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 61, 4 }));
  set_short( "Corridor - x41y61z4" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y62z4.c",
  "south" : DIR+"/rooms/x41y60z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
