inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 0, 3 }));
  set_short( "Passage - x43y0z3" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y0z3.c",
  "east" : DIR+"/rooms/x44y0z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
