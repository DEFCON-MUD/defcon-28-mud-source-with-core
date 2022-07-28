inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 28, 4 }));
  set_short( "Hallway - x56y28z4" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y28z4.c",
  "east" : DIR+"/rooms/x57y28z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
