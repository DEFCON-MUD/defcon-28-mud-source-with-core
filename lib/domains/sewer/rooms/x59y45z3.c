inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 45, 3 }));
  set_short( "Hallway - x59y45z3" );
set_objects( DIR+"/monsters/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y46z3.c",
  "south" : DIR+"/rooms/x59y44z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
