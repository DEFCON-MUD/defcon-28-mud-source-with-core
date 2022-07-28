inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 51, 0 }));
  set_short( "Corridor - x23y51z0" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y52z0.c",
  "south" : DIR+"/rooms/x23y50z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
