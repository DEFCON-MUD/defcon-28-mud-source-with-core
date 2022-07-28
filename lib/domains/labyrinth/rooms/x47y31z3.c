inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 31, 3 }));
  set_short( "Passage - x47y31z3" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y32z3.c",
  "south" : DIR+"/rooms/x47y30z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
