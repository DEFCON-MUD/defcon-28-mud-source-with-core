inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 22, 9 }));
  set_short( "Passage - x40y22z9" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y22z9.c",
  "east" : DIR+"/rooms/x41y22z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
