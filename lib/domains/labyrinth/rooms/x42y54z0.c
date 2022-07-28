inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 54, 0 }));
  set_short( "Hallway - x42y54z0" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y54z0.c",
  "east" : DIR+"/rooms/x43y54z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
