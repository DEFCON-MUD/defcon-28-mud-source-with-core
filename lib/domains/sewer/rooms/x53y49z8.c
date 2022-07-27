inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 49, 8 }));
  set_short( "Hallway - x53y49z8" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y50z8.c",
  "south" : DIR+"/rooms/x53y48z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
