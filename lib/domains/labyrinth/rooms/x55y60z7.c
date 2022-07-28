inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 60, 7 }));
  set_short( "Passage - x55y60z7" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y61z7.c",
  "south" : DIR+"/rooms/x55y59z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
