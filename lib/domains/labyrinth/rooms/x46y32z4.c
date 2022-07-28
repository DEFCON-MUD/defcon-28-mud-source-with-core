inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 32, 4 }));
  set_short( "Hallway - x46y32z4" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y32z4.c",
  "east" : DIR+"/rooms/x47y32z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
