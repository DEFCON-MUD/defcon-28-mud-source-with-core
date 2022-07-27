inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 56, 9 }));
  set_short( "Passage - x25y56z9" );
set_objects( DIR+"/monsters/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y56z9.c",
  "south" : DIR+"/rooms/x25y55z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
