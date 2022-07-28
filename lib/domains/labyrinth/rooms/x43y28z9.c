inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 28, 9 }));
  set_short( "Corridor - x43y28z9" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y28z9.c",
  "east" : DIR+"/rooms/x44y28z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
