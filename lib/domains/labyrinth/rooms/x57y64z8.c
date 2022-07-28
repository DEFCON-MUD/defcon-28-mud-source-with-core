inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 64, 8 }));
  set_short( "Corridor - x57y64z8" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y64z8.c",
  "east" : DIR+"/rooms/x58y64z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this sty. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
