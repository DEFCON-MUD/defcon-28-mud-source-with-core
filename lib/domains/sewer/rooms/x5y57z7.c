inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 57, 7 }));
  set_short( "Passage - x5y57z7" );
set_objects( DIR+"/monsters/clubdaer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y58z7.c",
  "south" : DIR+"/rooms/x5y56z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
