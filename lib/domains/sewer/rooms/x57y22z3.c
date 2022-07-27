inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 22, 3 }));
  set_short( "Hallway - x57y22z3" );
set_objects( DIR+"/monsters/bartender.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y22z3.c",
  "south" : DIR+"/rooms/x57y21z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crappy sales material in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
