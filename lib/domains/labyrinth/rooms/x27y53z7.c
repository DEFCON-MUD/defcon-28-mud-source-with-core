inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 53, 7 }));
  set_short( "Corridor - x27y53z7" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y54z7.c",
  "south" : DIR+"/rooms/x27y52z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crap in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
