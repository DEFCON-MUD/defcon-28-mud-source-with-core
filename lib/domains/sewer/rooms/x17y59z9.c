inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 59, 9 }));
  set_short( "Passage - x17y59z9" );
set_objects( DIR+"/monsters/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y60z9.c",
  "south" : DIR+"/rooms/x17y58z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
