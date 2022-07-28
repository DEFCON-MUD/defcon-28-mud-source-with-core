inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 56, 8 }));
  set_short( "Passage - x31y56z8" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y57z8.c",
  "south" : DIR+"/rooms/x31y55z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
