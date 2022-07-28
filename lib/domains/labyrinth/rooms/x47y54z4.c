inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 54, 4 }));
  set_short( "Passage - x47y54z4" );
set_objects( DIR+"/npc/eastformatter.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y54z4.c",
  "south" : DIR+"/rooms/x47y53z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
