inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 34, 9 }));
  set_short( "Hallway - x23y34z9" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y35z9.c",
  "south" : DIR+"/rooms/x23y33z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
