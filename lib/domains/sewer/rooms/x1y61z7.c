inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 61, 7 }));
  set_short( "Hallway - x1y61z7" );
set_objects( DIR+"/monsters/job.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y62z7.c",
  "south" : DIR+"/rooms/x1y60z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crappy sales material in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
