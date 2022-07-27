inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 22, 7 }));
  set_short( "Hallway - x3y22z7" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y23z7.c",
  "south" : DIR+"/rooms/x3y21z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this joint. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
