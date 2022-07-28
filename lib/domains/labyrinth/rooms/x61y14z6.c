inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 14, 6 }));
  set_short( "Corridor - x61y14z6" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y15z6.c",
  "south" : DIR+"/rooms/x61y13z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
