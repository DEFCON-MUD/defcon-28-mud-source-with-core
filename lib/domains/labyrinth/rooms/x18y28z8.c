inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 28, 8 }));
  set_short( "Passage - x18y28z8" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y28z8.c",
  "east" : DIR+"/rooms/x19y28z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
