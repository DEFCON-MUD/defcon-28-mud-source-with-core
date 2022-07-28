inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 55, 1 }));
  set_short( "Hallway - x57y55z1" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y56z1.c",
  "south" : DIR+"/rooms/x57y54z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
