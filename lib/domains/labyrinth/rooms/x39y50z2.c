inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 50, 2 }));
  set_short( "Hallway - x39y50z2" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y50z2.c",
  "south" : DIR+"/rooms/x39y49z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
