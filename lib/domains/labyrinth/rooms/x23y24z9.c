inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 24, 9 }));
  set_short( "Corridor - x23y24z9" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y25z9.c",
  "south" : DIR+"/rooms/x23y23z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
