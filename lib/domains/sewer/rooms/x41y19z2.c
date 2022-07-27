inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 19, 2 }));
  set_short( "Hallway - x41y19z2" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y20z2.c",
  "south" : DIR+"/rooms/x41y18z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
