inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 53, 3 }));
  set_short( "Hallway - x57y53z3" );
set_objects( DIR+"/monsters/constrtor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y54z3.c",
  "south" : DIR+"/rooms/x57y52z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
