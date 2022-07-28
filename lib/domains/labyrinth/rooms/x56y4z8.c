inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 4, 8 }));
  set_short( "Passage - x56y4z8" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y4z8.c",
  "east" : DIR+"/rooms/x57y4z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
