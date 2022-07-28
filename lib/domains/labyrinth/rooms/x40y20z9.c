inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 20, 9 }));
  set_short( "Hallway - x40y20z9" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y20z9.c",
  "east" : DIR+"/rooms/x41y20z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
