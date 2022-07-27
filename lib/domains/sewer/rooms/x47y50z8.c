inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 50, 8 }));
  set_short( "Hallway - x47y50z8" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y50z8.c",
  "south" : DIR+"/rooms/x47y49z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
