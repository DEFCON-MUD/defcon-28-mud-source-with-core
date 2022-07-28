inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 15, 8 }));
  set_short( "Corridor - x21y15z8" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y16z8.c",
  "south" : DIR+"/rooms/x21y14z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
