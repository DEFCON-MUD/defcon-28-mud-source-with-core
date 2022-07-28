inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 46, 2 }));
  set_short( "Corridor - x46y46z2" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y46z2.c",
  "east" : DIR+"/rooms/x47y46z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
