inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 34, 9 }));
  set_short( "Corridor - x3y34z9" );
set_objects( DIR+"/npc/tawny.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y34z9.c",
  "north" : DIR+"/rooms/x3y35z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
