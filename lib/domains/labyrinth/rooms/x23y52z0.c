inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 52, 0 }));
  set_short( "Corridor - x23y52z0" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y52z0.c",
  "south" : DIR+"/rooms/x23y51z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
