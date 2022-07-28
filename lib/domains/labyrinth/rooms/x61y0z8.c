inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 0, 8 }));
  set_short( "Hallway - x61y0z8" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y0z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
