inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 26, 2 }));
  set_short( "Hallway - x33y26z2" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y26z2.c",
  "north" : DIR+"/rooms/x33y27z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
