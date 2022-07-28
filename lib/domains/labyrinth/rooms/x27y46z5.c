inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 46, 5 }));
  set_short( "Passage - x27y46z5" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y46z5.c",
  "north" : DIR+"/rooms/x27y47z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
