inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 15, 3 }));
  set_short( "Hallway - x15y15z3" );
set_objects( DIR+"/monsters/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y16z3.c",
  "south" : DIR+"/rooms/x15y14z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
