inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 16, 7 }));
  set_short( "Corridor - x27y16z7" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y16z7.c",
  "east" : DIR+"/rooms/x28y16z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
