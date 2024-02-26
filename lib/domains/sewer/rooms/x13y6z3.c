inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 6, 3 }));
  set_short( "Corridor - x13y6z3" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y7z3.c",
  "south" : DIR+"/rooms/x13y5z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
