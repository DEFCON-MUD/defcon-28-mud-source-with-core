inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 41, 5 }));
  set_short( "Hallway - x5y41z5" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y42z5.c",
  "south" : DIR+"/rooms/x5y40z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
