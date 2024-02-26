inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 49, 3 }));
  set_short( "Corridor - x21y49z3" );
set_objects( DIR+"/monsters/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y50z3.c",
  "south" : DIR+"/rooms/x21y48z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
