inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 8, 0 }));
  set_short( "Hallway - x53y8z0" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y8z0.c",
  "north" : DIR+"/rooms/x53y9z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
