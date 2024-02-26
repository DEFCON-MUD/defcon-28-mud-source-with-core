inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 15, 3 }));
  set_short( "Passage - x53y15z3" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y16z3.c",
  "south" : DIR+"/rooms/x53y14z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
