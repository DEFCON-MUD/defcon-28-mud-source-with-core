inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 4, 3 }));
  set_short( "Passage - x6y4z3" );
set_objects( DIR+"/monsters/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y4z3.c",
  "east" : DIR+"/rooms/x7y4z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
