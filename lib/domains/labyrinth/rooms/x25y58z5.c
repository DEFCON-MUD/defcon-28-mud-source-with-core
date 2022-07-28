inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 58, 5 }));
  set_short( "Hallway - x25y58z5" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y58z5.c",
  "east" : DIR+"/rooms/x26y58z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
