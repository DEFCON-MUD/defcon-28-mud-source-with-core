inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 64, 0 }));
  set_short( "Hallway - x9y64z0" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y64z0.c",
  "east" : DIR+"/rooms/x10y64z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
