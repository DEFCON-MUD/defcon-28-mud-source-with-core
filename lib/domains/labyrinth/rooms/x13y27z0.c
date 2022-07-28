inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 27, 0 }));
  set_short( "Passage - x13y27z0" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y28z0.c",
  "south" : DIR+"/rooms/x13y26z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
