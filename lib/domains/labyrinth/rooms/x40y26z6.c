inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 26, 6 }));
  set_short( "Corridor - x40y26z6" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y26z6.c",
  "east" : DIR+"/rooms/x41y26z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
