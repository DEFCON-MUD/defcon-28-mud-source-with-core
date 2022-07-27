inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 15, 9 }));
  set_short( "Hallway - x13y15z9" );
set_objects( DIR+"/monsters/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y16z9.c",
  "south" : DIR+"/rooms/x13y14z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
