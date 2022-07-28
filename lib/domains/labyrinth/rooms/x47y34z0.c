inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 34, 0 }));
  set_short( "Corridor - x47y34z0" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y34z0.c",
  "north" : DIR+"/rooms/x47y35z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the gunk in this sty. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
