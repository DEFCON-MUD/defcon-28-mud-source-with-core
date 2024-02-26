inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 62, 2 }));
  set_short( "Corridor - x13y62z2" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y62z2.c",
  "south" : DIR+"/rooms/x13y61z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
