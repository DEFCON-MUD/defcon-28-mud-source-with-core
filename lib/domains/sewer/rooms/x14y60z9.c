inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 60, 9 }));
  set_short( "Passage - x14y60z9" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y60z9.c",
  "east" : DIR+"/rooms/x15y60z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
