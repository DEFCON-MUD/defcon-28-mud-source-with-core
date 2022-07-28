inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 16, 1 }));
  set_short( "Hallway - x31y16z1" );
set_objects( DIR+"/npc/lrak.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y16z1.c",
  "east" : DIR+"/rooms/x32y16z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
