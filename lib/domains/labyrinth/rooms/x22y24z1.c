inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 24, 1 }));
  set_short( "Hallway - x22y24z1" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y24z1.c",
  "east" : DIR+"/rooms/x23y24z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
