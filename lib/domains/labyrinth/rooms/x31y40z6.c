inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 40, 6 }));
  set_short( "Hallway - x31y40z6" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y41z6.c",
  "south" : DIR+"/rooms/x31y39z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
