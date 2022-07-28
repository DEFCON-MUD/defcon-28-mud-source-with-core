inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 58, 2 }));
  set_short( "Passage - x14y58z2" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y58z2.c",
  "east" : DIR+"/rooms/x15y58z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
