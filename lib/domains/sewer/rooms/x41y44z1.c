inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 44, 1 }));
  set_short( "Hallway - x41y44z1" );
set_objects( DIR+"/monsters/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y44z1.c",
  "south" : DIR+"/rooms/x41y43z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
