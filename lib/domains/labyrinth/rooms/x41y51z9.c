inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 51, 9 }));
  set_short( "Passage - x41y51z9" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y52z9.c",
  "south" : DIR+"/rooms/x41y50z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
