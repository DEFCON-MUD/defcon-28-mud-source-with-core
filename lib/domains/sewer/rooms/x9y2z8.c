inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 2, 8 }));
  set_short( "Hallway - x9y2z8" );
set_objects( DIR+"/monsters/r1physist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y2z8.c",
  "east" : DIR+"/rooms/x10y2z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
