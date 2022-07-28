inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 32, 8 }));
  set_short( "Corridor - x8y32z8" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y32z8.c",
  "east" : DIR+"/rooms/x9y32z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
