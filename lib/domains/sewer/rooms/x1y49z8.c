inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 49, 8 }));
  set_short( "Hallway - x1y49z8" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y50z8.c",
  "south" : DIR+"/rooms/x1y48z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
