inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 45, 7 }));
  set_short( "Passage - x25y45z7" );
set_objects( DIR+"/monsters/enfoer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y46z7.c",
  "south" : DIR+"/rooms/x25y44z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
