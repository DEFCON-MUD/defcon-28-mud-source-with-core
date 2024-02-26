inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 53, 3 }));
  set_short( "Passage - x9y53z3" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y54z3.c",
  "south" : DIR+"/rooms/x9y52z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
