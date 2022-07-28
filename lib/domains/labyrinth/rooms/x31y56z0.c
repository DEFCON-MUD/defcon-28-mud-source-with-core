inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 56, 0 }));
  set_short( "Passage - x31y56z0" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y56z0.c",
  "east" : DIR+"/rooms/x32y56z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
