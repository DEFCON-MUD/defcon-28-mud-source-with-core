inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 57, 1 }));
  set_short( "Hallway - x33y57z1" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y58z1.c",
  "south" : DIR+"/rooms/x33y56z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
