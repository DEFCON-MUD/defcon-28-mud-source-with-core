inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 10, 2 }));
  set_short( "Hallway - x17y10z2" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y10z2.c",
  "south" : DIR+"/rooms/x17y9z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
