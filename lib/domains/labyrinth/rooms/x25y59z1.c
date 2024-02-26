inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 59, 1 }));
  set_short( "Corridor - x25y59z1" );
set_objects( DIR+"/npc/jackback.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y60z1.c",
  "south" : DIR+"/rooms/x25y58z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
