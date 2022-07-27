inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 44, 8 }));
  set_short( "Corridor - x59y44z8" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y44z8.c",
  "north" : DIR+"/rooms/x59y45z8.c",
  "south" : DIR+"/rooms/x59y43z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
