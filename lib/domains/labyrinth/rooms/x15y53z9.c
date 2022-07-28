inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 53, 9 }));
  set_short( "Corridor - x15y53z9" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y54z9.c",
  "south" : DIR+"/rooms/x15y52z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
