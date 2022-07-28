inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 32, 0 }));
  set_short( "Corridor - x15y32z0" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y33z0.c",
  "south" : DIR+"/rooms/x15y31z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
