inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 39, 3 }));
  set_short( "Hallway - x3y39z3" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y40z3.c",
  "south" : DIR+"/rooms/x3y38z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
