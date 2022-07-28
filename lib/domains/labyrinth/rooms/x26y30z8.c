inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 30, 8 }));
  set_short( "Corridor - x26y30z8" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y30z8.c",
  "east" : DIR+"/rooms/x27y30z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the radioactive waste in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
