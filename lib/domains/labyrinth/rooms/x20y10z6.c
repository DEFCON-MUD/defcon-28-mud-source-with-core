inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 10, 6 }));
  set_short( "Hallway - x20y10z6" );
set_objects( DIR+"/npc/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y10z6.c",
  "east" : DIR+"/rooms/x21y10z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the sludge in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
