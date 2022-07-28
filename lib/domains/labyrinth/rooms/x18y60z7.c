inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 60, 7 }));
  set_short( "Hallway - x18y60z7" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y60z7.c",
  "east" : DIR+"/rooms/x19y60z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
