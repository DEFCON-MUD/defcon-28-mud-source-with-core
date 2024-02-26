inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 3, 1 }));
  set_short( "Hallway - x25y3z1" );
set_objects( DIR+"/monsters/leader.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y4z1.c",
  "south" : DIR+"/rooms/x25y2z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
