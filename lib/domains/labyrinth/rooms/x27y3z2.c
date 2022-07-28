inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 3, 2 }));
  set_short( "Corridor - x27y3z2" );
set_objects( DIR+"/npc/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y4z2.c",
  "south" : DIR+"/rooms/x27y2z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
