inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 42, 3 }));
  set_short( "Passage - x39y42z3" );
set_objects( DIR+"/npc/john.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y42z3.c",
  "south" : DIR+"/rooms/x39y41z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
