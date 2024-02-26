inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 60, 5 }));
  set_short( "Passage - x23y60z5" );
set_objects( DIR+"/monsters/ckroh.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y60z5.c",
  "south" : DIR+"/rooms/x23y59z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
