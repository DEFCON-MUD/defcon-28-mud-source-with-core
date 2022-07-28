inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 59, 5 }));
  set_short( "Passage - x61y59z5" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y60z5.c",
  "south" : DIR+"/rooms/x61y58z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
