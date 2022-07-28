inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 32, 0 }));
  set_short( "Corridor - x22y32z0" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y32z0.c",
  "east" : DIR+"/rooms/x23y32z0.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the gunk in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
