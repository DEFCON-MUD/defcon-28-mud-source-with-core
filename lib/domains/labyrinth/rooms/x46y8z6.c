inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 8, 6 }));
  set_short( "Corridor - x46y8z6" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y8z6.c",
  "east" : DIR+"/rooms/x47y8z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
