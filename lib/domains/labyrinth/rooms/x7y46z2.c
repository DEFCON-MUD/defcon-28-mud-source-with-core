inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 46, 2 }));
  set_short( "Passage - x7y46z2" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "south" : DIR+"/rooms/x7y45z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
