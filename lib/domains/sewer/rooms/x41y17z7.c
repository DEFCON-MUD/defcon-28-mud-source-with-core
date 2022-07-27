inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 17, 7 }));
  set_short( "Hallway - x41y17z7" );
set_objects( DIR+"/monsters/zaryem.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y18z7.c",
  "south" : DIR+"/rooms/x41y16z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
