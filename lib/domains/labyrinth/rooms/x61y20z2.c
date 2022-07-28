inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 20, 2 }));
  set_short( "Passage - x61y20z2" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "south" : DIR+"/rooms/x61y19z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
