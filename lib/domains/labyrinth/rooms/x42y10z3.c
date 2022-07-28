inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 10, 3 }));
  set_short( "Corridor - x42y10z3" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y10z3.c",
  "east" : DIR+"/rooms/x43y10z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
