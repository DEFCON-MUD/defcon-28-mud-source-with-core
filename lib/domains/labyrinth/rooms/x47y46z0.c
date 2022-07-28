inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 46, 0 }));
  set_short( "Corridor - x47y46z0" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y46z0.c",
  "south" : DIR+"/rooms/x47y45z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
