inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 4, 6 }));
  set_short( "Corridor - x19y4z6" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y4z6.c",
  "east" : DIR+"/rooms/x20y4z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
