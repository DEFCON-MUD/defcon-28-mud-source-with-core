inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 14, 8 }));
  set_short( "Hallway - x37y14z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y14z8.c",
  "north" : DIR+"/rooms/x37y15z8.c",
  "south" : DIR+"/rooms/x37y13z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, north, and west.%^RESET%^");
}
