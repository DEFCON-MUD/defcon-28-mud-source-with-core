inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 6 }));
  set_short( "Hallway - x35y38z6" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y39z6.c",
  "south" : DIR+"/rooms/x35y37z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
