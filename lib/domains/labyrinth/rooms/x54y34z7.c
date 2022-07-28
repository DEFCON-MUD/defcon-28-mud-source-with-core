inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 34, 7 }));
  set_short( "Hallway - x54y34z7" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y34z7.c",
  "east" : DIR+"/rooms/x55y34z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
