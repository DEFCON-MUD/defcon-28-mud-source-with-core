inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 44, 3 }));
  set_short( "Hallway - x7y44z3" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y44z3.c",
  "east" : DIR+"/rooms/x8y44z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
