inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 55, 0 }));
  set_short( "Corridor - x7y55z0" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y56z0.c",
  "south" : DIR+"/rooms/x7y54z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
