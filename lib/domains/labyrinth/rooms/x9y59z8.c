inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 59, 8 }));
  set_short( "Passage - x9y59z8" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y60z8.c",
  "south" : DIR+"/rooms/x9y58z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
