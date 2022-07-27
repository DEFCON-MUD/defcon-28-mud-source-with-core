inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 54, 0 }));
  set_short( "Corridor - x23y54z0" );
set_objects( DIR+"/monsters/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y54z0.c",
  "east" : DIR+"/rooms/x24y54z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
