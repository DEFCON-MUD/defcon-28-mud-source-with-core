inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 44, 5 }));
  set_short( "Hallway - x38y44z5" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y44z5.c",
  "east" : DIR+"/rooms/x39y44z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
