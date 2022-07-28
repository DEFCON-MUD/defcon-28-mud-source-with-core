inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 20, 9 }));
  set_short( "Passage - x4y20z9" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y20z9.c",
  "east" : DIR+"/rooms/x5y20z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
