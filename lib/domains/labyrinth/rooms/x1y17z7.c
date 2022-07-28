inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 17, 7 }));
  set_short( "Hallway - x1y17z7" );
set_objects( DIR+"/npc/r1radsensor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y18z7.c",
  "south" : DIR+"/rooms/x1y16z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
