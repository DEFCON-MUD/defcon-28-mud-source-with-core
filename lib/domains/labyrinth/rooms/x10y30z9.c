inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 30, 9 }));
  set_short( "Hallway - x10y30z9" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y30z9.c",
  "east" : DIR+"/rooms/x11y30z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
