inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 20, 2 }));
  set_short( "Corridor - x5y20z2" );
set_objects( DIR+"/npc/anthonyfox.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y20z2.c",
  "north" : DIR+"/rooms/x5y21z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
