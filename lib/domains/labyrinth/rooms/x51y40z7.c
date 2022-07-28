inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 40, 7 }));
  set_short( "Hallway - x51y40z7" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y41z7.c",
  "south" : DIR+"/rooms/x51y39z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
