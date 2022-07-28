inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 8, 7 }));
  set_short( "Passage - x9y8z7" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y8z7.c",
  "south" : DIR+"/rooms/x9y7z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the radioactive waste in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
