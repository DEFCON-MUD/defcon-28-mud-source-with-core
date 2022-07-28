inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 62, 4 }));
  set_short( "Corridor - x21y62z4" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y62z4.c",
  "south" : DIR+"/rooms/x21y61z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
