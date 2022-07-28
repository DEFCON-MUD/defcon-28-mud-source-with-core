inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 6, 5 }));
  set_short( "Passage - x14y6z5" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y6z5.c",
  "east" : DIR+"/rooms/x15y6z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
