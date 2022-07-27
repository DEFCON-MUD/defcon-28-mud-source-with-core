inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 4, 6 }));
  set_short( "Hallway - x21y4z6" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y4z6.c",
  "east" : DIR+"/rooms/x22y4z6.c",
  "north" : DIR+"/rooms/x21y5z6.c",
  "south" : DIR+"/rooms/x21y3z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with blood. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
