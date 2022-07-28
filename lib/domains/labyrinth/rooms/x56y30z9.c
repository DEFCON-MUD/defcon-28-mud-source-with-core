inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 30, 9 }));
  set_short( "Hallway - x56y30z9" );
set_objects( DIR+"/npc/cscccaptain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y30z9.c",
  "east" : DIR+"/rooms/x57y30z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
