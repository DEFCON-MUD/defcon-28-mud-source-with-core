inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 60, 4 }));
  set_short( "Hallway - x13y60z4" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y61z4.c",
  "south" : DIR+"/rooms/x13y59z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
