inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 32, 2 }));
  set_short( "Corridor - x5y32z2" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y32z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crappy sales material in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
