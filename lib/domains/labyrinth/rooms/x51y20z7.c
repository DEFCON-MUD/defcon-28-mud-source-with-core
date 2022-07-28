inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 20, 7 }));
  set_short( "Hallway - x51y20z7" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y20z7.c",
  "south" : DIR+"/rooms/x51y19z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
