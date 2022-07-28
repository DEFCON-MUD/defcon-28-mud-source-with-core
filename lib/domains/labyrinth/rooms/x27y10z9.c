inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 10, 9 }));
  set_short( "Passage - x27y10z9" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y10z9.c",
  "north" : DIR+"/rooms/x27y11z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
