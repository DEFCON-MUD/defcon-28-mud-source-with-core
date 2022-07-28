inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 58, 4 }));
  set_short( "Hallway - x30y58z4" );
set_objects( DIR+"/npc/brian.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y58z4.c",
  "east" : DIR+"/rooms/x31y58z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
