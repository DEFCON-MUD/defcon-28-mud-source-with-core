inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 8, 8 }));
  set_short( "Hallway - x41y8z8" );
set_objects( DIR+"/monsters/tawny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y8z8.c",
  "east" : DIR+"/rooms/x42y8z8.c",
  "north" : DIR+"/rooms/x41y9z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, east, and north.%^RESET%^");
}
