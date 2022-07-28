inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 1, 8 }));
  set_short( "Passage - x19y1z8" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y2z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north.%^RESET%^");
}
