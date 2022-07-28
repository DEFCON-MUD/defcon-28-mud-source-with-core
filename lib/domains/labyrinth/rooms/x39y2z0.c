inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 2, 0 }));
  set_short( "Hallway - x39y2z0" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y2z0.c",
  "east" : DIR+"/rooms/x40y2z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
