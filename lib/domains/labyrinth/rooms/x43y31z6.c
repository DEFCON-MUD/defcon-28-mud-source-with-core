inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 31, 6 }));
  set_short( "Hallway - x43y31z6" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y32z6.c",
  "south" : DIR+"/rooms/x43y30z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
