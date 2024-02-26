inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 52, 0 }));
  set_short( "Hallway - x55y52z0" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y53z0.c",
  "south" : DIR+"/rooms/x55y51z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
