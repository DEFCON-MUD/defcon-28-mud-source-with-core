inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 4, 8 }));
  set_short( "Corridor - x23y4z8" );
set_objects( DIR+"/npc/planner.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y4z8.c",
  "south" : DIR+"/rooms/x23y3z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
