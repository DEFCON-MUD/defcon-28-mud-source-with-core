inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 48, 8 }));
  set_short( "Corridor - x53y48z8" );
set_objects( DIR+"/monsters/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y48z8.c",
  "north" : DIR+"/rooms/x53y49z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
