inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 10, 2 }));
  set_short( "Hallway - x30y10z2" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y10z2.c",
  "east" : DIR+"/rooms/x31y10z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
