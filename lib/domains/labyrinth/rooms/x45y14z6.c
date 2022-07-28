inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 14, 6 }));
  set_short( "Passage - x45y14z6" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y15z6.c",
  "south" : DIR+"/rooms/x45y13z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
