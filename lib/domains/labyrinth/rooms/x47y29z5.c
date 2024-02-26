inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 29, 5 }));
  set_short( "Hallway - x47y29z5" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y30z5.c",
  "south" : DIR+"/rooms/x47y28z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
