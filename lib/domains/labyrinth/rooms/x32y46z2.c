inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 46, 2 }));
  set_short( "Hallway - x32y46z2" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y46z2.c",
  "east" : DIR+"/rooms/x33y46z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
