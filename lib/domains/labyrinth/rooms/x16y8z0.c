inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 8, 0 }));
  set_short( "Hallway - x16y8z0" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y8z0.c",
  "east" : DIR+"/rooms/x17y8z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the sludge in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
