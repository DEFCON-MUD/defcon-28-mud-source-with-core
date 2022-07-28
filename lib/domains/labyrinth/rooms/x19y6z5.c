inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 6, 5 }));
  set_short( "Corridor - x19y6z5" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "south" : DIR+"/rooms/x19y5z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
