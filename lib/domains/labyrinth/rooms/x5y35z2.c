inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 35, 2 }));
  set_short( "Hallway - x5y35z2" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y36z2.c",
  "south" : DIR+"/rooms/x5y34z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
