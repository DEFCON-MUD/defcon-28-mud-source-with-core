inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 0, 8 }));
  set_short( "Hallway - x21y0z8" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y0z8.c",
  "east" : DIR+"/rooms/x22y0z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
