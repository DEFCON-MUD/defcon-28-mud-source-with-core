inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 14, 7 }));
  set_short( "Corridor - x11y14z7" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y14z7.c",
  "east" : DIR+"/rooms/x12y14z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
