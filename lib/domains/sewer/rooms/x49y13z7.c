inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 13, 7 }));
  set_short( "Passage - x49y13z7" );
set_objects( DIR+"/monsters/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y14z7.c",
  "south" : DIR+"/rooms/x49y12z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
