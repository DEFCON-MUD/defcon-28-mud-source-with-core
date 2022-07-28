inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 59, 0 }));
  set_short( "Hallway - x35y59z0" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y60z0.c",
  "south" : DIR+"/rooms/x35y58z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
