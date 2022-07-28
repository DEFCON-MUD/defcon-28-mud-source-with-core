inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 50, 5 }));
  set_short( "Corridor - x25y50z5" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "south" : DIR+"/rooms/x25y49z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west.%^RESET%^");
}
