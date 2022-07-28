inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 60, 8 }));
  set_short( "Corridor - x7y60z8" );
set_objects( DIR+"/npc/wasteworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y60z8.c",
  "north" : DIR+"/rooms/x7y61z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
