inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 10, 1 }));
  set_short( "Corridor - x51y10z1" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y10z1.c",
  "north" : DIR+"/rooms/x51y11z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the random junk evilmog thought up in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
