inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 12, 4 }));
  set_short( "Corridor - x47y12z4" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y12z4.c",
  "south" : DIR+"/rooms/x47y11z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
