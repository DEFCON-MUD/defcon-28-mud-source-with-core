inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 0, 2 }));
  set_short( "Hallway - x25y0z2" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y0z2.c",
  "east" : DIR+"/rooms/x26y0z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
