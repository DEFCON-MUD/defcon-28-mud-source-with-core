inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 26, 6 }));
  set_short( "Corridor - x3y26z6" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y26z6.c",
  "east" : DIR+"/rooms/x4y26z6.c",
  "north" : DIR+"/rooms/x3y27z6.c",
  "south" : DIR+"/rooms/x3y25z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
