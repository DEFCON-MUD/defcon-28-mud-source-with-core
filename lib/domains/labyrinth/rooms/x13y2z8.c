inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 2, 8 }));
  set_short( "Hallway - x13y2z8" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y2z8.c",
  "east" : DIR+"/rooms/x14y2z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
