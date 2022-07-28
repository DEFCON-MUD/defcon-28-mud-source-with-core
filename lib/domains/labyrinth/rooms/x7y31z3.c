inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 31, 3 }));
  set_short( "Passage - x7y31z3" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y32z3.c",
  "south" : DIR+"/rooms/x7y30z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
