inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 42, 7 }));
  set_short( "Corridor - x48y42z7" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y42z7.c",
  "east" : DIR+"/rooms/x49y42z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
