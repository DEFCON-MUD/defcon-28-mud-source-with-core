inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 0, 7 }));
  set_short( "Corridor - x31y0z7" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y0z7.c",
  "east" : DIR+"/rooms/x32y0z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
