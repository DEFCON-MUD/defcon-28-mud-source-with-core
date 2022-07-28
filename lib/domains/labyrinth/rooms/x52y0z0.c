inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 0, 0 }));
  set_short( "Corridor - x52y0z0" );
set_objects( DIR+"/npc/atriumrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y0z0.c",
  "east" : DIR+"/rooms/x53y0z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
