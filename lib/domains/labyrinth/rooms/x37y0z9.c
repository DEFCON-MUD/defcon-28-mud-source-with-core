inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 0, 9 }));
  set_short( "Corridor - x37y0z9" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y0z9.c",
  "east" : DIR+"/rooms/x38y0z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
