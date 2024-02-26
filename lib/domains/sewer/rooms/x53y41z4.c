inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 41, 4 }));
  set_short( "Hallway - x53y41z4" );
set_objects( DIR+"/monsters/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y42z4.c",
  "south" : DIR+"/rooms/x53y40z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the random junk evilmog thought up in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
