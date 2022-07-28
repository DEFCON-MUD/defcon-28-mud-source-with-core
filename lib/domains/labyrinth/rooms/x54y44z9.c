inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 44, 9 }));
  set_short( "Hallway - x54y44z9" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y44z9.c",
  "east" : DIR+"/rooms/x55y44z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
