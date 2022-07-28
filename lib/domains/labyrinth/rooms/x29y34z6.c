inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 34, 6 }));
  set_short( "Corridor - x29y34z6" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y34z6.c",
  "north" : DIR+"/rooms/x29y35z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
