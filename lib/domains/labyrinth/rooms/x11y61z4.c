inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 61, 4 }));
  set_short( "Passage - x11y61z4" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y62z4.c",
  "south" : DIR+"/rooms/x11y60z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
