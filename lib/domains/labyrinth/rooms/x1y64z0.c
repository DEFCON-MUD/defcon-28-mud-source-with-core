inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 64, 0 }));
  set_short( "Passage - x1y64z0" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y64z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east.%^RESET%^");
}
