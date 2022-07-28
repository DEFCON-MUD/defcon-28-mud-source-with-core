inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 32, 5 }));
  set_short( "Hallway - x27y32z5" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y32z5.c",
  "north" : DIR+"/rooms/x27y33z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
