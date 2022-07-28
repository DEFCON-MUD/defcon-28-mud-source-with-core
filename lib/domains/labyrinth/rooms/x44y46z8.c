inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 46, 8 }));
  set_short( "Hallway - x44y46z8" );
set_objects( DIR+"/npc/monitor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y46z8.c",
  "east" : DIR+"/rooms/x45y46z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
