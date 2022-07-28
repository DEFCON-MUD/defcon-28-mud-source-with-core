inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 2, 5 }));
  set_short( "Corridor - x45y2z5" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y2z5.c",
  "east" : DIR+"/rooms/x46y2z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
