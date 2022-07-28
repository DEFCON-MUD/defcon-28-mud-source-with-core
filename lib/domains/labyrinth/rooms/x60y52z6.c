inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 52, 6 }));
  set_short( "Passage - x60y52z6" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y52z6.c",
  "east" : DIR+"/rooms/x61y52z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
