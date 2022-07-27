inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 7, 6 }));
  set_short( "Hallway - x49y7z6" );
set_objects( DIR+"/monsters/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y8z6.c",
  "south" : DIR+"/rooms/x49y6z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
