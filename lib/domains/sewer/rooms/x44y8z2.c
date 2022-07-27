inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 8, 2 }));
  set_short( "Passage - x44y8z2" );
set_objects( DIR+"/monsters/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y8z2.c",
  "east" : DIR+"/rooms/x45y8z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
