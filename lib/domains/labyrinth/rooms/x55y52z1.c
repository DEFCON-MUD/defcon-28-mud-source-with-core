inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 52, 1 }));
  set_short( "Hallway - x55y52z1" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y52z1.c",
  "south" : DIR+"/rooms/x55y51z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
