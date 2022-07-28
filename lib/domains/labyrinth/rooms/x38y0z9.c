inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 0, 9 }));
  set_short( "Hallway - x38y0z9" );
set_objects( DIR+"/npc/zaryem.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y0z9.c",
  "east" : DIR+"/rooms/x39y0z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
