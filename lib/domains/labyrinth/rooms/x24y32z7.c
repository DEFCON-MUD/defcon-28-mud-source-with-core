inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 32, 7 }));
  set_short( "Passage - x24y32z7" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y32z7.c",
  "east" : DIR+"/rooms/x25y32z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
