inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 46, 2 }));
  set_short( "Hallway - x60y46z2" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y46z2.c",
  "east" : DIR+"/rooms/x61y46z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
