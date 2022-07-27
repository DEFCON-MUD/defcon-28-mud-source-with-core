inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 23, 1 }));
  set_short( "Corridor - x1y23z1" );
set_objects( DIR+"/monsters/r1mandrone.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y24z1.c",
  "south" : DIR+"/rooms/x1y22z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
