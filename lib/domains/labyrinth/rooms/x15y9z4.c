inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 9, 4 }));
  set_short( "Passage - x15y9z4" );
set_objects( DIR+"/npc/floorvine.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y10z4.c",
  "south" : DIR+"/rooms/x15y8z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
