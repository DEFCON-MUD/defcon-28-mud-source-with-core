inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 42, 2 }));
  set_short( "Corridor - x59y42z2" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y42z2.c",
  "north" : DIR+"/rooms/x59y43z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
