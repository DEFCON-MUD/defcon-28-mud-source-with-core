inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 22, 9 }));
  set_short( "Passage - x24y22z9" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y22z9.c",
  "east" : DIR+"/rooms/x25y22z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
