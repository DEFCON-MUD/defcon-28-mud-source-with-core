inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 58, 8 }));
  set_short( "Hallway - x23y58z8" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y58z8.c",
  "east" : DIR+"/rooms/x24y58z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
