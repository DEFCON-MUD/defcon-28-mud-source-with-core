inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 54, 2 }));
  set_short( "Passage - x17y54z2" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y54z2.c",
  "south" : DIR+"/rooms/x17y53z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
