inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 54, 0 }));
  set_short( "Hallway - x44y54z0" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y54z0.c",
  "east" : DIR+"/rooms/x45y54z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
