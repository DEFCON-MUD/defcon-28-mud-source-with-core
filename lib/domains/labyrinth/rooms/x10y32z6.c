inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 32, 6 }));
  set_short( "Hallway - x10y32z6" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y32z6.c",
  "east" : DIR+"/rooms/x11y32z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
