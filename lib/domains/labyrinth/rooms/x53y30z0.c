inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 30, 0 }));
  set_short( "Corridor - x53y30z0" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y31z0.c",
  "south" : DIR+"/rooms/x53y29z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
