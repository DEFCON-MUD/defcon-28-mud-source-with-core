inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 0, 2 }));
  set_short( "Passage - x42y0z2" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y0z2.c",
  "east" : DIR+"/rooms/x43y0z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
