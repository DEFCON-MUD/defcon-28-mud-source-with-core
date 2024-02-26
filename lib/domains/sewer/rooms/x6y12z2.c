inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 12, 2 }));
  set_short( "Hallway - x6y12z2" );
set_objects( DIR+"/monsters/teher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y12z2.c",
  "east" : DIR+"/rooms/x7y12z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
