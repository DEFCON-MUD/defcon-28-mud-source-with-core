inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 61, 8 }));
  set_short( "Passage - x7y61z8" );
set_objects( DIR+"/monsters/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y62z8.c",
  "south" : DIR+"/rooms/x7y60z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
