inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 58, 5 }));
  set_short( "Passage - x61y58z5" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y59z5.c",
  "south" : DIR+"/rooms/x61y57z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
