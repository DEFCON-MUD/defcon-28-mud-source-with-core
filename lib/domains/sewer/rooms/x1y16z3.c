inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 16, 3 }));
  set_short( "Hallway - x1y16z3" );
set_objects( DIR+"/monsters/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y17z3.c",
  "south" : DIR+"/rooms/x1y15z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
