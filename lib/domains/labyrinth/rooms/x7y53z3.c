inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 53, 3 }));
  set_short( "Hallway - x7y53z3" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y54z3.c",
  "south" : DIR+"/rooms/x7y52z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
