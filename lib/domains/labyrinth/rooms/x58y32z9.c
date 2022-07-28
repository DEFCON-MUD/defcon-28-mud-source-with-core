inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 32, 9 }));
  set_short( "Hallway - x58y32z9" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y32z9.c",
  "east" : DIR+"/rooms/x59y32z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
