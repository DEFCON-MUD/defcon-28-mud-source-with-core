inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 41, 4 }));
  set_short( "Corridor - x21y41z4" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y42z4.c",
  "south" : DIR+"/rooms/x21y40z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
