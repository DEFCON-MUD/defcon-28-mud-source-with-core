inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 38, 9 }));
  set_short( "Hallway - x5y38z9" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y38z9.c",
  "north" : DIR+"/rooms/x5y39z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
