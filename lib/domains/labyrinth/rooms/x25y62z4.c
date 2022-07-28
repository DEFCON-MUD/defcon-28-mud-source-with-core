inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 62, 4 }));
  set_short( "Corridor - x25y62z4" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y62z4.c",
  "south" : DIR+"/rooms/x25y61z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
