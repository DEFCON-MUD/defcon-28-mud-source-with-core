inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 42, 0 }));
  set_short( "Passage - x12y42z0" );
set_objects( DIR+"/npc/r1zerky.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y42z0.c",
  "east" : DIR+"/rooms/x13y42z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
