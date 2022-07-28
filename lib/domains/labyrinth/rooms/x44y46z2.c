inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 46, 2 }));
  set_short( "Corridor - x44y46z2" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y46z2.c",
  "east" : DIR+"/rooms/x45y46z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
