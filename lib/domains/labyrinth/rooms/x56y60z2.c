inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 60, 2 }));
  set_short( "Corridor - x56y60z2" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y60z2.c",
  "east" : DIR+"/rooms/x57y60z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
