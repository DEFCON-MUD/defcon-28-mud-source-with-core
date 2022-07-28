inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 60, 5 }));
  set_short( "Corridor - x40y60z5" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y60z5.c",
  "east" : DIR+"/rooms/x41y60z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
