inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 50, 2 }));
  set_short( "Hallway - x61y50z2" );
set_objects( DIR+"/npc/maintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y51z2.c",
  "south" : DIR+"/rooms/x61y49z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
