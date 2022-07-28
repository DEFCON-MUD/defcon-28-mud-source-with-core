inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 57, 9 }));
  set_short( "Passage - x45y57z9" );
set_objects( DIR+"/npc/kavi.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y58z9.c",
  "south" : DIR+"/rooms/x45y56z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
