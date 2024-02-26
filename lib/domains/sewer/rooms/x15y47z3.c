inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 47, 3 }));
  set_short( "Hallway - x15y47z3" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y48z3.c",
  "south" : DIR+"/rooms/x15y46z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
