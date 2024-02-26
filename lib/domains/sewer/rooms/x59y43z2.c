inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 43, 2 }));
  set_short( "Corridor - x59y43z2" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y44z2.c",
  "south" : DIR+"/rooms/x59y42z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
