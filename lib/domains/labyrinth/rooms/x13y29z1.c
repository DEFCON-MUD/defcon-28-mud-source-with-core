inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 29, 1 }));
  set_short( "Hallway - x13y29z1" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y30z1.c",
  "south" : DIR+"/rooms/x13y28z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
