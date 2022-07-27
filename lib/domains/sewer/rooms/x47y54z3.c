inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 54, 3 }));
  set_short( "Passage - x47y54z3" );
set_objects( DIR+"/monsters/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y54z3.c",
  "north" : DIR+"/rooms/x47y55z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
