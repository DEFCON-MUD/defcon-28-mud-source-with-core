inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 15, 3 }));
  set_short( "Hallway - x3y15z3" );
set_objects( DIR+"/monsters/cellguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y16z3.c",
  "south" : DIR+"/rooms/x3y14z3.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
