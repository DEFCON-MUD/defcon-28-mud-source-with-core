inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 62, 6 }));
  set_short( "Corridor - x11y62z6" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y62z6.c",
  "south" : DIR+"/rooms/x11y61z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
