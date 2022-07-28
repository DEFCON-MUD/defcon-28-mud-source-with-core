inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 40, 2 }));
  set_short( "Passage - x33y40z2" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "south" : DIR+"/rooms/x33y39z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
