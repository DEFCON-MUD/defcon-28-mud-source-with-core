inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 23, 9 }));
  set_short( "Passage - x9y23z9" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y24z9.c",
  "south" : DIR+"/rooms/x9y22z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
