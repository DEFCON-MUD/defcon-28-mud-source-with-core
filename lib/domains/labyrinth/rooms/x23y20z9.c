inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 20, 9 }));
  set_short( "Hallway - x23y20z9" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y20z9.c",
  "south" : DIR+"/rooms/x23y19z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
