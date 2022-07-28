inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 30, 9 }));
  set_short( "Passage - x61y30z9" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y30z9.c",
  "south" : DIR+"/rooms/x61y29z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
