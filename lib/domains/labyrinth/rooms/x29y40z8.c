inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 40, 8 }));
  set_short( "Corridor - x29y40z8" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y40z8.c",
  "east" : DIR+"/rooms/x30y40z8.c",
  "north" : DIR+"/rooms/x29y41z8.c",
  "south" : DIR+"/rooms/x29y39z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
