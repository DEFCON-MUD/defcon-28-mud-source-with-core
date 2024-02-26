inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 6, 6 }));
  set_short( "Passage - x35y6z6" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y6z6.c",
  "east" : DIR+"/rooms/x36y6z6.c",
  "south" : DIR+"/rooms/x35y5z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
