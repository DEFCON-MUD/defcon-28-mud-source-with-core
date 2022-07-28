inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 26, 4 }));
  set_short( "Corridor - x10y26z4" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y26z4.c",
  "east" : DIR+"/rooms/x11y26z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
