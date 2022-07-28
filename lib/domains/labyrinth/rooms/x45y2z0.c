inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 2, 0 }));
  set_short( "Hallway - x45y2z0" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y2z0.c",
  "north" : DIR+"/rooms/x45y3z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
